#include <stdio.h>

int main()
{
    // Write C code here
    float num1, num2;
    int sym;
    printf("enter your first number=");
    scanf("%f", &num1);
    printf("enter the second number=");
    scanf("%f", &num2);
    printf("select \n 1.addition\n 2.Subtraction\n 3.multiplication \n 4.Division\n select from above option \n");
    scanf("%d", &sym);
    float sum = num1 + num2,sub = num1 - num2,mult = num1 * num2, div = num1 / num2;
    if (sym == 1)
        printf("your sum is =%f", sum);

    else if (sym == 2)
        printf("your result is =%f", sub);

    else if (sym == 3)
        printf("your result is =%f", mult);

    else if (sym == 4)
        printf("your result is = %f", div);

    else
        printf("please try again");

    return 0;
}
