#include <stdio.h>
int sumeven(int);
int main()
{
    int n,b=0;
    printf("Enter the Limit upto which you want to print the Sum = ");
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         b+=2;
     }
    printf("The Sum of First %d Even Natural Numbers = %d",n,sumeven(b));
    return 0;
}
int sumeven(int a)
{

   if(a==0)
        return 0;
   else
        return a+sumeven(a-2);
}

