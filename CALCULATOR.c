
#include <stdio.h>

int main()
{
    int a,b;
    char op;
    printf("Enter 2 numbers to operate on\n");
    scanf("%d %d", &a, &b);

    printf("Enter the operator\n");
    scanf(" %c",&op);
    
  
    switch(op)
    {
        case '+':
        printf("HENCE THE CALCULATION IS\n%d + %d = %d",a,b,a+b);
        break;

        case '-':
        printf("HENCE THE CALCULATION IS\n%d - %d = %d",a,b,a-b);
        break;

        case '*':
        printf("HENCE THE CALCULATION IS\n%d * %d = %d",a,b,a*b);
        break;

        case '/':
        printf("HENCE THE CALCULATION IS\n%d / %d = %d",a,b,a/b);
        break;

        default:
        printf("Enter valid operator");
        break;
    }
  return 0;
}
