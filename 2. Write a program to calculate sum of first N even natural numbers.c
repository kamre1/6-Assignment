#include<stdio.h>
int main()
{

   /* int i=2, n, sum=0;

    printf("Enter a Number:\n");
    scanf("%d",&n);

    while(i<=2*n)
    {
      sum+=i;

      i+=2;

    }
    printf("Sum of Natural Number is :%d\n",sum);
    */

    int i,n,sum=0;

    printf("Enter Your Number:\n");
    scanf("%d",&n);

    for(i=2; i<=2*n; i+=2)
    {
        sum+=i;

    }
    printf("Sum of N Natural Number is: %d\n",sum);
    return 0;
}
