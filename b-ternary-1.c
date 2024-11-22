#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char s[16]; int n,sum;
    scanf("%d\n",&n);
    for (int i=0;i<n;i++) {
        sum=0; int valid=1;
        scanf("%s",s);
        for (int j=0;j<strlen(s);j++) {
            if(s[j]!='0' && s[j]!='1' && s[j]!='Z') {
                printf("Radix Error\n");
                valid=0;
                break;
            }
        }
        if(valid) {
            for (int j=0;j<strlen(s);j++)
                switch (s[j]) {
                    case '0':sum+=0;break;;
                    case '1':sum+=1*(int)pow(3,strlen(s)-j-1);break;
                    case 'Z':sum-=1*(int)pow(3,strlen(s)-j-1);break;
                }
        }
        if(valid) printf("%d\n",sum);
    }
    return 0;
}