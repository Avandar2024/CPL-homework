#include <stdio.h>
#include <stdbool.h>
#define f(x,y,z) (flag1)==(x) && (flag2)==(y) && (flag3)==(z)
int main() {
    int t,x,map[20][20]={0};
    scanf ("%d %d",&t,&x);
    for (int k=0;k<t;k++) {
        int n;
        bool flag1=true,flag2=true,flag3=true;
        scanf ("%d",&n);
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                scanf ("%d",&map[i][j]);
            }
        }
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (flag1==true && map[i][j]==1) {
                    int sum1=0;
                    int sum2=0;
                    int sum3=0;
                    int sum4=0;
                    for (int q=0;q<x;q++) {
                        if (map[i+q][j]==1) sum1++;
                        if (map[i][j+q]==1) sum2++;
                        if (map[i+q][j+q]==1) sum3++;
                        if (j-x+1>=0 && i+x-1<n)
                            if (map[i+q][j-q]==1)
                               sum4++;
                    }
                    if (sum1==x  ||
                        sum2==x  ||
                        sum3==x  ||
                        sum4==x) {
                        flag1=false;
                    }
                }
                if (flag2==true && map[i][j]==2) {
                    int sum1=0;
                    int sum2=0;
                    int sum3=0;
                    int sum4=0;
                    for (int q=0;q<x;q++) {
                        if (map[i+q][j]==2) sum1++;
                        if (map[i][j+q]==2) sum2++;
                        if (map[i+q][j+q]==2) sum3++;
                        if (j-x+1>=0 && i+x-1<n)
                            if (map[i+q][j-q]==2)
                                sum4++;
                    }
                    if (sum1==x  ||
                        sum2==x  ||
                        sum3==x  ||
                        sum4==x) {
                        flag2=false;
                    }
                }
                if (flag3==true && map[i][j]==4) {
                    int sum1=0;
                    int sum2=0;
                    int sum3=0;
                    int sum4=0;
                    for (int q=0;q<x;q++) {
                        if (map[i+q][j]==4) sum1++;
                        if (map[i][j+q]==4) sum2++;
                        if (map[i+q][j+q]==4) sum3++;
                        if (j-x+1>=0 && i+x-1<n)
                            if (map[i+q][j-q]==4)
                                sum4++;
                    }
                    if (sum1==x  ||
                        sum2==x  ||
                        sum3==x  ||
                        sum4==x) {
                        flag3=false;
                    }
                }
            }
        }
        if (f(false,true,true))
            printf("1\n");
        else if (f(true,false,true))
            printf("2\n");
        else if (f(true,true,false))
            printf("4\n");
        else
            printf("draw\n");
    }
    return 0;
}