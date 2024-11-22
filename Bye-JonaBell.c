#include <stdio.h>
int main() {
    int n,k,b,l,state[1505]={0};
    scanf("%d %d %d %d",&n,&k,&b,&l);
    for (int i=0;i<n;i++) {
        state[i]=l;
    }
    int bullet=b,useful=-1,remain=n;
    while (remain!=1) {
        int j=useful+1,count=0;
        while (count!=k) {
            if(state[j%n]!=0) {
                useful=j%n;
                count++;
            }
            j++;
        }
        if (count==k && bullet!=0) {
            state[useful]--;
            if (state[useful]==0)
                remain--;
            bullet--;
        }
        else if(count==k && bullet==0){
            bullet=b;
        }
    }
    for (int i=0;i<n;i++) {
        if (state[i]==1)
            printf("%d",i+1);
    }
    return 0;
}
