#include <stdio.h>
int nsum(int);
int main()
{
    int n;
    printf("Enter upto which number you want to print the sum of Natural Numbers ::\nN = ");
    scanf("%d",&n);
    printf("The Sum of First %d Natural Numbers is = %d",n,nsum(n));
    return 0;
}
int nsum(int a)
{
    if(a==1)
        return 1;
    else
        return a+nsum(a-1);
}
