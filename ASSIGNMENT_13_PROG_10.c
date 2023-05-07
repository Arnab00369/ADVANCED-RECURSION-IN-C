#include <stdio.h>
int powerpos(int,int);
int powerneg(int,int);
int main()
{
    int a,b;
    printf("Enter a Number = ");
    scanf("%d",&a);
    printf("Power = ");
    scanf("%d",&b);
    if(b>=0)
        printf("Output ::\n%d^%d = %d",a,b,powerpos(a,b));
    else
        printf("Output ::\n%d^%d = %d",a,b,powerneg(a,b));
    return 0;
}
int powerpos(int p,int q)
{
    if(q==1)
        return p;
    else
        return p*powerpos(p,q-1);
}
int powerneg(int p,int q)
{
    if(q==-1)
        return 1/p;
    else
        return 1/p*powerneg(1/p,q+1);
}
