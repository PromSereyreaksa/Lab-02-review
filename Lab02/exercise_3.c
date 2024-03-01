#include <stdio.h>
int main(){
    // 20.5 + 30.2 + 50
    float num1 = 20.5;
    float num2 = 30.2;
    int num3 = 50;
    float sum;
    sum = num1 + num2 + num3;
    printf("%.2f + %.2f + %d = %.2f", num1, num2, num3, sum);
    return 0;
}