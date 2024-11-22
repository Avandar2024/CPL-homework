#include <stdio.h>
int main() {
   int n,m,count=0;
   scanf("%d %d",&n,&m);
   int a[100][100]={{0}},b[100][100]={{0}};
   for (int i=0;i<n;i++) {
      for (int j=0;j<m;j++) {
         scanf("%d",&a[i][j]);
      }
   }
   for (int i=0;i<n;i++) {
      for (int j=0;j<m;j++) {
         scanf("%d",&b[i][j]);
      }
   }
   for (int i=0;i<n;i++) {
      for (int j=0;j<m;j++) {
         if (a[i][j]==b[i][j]) count++;
      }
   }
   printf("%.2f",(double)count/(m*n)*100);
   return 0;
}