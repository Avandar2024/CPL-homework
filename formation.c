#include <stdio.h>
#define MAX_SIZE 200
#define F(x,y,z) ((left)==(x) &&(center)==(y) && (right)==(z))
int main() {
    int row,col;
    scanf("%d %d",&row,&col);
    char map[MAX_SIZE][MAX_SIZE]={0};
    scanf ("%s",map[0]);
    for (int j=0;j<col;j++) {
        map[0][j]-='0';
    }
    for (int i=1;i<row;i++) {
        for (int j=0;j<col;j++) {
            int left= (j==0) ? 0 :map[i-1][j-1];
            int center=map[i-1][j];
            int right= (j==col-1) ? 0 :map[i-1][j+1];
            if (F(1,1,0)||F(1,0,1)||F(0,1,1)||F(0,1,0)||F(0,0,1))
                map[i][j]=1;
            else
                map[i][j]=0;
            printf("%d",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}