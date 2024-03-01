#include <stdio.h>
int main(){
    int Age;
    printf("Enter your Age:\n");
    scanf("%d", &Age);
    float Height;
    printf("Enter your Height: (cm)\n");
    scanf("%f", &Height);
    printf("Age = %d Height = %.2f cm", Age, Height);



    return 0;
    
}