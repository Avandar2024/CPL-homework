#include <stdio.h>
#define ALPHA 0.01
#define T 2000
int main() {
    double sita[2]={1.000,1.000},x[100],y[100];
    int m;
    scanf("%d",&m);
    for (int i=0;i<m;i++) {
        scanf("%lf %lf",&x[i],&y[i]);
    }
    for (int i=0;i<T;i++) {
        double J[2]={0};
        for (int j=0;j<m;j++) {
            J[0]+=(sita[0]+sita[1]*x[j]-y[j])/m;
            J[1]+=(x[j]*(sita[0]+sita[1]*x[j]-y[j]))/m;
        }
        sita[0]-=ALPHA*J[0];
        sita[1]-=ALPHA*J[1];
    }
    printf("y = %.3lf + %.3lfx",sita[0],sita[1]);
    return 0;
}