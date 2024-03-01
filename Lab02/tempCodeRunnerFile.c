#include <stdio.h>
int main(){
    int a;
    int b;
    char ch;
    int sum;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a second number: ");
    scanf("%d", &b);
    printf("Please select an option (+, -, *, /): ");
    scanf(" %c", &ch);
    if(a > b){
        // If 'a' is greater than 'b', perform the operation directly
    } else {
        // If 'a' is not greater than 'b', swap the values of 'a' and 'b'
        int temp = a;
        a = b;
        b = temp;
    }
    switch(ch) {
        case'+':
        sum = a + b;
        printf("%d + %d = %d\n", a, b, sum);
        break;
        case'-':
        sum = a - b;
        printf("%d - %d = %d\n", a, b, sum);
        break;
        case'*':
        sum = a * b;
        printf("%d * %d= %d\n", a, b, sum);
        break;
        case'/':
        sum = a / b;
        printf("%d / %d= %d\n", a, b, sum);
        break;

    }
    
    return 0;   
}