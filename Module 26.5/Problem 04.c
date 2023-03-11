#include<stdio.h>
float aoc(float);
int main()
{
    float r,result;
    scanf("%f",&r);
    result=aoc(r);
    printf("%f",result);
    return 0;
}
float aoc(float q)
{
    float w,pi;
    pi=3.14;
    w=pi*q*q;
    return w;
}
