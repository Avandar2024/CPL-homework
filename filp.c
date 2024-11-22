#include <stdio.h>
int main() {
    int n,str[2000]={0};
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        for (int j=i;j<=n;j++) {
            if(j%i==0) str[j]=!str[j];
        }
    }
    for (int i=1;i<=n;i++) {
        if(str[i]) printf("%d ",i);
    }
    return 0;
}