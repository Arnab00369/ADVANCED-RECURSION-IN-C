#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printf("The Factorial of %d is = %d",n,fact(n));
    return 0;
}
int fact(int a)
{
    if(a==1||a==0)
        return 1;
    else
        return a*fact(a-1);
}
