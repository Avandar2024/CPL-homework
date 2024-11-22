#include <stdio.h>
 int main() {
     long int T,max=0;
     int count[100000]={0};
     scanf("%ld",&T);
     for (int i=0;i<T;i++) {
         int n;max=0;
         scanf("%d",&n);
         for (int j=0;j<n;j++) {
             long int temp;
             scanf("%ld",&temp);
             if (temp>=max ) {
                 max=temp;
                 if (j==n-1) count[i]=1;
             }
         }
     }
     for (int i=0;i<T;i++) {
         if (count[i]) printf("Yes\n");
         else printf("No\n");
     }
     return 0;
 }
