#include <stdio.h>
int sumoddd(int);
int main()
{
    int n,b=-1;
    printf("Enter the Limit upto which you want to print the Sum = ");
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         b+=2;
     }
    printf("The Sum of First %d Odd Natural Numbers = %d",n,sumodd(b));
    return 0;
}
int sumodd(int a)
{

   if(a==1)
        return 1;
   else
        return a+sumodd(a-2);
}
