#include <stdio.h>
int main() {
    int n,state[17],res[17],res1=-1,res2=0,res3=0,
    key[17]={0,0,3,0,5,6,7,0,0,0,0,0,0,0,15,16,17};
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d",&state[i]);
        res[i]=key[state[i]];
    }
    for (int i=0;i<n;i++) {
        res1&=res[i];
        res2|=res[i];
        res3^=res[i];
    }
    printf("%d %d %d",res1,res2,res3);
    return 0;
}