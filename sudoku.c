#include <stdio.h>
#define CROSS 362880
#define SUM 45
#define XOR 1
int main() {
    int sudo[9][9]={0},row[9]={0},col[9]={0},unti[9]={0};
    for (int i=0;i<9;i++) {
        for (int j=0;j<9;j++) {
            scanf("%d",&sudo[i][j]);
        }
    }
    for (int i=0;i<9;i++) {
        int cross=1,sum=0,xor=0;
        for (int j=0;j<9;j++) {
           sum+=sudo[i][j];
            cross*=sudo[i][j];
            xor^=sudo[i][j];
        }
        if (sum==SUM && cross==CROSS && xor==XOR)
            row[i]=1;
    }
    for (int j=0;j<9;j++) {
        int cross=1,sum=0,xor=0;
        for (int i=0;i<9;i++) {
            sum+=sudo[i][j];
            cross*=sudo[i][j];
            xor^=sudo[i][j];
        }
        if (sum==SUM && cross==CROSS && xor==XOR)
            col[j]=1;
    }
    for (int k=0;k<9;k++) {
        int cross=1,sum=0,xor=0;
        for (int i=k/3*3;i<k/3*3+3;i++) {
            for (int j=(3*k)%9;j<(3*k)%9+3;j++) {
                sum+=sudo[i][j];
                cross*=sudo[i][j];
                xor^=sudo[i][j];
            }
        }
        if (sum==SUM && cross==CROSS && xor==XOR)
            unti[k]=1;
    }
    int flag1=0,flag2=0,flag3=0;
    for (int i=0;i<9;i++) {
        flag1+=row[i];
        flag2+=col[i];
        flag3+=unti[i];
    }
    if (flag1==9 && flag2==9 && flag3==9)
        printf ("YES");
    else
        printf("NO");
return 0;
}
