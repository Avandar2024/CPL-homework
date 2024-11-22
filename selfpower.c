#include <stdio.h>
#include <math.h>
int main(void) {
    int  N,sum=0,count=0,digit,originalN;
    scanf("%d",&N);
    originalN=N;
    while(N>0) {
        N/=10;
        count++;
    }
    N=originalN;
    while(N>0) {
        digit=N%10;
        sum+=pow(digit,count);
        N/=10;
    }
    if(sum==originalN)
        printf("%d",count);
    else
        printf("0");

    return 0;
}