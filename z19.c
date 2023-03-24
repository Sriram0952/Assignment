#include <stdio.h>
#include <string.h>

char* add_binary_strings(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int maxlen = len1 > len2 ? len1 : len2;
    char* result = (char*) malloc((maxlen + 1) * sizeof(char));
    result[maxlen] = '\0';
    int carry = 0;
    int i, j;
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--) {
        int digit1 = i >= 0 ? s1[i] - '0' : 0;
        int digit2 = j >= 0 ? s2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 2;
        int digit = sum % 2;
        result[maxlen - (i > j ? i : j) - 1] = digit + '0';
    }
    if (carry > 0) {
        result = (char*) realloc(result, (maxlen + 2) * sizeof(char));
        result[maxlen + 1] = '\0';
        result[maxlen] = '1';
        for (i = maxlen - 1; i >= 0; i--) {
            result[i + 1] = result[i];
        }
        result[0] = '1';
    }
    return result;
}

int main() {
    char* s1 = "1101";
    char* s2 = "100101";
    char* result = add_binary_strings(s1, s2);
    printf("%s\n", result);  // Output: 110010
    free(result);

    s1 = "1111001001111101";
    s2 = "10000";
    result = add_binary_strings(s1, s2);
    printf("%s\n", result);  // Output: 1111001010001101
    free(result);

    return 0;
}
110010
1111001010001101
