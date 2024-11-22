#include <stdio.h>
int main() {
   int m,n;
    scanf ("%d %d", &m, &n);
    if (n==1)n=7;
    else n=n-1;
    for (int i=1;i<=m+n-1;i++){
        if(i<n)printf("    ");
        else if(i%7==0)printf("%2d\n",i-n+1);
        else printf("%2d  ",i-n+1);
    }
    return 0;
}