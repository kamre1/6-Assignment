#include<stdio.h>
int main()
{
    int n,sum = 0;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){


        sum += (i * i);
          }
          printf("Sum Of Square N Natural Number is :%d\n",sum);
          return 0;

}
