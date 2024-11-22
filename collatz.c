#include <stdio.h>
#include <math.h>
int main() {
    int n,max,step;
    scanf("%d",&n);
    max=n;
    for (int i=0;n!=1;i++) {
        if(n%2==0)
            n=n/2;
        else {
            n=3*n+1;
            if (n>max)
                max=n;
        }
        step=i+1;
    }
    printf("%d %d\n",step,max);
    return 0;
}