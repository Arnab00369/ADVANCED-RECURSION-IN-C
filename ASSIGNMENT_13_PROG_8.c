#include <stdio.h>
void fib(int a);
int main()
{
    int n;
    printf("Enter a Limit for printing N terms of Fibonacci Series = ");
    scanf("%d",&n);
    if(n==0)
        printf("SORRY !! Nothing to Print for '0' Term");
    else if(n==1)
        printf("First Fibonnaci Term is as follows ::\n 0");
    else if(n>=2)
        printf("First %d Terms of Fibonacci Series are as follows ::\n 0 1 ",n);
    fib(n-2);
    return 0;
}
void fib(int a)
{
    static int p=0,q=1,s;
    if(a>0)
    {
        s=p+q;
        p=q;
        q=s;
        printf("%d ",s);
        fib(a-1);
    }
}
