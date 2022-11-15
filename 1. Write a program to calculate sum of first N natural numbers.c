#include<stdio.h>
int main()
{

    /*int i=1 , n, sum=0;
    printf("Enter Your Number:\n");
    scanf("%d",&n);

    while(i<=n)
    {
       sum+=i;

        i++;
    }

    printf("Sum of Natural Number is :%d\n",sum);

    */

      int i, n, sum=0;
      printf("Enter a Number:\n");
      scanf("%d",&n);

      for(i=1; i<=n; i++)
      {
          sum =sum+i;

      }
      printf("sum of Natural Number is:%d",sum);

    return 0;
}
