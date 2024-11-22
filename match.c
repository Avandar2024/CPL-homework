#include <stdio.h>

int main() {
    int n,m,match[510][510]={0},g[500][2]={{0,0}},h[500][2]={{0,0}};
    int flag[500]={0};
    scanf("%d %d",&n,&m);
    for (int i=1;i<n+1;i++) {
        for (int j=1;j<m+1;j++) {
            scanf("%d",&match[i][j]);
            if (!flag[match[i][j]]) {
                 g[match[i][j]][0]=i;
                 h[match[i][j]][0]=j;
                 flag[match[i][j]]=1;
            }
            else {
                g[match[i][j]][1]=i;
                h[match[i][j]][1]=j;
            }
        }
    }
    for (int k=1;k<=n*m/2;k++) {
        int x=0,y=0,p=0,q=0,
        flag1=0,flag2=0,flag3=0,flag4=0,
        flag5=0,flag6=0,flag7=0,flag8=0;
        x=g[k][0]; y=h[k][0];
        p=g[k][1]; q=h[k][1];
        if (match[x+1][y]==0) flag1=1;
        if (match[x-1][y]==0) flag2=1;
        if (match[x][y+1]==0) flag3=1;
        if (match[x][y-1]==0) flag4=1;
        if (match[p+1][q]==0) flag5=1;
        if (match[p-1][q]==0) flag6=1;
        if (match[p][q+1]==0) flag7=1;
        if (match[p][q-1]==0) flag8=1;
        if (flag1 && flag5) {//down
            int sum1=0,sum2=0;
            for (int i=x+1;i<n+2;i++)
                sum1+=match[i][y];
            for (int i=p+1;i<n+2;i++)
                sum2+=match[i][q];
            if (sum1==0 && sum2==0) {
                printf("%d ",k);
                match[x][y]=0;
                match[p][q]=0;
                goto L;
            }
        }
        if (flag2 && flag6) {//up
            int sum1=0,sum2=0;
            for (int i=x-1;i>=0;i--)
                sum1+=match[i][y];
            for (int i=p-1;i>=0;i--)
                sum2+=match[i][q];
            if (sum1==0 && sum2==0) {
                printf("%d ",k);
                match[x][y]=0;
                match[p][q]=0;
                goto L;
            }
        }
        if (flag3 && flag7) {//right
            int sum1=0,sum2=0;
            for (int j=y+1;j<m+2;j++)
                sum1+=match[x][j];
            for (int j=q+1;j<m+2;j++)
                sum2+=match[p][j];
            if (sum1==0 && sum2==0) {
                printf("%d ",k);
                match[x][y]=0;
                match[p][q]=0;
                goto L;
            }
        }
        if (flag4 && flag8) {//left
            int sum1=0,sum2=0;
            for (int j=y-1;j>=0;j--)
                sum1+=match[x][j];
            for (int j=q-1;j>=0;j--)
                sum2+=match[p][j];
            if (sum1==0 && sum2==0) {
                printf("%d ",k);
                match[x][y]=0;
                match[p][q]=0;
            }
        }
    L:
    }
    return 0;
}