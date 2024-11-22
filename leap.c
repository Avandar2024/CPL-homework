#include <stdio.h>

int main(void) {
    long long int n,k;
    unsigned long long flag;
    scanf("%lld %lld",&n,&k);
    flag=n+k
    if(n%4!=0)
        printf("Normal year!\n");
    else if(n%4==0 && n%100!=0)
        printf("Leap year!\n");
    else if(n%100==0 && n%400!=0)
        printf("Normal year!\n");
    else
        printf("Leap year!\n");
    if((flag%4)!=0)
        printf("Normal year!\n");
    else if((flag%4)==0 && (flag%100)!=0)
        printf("Leap year!\n");
    else if((flag%100)==0 && (flag%400)!=0)
        printf("Normal year!\n");
    else
        printf("Leap year!\n");
    return 0;
}//
// Created by dell on 2024/10/11.
//
