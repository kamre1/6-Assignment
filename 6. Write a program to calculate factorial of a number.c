#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter a Number:\n");
    scanf("%d",&n);



    for (int i=1; i<=n; i++)
    {
        fact=fact*i;

    }
    printf("\n Factorial of %d is:%d",n,fact);
    return 0;
}

