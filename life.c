#include <stdio.h>
#include <string.h>
#define KILLER 1
#define HELPER 2

int len;
char copy[1010]="";
int num_normal(char s[],int position, int mode) {
    int left_bound=-3,right_bound=3,count_A=0,count_B=0;
    while (position+left_bound<0)
        left_bound++;
    while (position+right_bound>=len)
        right_bound--;
    for (int i=left_bound;i<=right_bound;i++) {
        if (i==0)
            continue;
        if (s[position+i]=='A')
            count_A++;
        if (s[position+i]=='B')
            count_B++;
    }
    char player=s[position];
    if (player=='A' && mode==KILLER)
        return count_B;
    if (player=='B' && mode==KILLER)
        return count_A;
    if (player=='A' && mode==HELPER)
        return count_A;
    if (player=='B' && mode==HELPER)
        return count_B;
}
char num_special(char s[],int position) {
    s[position]='A';
    int a_helper=num_normal(copy,position,HELPER);
    int a_killer=num_normal(copy,position,KILLER);
    if (a_helper==0 && a_killer>=2 && a_killer<=4)
        return 'B';
    if (a_killer==0 && a_helper>=2 && a_helper<=4)
        return 'A';
    return '.';
}
int main() {
    int n;
    char s[1010]="";
    scanf("%d",&n);
    scanf("%s",s);
    len=strlen(s);
    for (int i=0;i<n;i++) {
        strncpy(copy,s,len);
        for (int j=0;j<len;j++) {
            if (s[j]=='.') {
                s[j]=num_special(s,j);
                continue;
            }
            int helper=num_normal(copy,j,HELPER);
            int killer=num_normal(copy,j,KILLER);
            if (killer!=0 || helper>=5 || helper<=1)
                s[j]='.';
        }
    }
    return 0;
}