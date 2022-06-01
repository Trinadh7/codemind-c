#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,ci,k;
    scanf("%lf%lf%lf",&p,&r,&t);
    k=(1+(r/100.00));
    ci=p*pow(k,t);
    printf("%.2lf",ci);
}