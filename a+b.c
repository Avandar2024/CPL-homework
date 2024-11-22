#include <stdio.h>
#include <string.h>
void reserve(char a[]) {
    int len=strlen(a);
    for (int i=0,j=len-1;i<j;i++,j--) {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
int main() {
 char a[2000]="",b[2000]="",result[2000];
 while (scanf("%s %s",a,b)!=EOF) {
     reserve(a); reserve(b);
     memset(result,0,sizeof(result));
     int len_a=strlen(a),len_b=strlen(b);
     int max=(len_a>len_b)?len_a:len_b;
     for (int i=0;i<max+1;i++) {
         if (a[i]==0) a[i]='0';
         if (b[i]==0) b[i]='0';
         int temp=a[i]+b[i]+result[i]-'0';
         if (temp>'9') {
             temp=(temp-'0')%10+'0';
             result[i]=temp;
             result[i+1]++;
         }
         else {
             result[i]=temp;
         }
     }
     if (result[max+1]=='0'*2) result[max+1]=0;
     reserve(result);
     printf("%s\n",result);
     memset(a,0,sizeof(a));
     memset(b,0,sizeof(b));
 }
    return 0;
}