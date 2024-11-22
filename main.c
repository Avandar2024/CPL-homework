#include <stdio.h>

int main(void) {
    int n,array[1000],times[1000]={ 0 };
    scanf("%d",&n);
    for (int i=0;i<(2*n-1);i++)
        scanf("%d",&array[i]);
    for (int i=0;i<(2*n-1);i++) {
      times[array[i]]++;
    }
    for (int i=0;i<(2*n-1);i++) {
        if (times[array[i]]==1)
            printf("%d ",array[i]);
    }

    return 0;
}
