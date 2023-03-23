#include<stdio.h>

int power(int,int);
int main()
{
    int b,p,r;
    scanf("%d %d",&b,&p);
    r=power(b,p);
    printf("%d\n",r);
    return 0;
}
int power(int b,int p)
{
    if(p==0)
        return 1;
    else
        return b* power(b,p-1);
}

