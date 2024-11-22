#include <stdio.h>
#include <ctype.h>
#define CASE1 (judge[i]==3)
#define CASE2 (judge[i]==2)
#define CASE3 (judge[i]==1)
int main() {
    int n;
    char character[1005];
    scanf("%d",&n);
    scanf("%s",character);
    int alphabet[52]={0};
    for (int i=0;i<n;i++) {
        if (islower(character[i])){
            alphabet[2*(character[i]-'a')+1]++;
        }
        if (isupper(character[i])) {
            alphabet[2*(character[i]-'A')]++;
        }
    }
    int max=0;
    for (int i=0;i<52;i++) {
        if (alphabet[i]>max)
            max=alphabet[i];
    }
    int judge[26]={0};
    for (int i=0;i<26;i++) {
        if (alphabet[2*i]!=0
            && alphabet[2*i+1]!=0) {
            judge[i]=3;
        }
        else if (alphabet[2*i]!=0
            && alphabet[2*i+1]==0) {
            judge[i]=2;
        }//upper
        else if (alphabet[2*i]==0
            && alphabet[2*i+1]!=0) {
            judge[i]=1;
        }//lower
    }
    for (int i=0;i<max;i++) {
        for (int j=0;j<26;j++) {
            if (alphabet[2*j]>=max-i
                && alphabet[2*j+1]>=max-i) {
                printf("== ");
            }
            else if (alphabet[2*j]>=max-i ||
                alphabet[2*j+1]>=max-i) {
                printf("= ");
            }
            else if (CASE1) {
                printf("   ");
            }
            else if(CASE2 || CASE3) {
                printf("  ");
            }
        }
        printf("\n");
    }
    int count=0,sub_count=0;
    for (int i=0;i<26;i++) {
        if (CASE1 || CASE2 || CASE3) {
            count++;
        }
    }
    for (int i=0;i<26;i++) {
        if (sub_count!=count-1) {
            if (CASE1) {
                printf("---");
                sub_count++;
            }
            else if (CASE2 || CASE3) {
                printf("--");
                sub_count++;
            }
        }
        else if(CASE1){
            printf("--\n");
        }
        else if (CASE2 || CASE3) {
            printf("-\n");
        }
    }
    for (int i=0;i<26;i++) {
        if (CASE1) {
            printf("%c%c ",i+'a',i+'A');
        }
        else if(CASE2) {
            printf("%c ",i+'A');
        }
        else if (CASE3) {
            printf("%c ",i+'a');
        }
    }
    return 0;
}