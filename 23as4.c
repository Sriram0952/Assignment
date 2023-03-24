#include <stdio.h>
#define ASCII_SIZE 256 // define the size of ASCII character set

int main()
{
    char str[100];
    int count[ASCII_SIZE] = {0}; // initialize the count array to 0
    int i, max, ascii_val;

    printf("Enter a string: ");
    gets(str);

    // Count frequency of each character in the given string
    for(i = 0; str[i] != '\0'; i++)
    {
        ascii_val = (int)str[i]; // convert character to ASCII value
        count[ascii_val]++;
    }

    // Find the maximum occurring character in the string
    max = 0;
    for(i = 0; i < ASCII_SIZE; i++)
    {
        if(count[i] > count[max])
            max = i;
    }

    printf("The highest occurring character in the string is '%c' with frequency %d.", max, count[max]);

    return 0;
}
