#include<stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\n Enter an operator(+,_,*,/,%%): ");
    scanf("%c", &choice);
    switch (choice)
    {
    case'+':
        printf("addition=%d\n", a+b);
        break;
    case'-':
        printf("subtraction=%d\n", a-b);
        break;
    case'*':
        printf("multiplication=%d\n", a*b);
        break;
    case'/':
        if(b!=0)
            printf("Division=%d\n",a/b);
        else
            printf("Division by zero is not possible.\n");
        break;
    case'%':
        if (b!=0)
            printf("Modulus=%d\n", a%b);
        else
            printf("Modulus by zero is not possible.\n");
        break;
    default:
        printf("Invalid operators.\n");
    }
    return 0;

}
