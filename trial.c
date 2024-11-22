#include<stdio.h>
#define MAX 1005

int findmin(int a[],int len,int x,int t);
int arrmin(int a[],int len);

int main(void){


    int n,m,t;                          //输入数据
    scanf("%d %d %d ",&n,&m,&t);
    int a[MAX]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[MAX]={0};
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }


    int minb=arrmin(b,m);             //special "-1"
    if(minb+a[0]>t){
        printf("-1");

    }

    else{
        int num[MAX];
        for(int j=0;j<m;j++){       //normal

            num[j]=findmin(a,n,b[j],t);

        }
        int output=arrmin(num,m);
        printf("%d",output);
    }
    return 0;
}




int findmin(int a[],int len,int x,int t){
    int min=0;
    if((x+a[0])>t){
        return t+1;
    }


    for(int i=0;i<len;i++){
        if((x+a[i])<=t){
            min=t-a[i]-x;
        }else{
            return min;
        }
    }
}
int arrmin(int a[],int len){
    int min=a[0];
    for(int i=1;i<len;i++){
        if(a[i]<min){
            min=a[i];
        }
    }return min;
}