#include <stdio.h>

int main() {
    char operator;
    float n1, n2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &n1, &n2);

    switch (operator) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = n1 / n2;
            break;
        case '%':
            if (n2 == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = (int)n1 % (int)n2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", n1, operator, n2, result);

    return 0;
}
//output Enter an operator (+, -, *, /, %): *
Enter two operands: 3.5 2.0
3.50 * 2.00 = 7.00//