#include<stdio.h>
int main()
{
   int x=1,n, sum=0;
   printf("Enter Odd natural Number:\n");
    scanf("%d",&n);


   // while(x<=n)
   // {
   //     sum=sum+2*x-1;

   //     x++;
    //}
    //printf("Sum of N Odd Natural Number is : %d\n",sum);

    for(x=1; x<=n; x++)
    {
        sum = sum+2*x-1;
    }

    printf("sum of N Odd Natural Number is :%d\n", sum);


    return 0;
}
