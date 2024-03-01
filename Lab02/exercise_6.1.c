#include <stdio.h>

int main(){
    int a, b, sum, diff, product, quotient;
    char ch;

    printf("Enter two numbers: ");
    
    scanf("%d %d", &a, &b, &sum);
    // Sum of the two numbers)
    printf("Enter an operation (+, -, *, /): ");
    scanf("%c", &ch);

    switch(ch) {
        case '+':
            sum = a + b;
            printf("%d + %d = %d\n", a, b, sum);
            break;
        case '-':
            diff = a - b;
            printf("%d - %d = %d\n", a, b, diff);
            break;
        case '*':
            product = a * b;
            printf("%d * %d = %d\n", a, b, product);
            break;
        case '/':
            if(b == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                quotient = a / b;
                printf("%d / %d = %d\n", a, b, quotient);
            }
            break;
        default:
            printf("Error! Invalid operation.\n");
            break;
    }

    return 0;
}