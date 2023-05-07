#include <stdio.h>
void cdig(unsigned long long a);
int main()
{
    unsigned long long n;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printf("Number of Digits in %d = ",n);
    cdig(n);
    return 0;
}
void cdig(unsigned long long a)
{
    static unsigned long long c=0;
    if(a>0)
    {
        ++c;
        cdig(a/10);
    }
    else if(a==0)
    printf("%d",c);

}
