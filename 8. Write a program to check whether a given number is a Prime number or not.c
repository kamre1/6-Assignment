#include<stdio.h>
int main()
{
    int n,f=0, i;
    printf("Enter a Number:\n");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
          f=1;
          break;
        }
    }
    if(f==0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
