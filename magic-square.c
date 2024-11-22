#include <stdio.h>
int main() {
    int n=0,magic_square[100][100]={0};
    scanf("%d",&n);
    int i=0,j=n/2,x=i,y=j;
    for (int k=1;k<=n*n;k++) {
        if (i<0) i+=n;
        if (j>=n) j-=n;
        if (magic_square[i][j]!=0) {
            magic_square[++x][y]=k;
            i=x;j=y;
        }
        else {
            magic_square[i][j]=k;
            x=i;y=j;
        }
        i--; j++;
    }
    for (int p=0;p<n;p++) {
        for (int q=0;q<n/2;q++) {
            int tmp=magic_square[p][q];
            magic_square[p][q]=magic_square[p][n-1-q];
            magic_square[p][n-1-q]=tmp;
        }
    }
    for (int p=0;p<n;p++) {
        for (int q=0;q<n;q++) {
            printf("%d ",magic_square[p][q]);
        }
        printf("\n");
    }
    return 0;
}