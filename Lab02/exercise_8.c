#include <stdio.h>
int main(){
    int r = 21;
    float pi = 3.14;
    float sum;
    sum = r * pi * 2;
    printf("The given radius is 21cm");
    printf("The formula for Circle circumference is 2*pi*r therefore\n-> 2 * %d * %.2f = %.2f cm", r, pi, sum);
    return 0;

}