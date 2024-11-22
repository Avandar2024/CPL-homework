#include <stdio.h>
#include <math.h>
int main() {
    int len,N,judge=1;
    int temp=0;
    char s[30];
    scanf("%d %d",&len,&N);
    scanf("%s",s);
    for (int i=0;i<len;i++) {
        if(s[i]>='A')s[i]=s[i]-'A'+10;
        else s[i]=s[i]-'0';
    }
for (int i=0;i<len;i++) {
    if (s[i]>N-1) {
        printf("error\n");
        judge=0;
       return 0;
    }
}
    if(judge) {
        for (int i=0;i<len;i++)
            temp+=s[i]*(int)pow(N,len-i-1);
        printf("%d\n",temp);
    }
    return 0;
}