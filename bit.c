#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int k=0,count=0,c;
    c=a;
    do {
        count+=c&1;
        c>>=1;
        k++;
    }while (c!=0);
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);
    printf("%d\n",~a);
    printf("%d\n",a<<b);
    printf("%d\n",a>>b);
    printf("%d\n",a>>b&1);
    printf("%d\n",count);
    return 0;
}