#include <stdio.h>
int main() {
    int a[1000],n;
    scanf("%d\n",&n);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 2; j++) { // not j < n - i - 1
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}