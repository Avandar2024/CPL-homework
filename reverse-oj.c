#include<stdio.h>
#include <ctype.h>
int main () {
    int len;
    char s[100005]="";
    scanf("%d",&len);
    scanf("%s",s);
    for (int i=0;i<len;i++) {
        if (!isdigit(s[i])) {
            if (islower(s[i]))
                s[i]=s[i]-'a'+'A';
            else
                s[i]=s[i]-'A'+'a';
        }
    }
    for (int i=0,j=len-1;i<j;i++,j--) {
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
        printf("%s",s);
    return 0;
}