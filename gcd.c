#include <stdio.h>
int main() {
    int a,b,gcd;
    scanf("%d %d",&a,&b);
    if (a>b) {
        int temp=a;
        a=b;
        b=temp;
    }
    for (int i=1;i<=a;i++) {
        if (a%i==0 && b%i==0)
            gcd=i;
    }
    printf("%d\n",gcd);
    return 0;
}
