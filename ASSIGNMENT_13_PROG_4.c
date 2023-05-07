#include <stdio.h>
int sumsq(int);
int main()
{
    int n;
    printf("Enter a Limit upto which you want to print the Sum of Squares = ");
    scanf("%d",&n);
    printf("The Sum of Squares of First %d Natural Numbers = %d",n,sumsq(n));
    return 0;
}
int sumsq(int a)
{
    if(a==0)
        return 0;
    else
        return a*a+sumsq(a-1);
}
