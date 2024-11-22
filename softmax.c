#include <stdio.h>
#include <math.h>
int main() {
    int n,k;
    double x[105],t[25];
    scanf("%d %d",&n,&k);
    for (int i=0;i<n;i++)
        scanf("%lf",&x[i]);
    for (int i=0;i<k;i++)
        scanf("%lf",&t[i]);
    for (int i=0;i<k;i++) {
        double Var=0,sum=0;
        for (int j=0;j<n;j++) {
            sum+=exp(x[j]/t[i]);
        }
        for (int j=0;j<n;j++) {
            double y=exp(x[j]/t[i])/sum;
            Var+=(y-1.0/n)*(y-1.0/n);
            printf("%.3lf ",y);
        }
        Var/=n;
        printf("%.3lf\n",Var);
    }

    return 0;
}