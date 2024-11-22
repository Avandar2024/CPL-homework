#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define FLAG 5
int main() {
    char s[16]; int n,original;
    scanf("%d\n",&n);
    for (int i=0;i<n;i++) {
        int valid=1,num3[25]={0};
        scanf("%s",s);
        int lens=strlen(s);
        for (int j=0;j<lens;j++) {
            if(s[j]=='Z') {
                printf("Radix Error\n");
                valid=0;
                break;
            }
        }
        if(valid) {
            long int num=0,k=0;
            num=atoi(s);
            original=num;
            num=abs(num);
            do {
                num3[k++]=num%3;
                num/=3;
            }while(num!=0);
            int temp=k-1;
            for (int j=0;j<k;j++) {
               if (num3[j]==2 || num3[j]==3) num3[j+1]++;
            }
            if (num3[temp]==2 || num3[temp]==3) k++;
            if (original>0){
                for (int j=k-1;j>=0;j--) {
                    switch (num3[j]) {
                        case 0: case 1: printf("%d",num3[j]);break;
                        case 2:printf("Z");break;
                        case 3:printf("0");;break;
                    }
                }
            }
            else if(original<0) {
                for (int j=k-1;j>=0;j--) {
                    switch (num3[j]) {
                        case 0:printf("0");break;
                        case 1:printf("Z");break;
                        case 2:printf("1");break;
                        case 3:printf("0");break;
                    }
                }
            }
            else printf("0");
            printf("\n");
        }
    }
    return 0;
}