#include <stdio.h>
int main() {
     int n;
    scanf("%d",&n);
    int arr[100]={0};
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        printf("%s",arr[i]);
    }
    return 0;
}