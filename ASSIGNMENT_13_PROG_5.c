#include <stdio.h>
int sumdig(int);
int main()
{
    int n;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printf("The Sum of Digits of %d is = %d",n,sumdig(n));
    return 0;
}
int sumdig(int a)
{
    if(a==0)
        return 0;
    else
        return a%10+sumdig(a/10);
}
