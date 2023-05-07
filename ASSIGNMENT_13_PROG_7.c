#include <stdio.h>
int hcf(int,int);
int main()
{
    int a,b;
    printf("Enter Two Numbers ::\n1st Number = ");
    scanf("%d",&a);
    printf("2nd Number = ");
    scanf("%d",&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    printf("The H.C.F. of %d and %d is = %d",a,b,hcf(a,b));
    return 0;
}
int hcf(int p,int q)
{
   if(q%p==0)
    return p;
   else
    return hcf(q%p,p);

}
