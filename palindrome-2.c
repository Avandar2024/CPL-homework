#include <stdio.h>
int main(void){
    int n,count=0;char arr[1000001];
    scanf("%d\n",&n);
    scanf("%s",arr);
    for (int i=0,j=n-1;i<j;i++,j--) {
        if(arr[i]=='?' && arr[j]=='?') count+=1;
        else if(arr[j]=='?')
            arr[j]=arr[i];
        else if(arr[i]=='?')
            arr[i]=arr[j];
    }
    int temp=100-count;
    for (int i=0;i<n;i++) {
        if(arr[i]=='?') {
            if (count>1) {
                printf("%02d",temp);
                temp++;
            }
            else if(count==1) printf("%02d",temp);
            else {
                int flag;
                flag=temp/10+(temp%10)*10;
                printf("%02d",flag);
                temp--;
            }

            count--;

        }
        else printf("%c",arr[i]);
    }
    return 0;
}