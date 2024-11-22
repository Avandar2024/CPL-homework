#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    int a,b;
    char *c[7]={"+","-","*","/","/*","**","%"};
    char input[2];
    while(scanf("%d %s %d",&a,input,&b)!=EOF) {
        if(strcmp(input,c[0])==0) {
            printf("%d\n",a+b);
        }
        else if(strcmp(input,c[1])==0) {
            printf("%d\n",a-b);
        }
        else if(strcmp(input,c[2])==0) {
            printf("%d\n",a*b);
        }
        else if(strcmp(input,c[3])==0) {
            printf("%d\n",a/b);
        }
        else if(strcmp(input,c[4])==0) {
            printf("%.3f\n",a*1.0/b);
        }
        else if(strcmp(input,c[5])==0) {
            printf("%d\n",(int)pow(a,b));
        }
        else  if (strcmp(input,c[6])==0){
            printf("%d\n",a%b);
        }
    }
    return 0;
}