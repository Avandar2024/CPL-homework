#include <stdio.h>
#include <math.h>
int main(){
    int  n,x=-1;
    int vis[5000]={0},prime[5000]={0};
    scanf("%lld",&n);
    for(int i=2;i<=n;i++) {
        if(!vis[i]) prime[x++]=i;
        for(int j=0;j<x;j++) {
            if(i*prime[j]>n) break;
            vis[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
    return 0;
}