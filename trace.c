#include <stdio.h>
#include <stdbool.h>
#define Max 50
int main() {
    int n,m,x,y;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    bool vis[Max][Max]={false};
    char map[Max][Max]={0};
    for (int i=0;i<n;i++) {
        scanf("%s",map[i]);
    }
    int ans=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (map[i][j]=='#') {
                ans++;
                vis[i][j]=true;
            }
        }
    }
    printf("%d\n",ans);
    int vector[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    int i=x-1,j=y-1,k=0;
    while (k<ans-1) {
        printf("%d %d\n",i+1,j+1);
        vis[i][j]=false;
        for (int f=0;f<4;f++) {
            int newI = i+vector[f][0];
            int newJ = j+vector[f][1];
            if (newI>=0 && newI<n && newJ>=0 && newJ<m) {
                if (map[newI][newJ]=='#' &&
                    vis[newI][newJ]==true) {
                    i=newI;
                    j=newJ;
                    k++;
                    break;
                }
            }
        }
    }
    printf("%d %d\n",i+1,j+1);
    return 0;
}