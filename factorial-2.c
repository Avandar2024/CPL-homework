#include <stdio.h>
int main() {
    int n; unsigned long long int sum=0,flag=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
            flag*=i%1000000007;
            flag%=1000000007;
        sum+=flag;
    }
printf("%lld",sum);
    return 0;
}