#include <stdio.h>
int num(int i,int j,char arr[100][100],int n) {
    int vectors[8][2]={{0,1},{1,1},{1,0},{1,-1},
                               {0,-1},{-1,-1},{-1,0},{-1,1}};
    int count=0;
    for (int k=0;k<8;k++) {
        int newI =i+vectors[k][0];
        int newJ =j+vectors[k][1];
        if (newI>=0 && newJ>=0 && newI<n && newJ<n) {
            if (arr[newI][newJ]=='*')
                count++;
        }
    }
    return count;
}
int main() {
    char arr[100][100]={0},copy[100][100]={0};
    int n;
    scanf("%d\n",&n);
    for (int i=0;i<n;i++) {
        scanf("%s",arr[i]);
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
           if (arr[i][j]=='o') {
               copy[i][j]=num(i,j,arr,n)+'0';
           }
           else
                copy[i][j]=arr[i][j];
        }
        printf("%s\n",copy[i]);
    }
    return 0;
}