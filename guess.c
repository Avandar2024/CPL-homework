#include <stdio.h>
#include <stdlib.h>
int main() {
    unsigned int N,left=0,right=1<<31;
    char input[10];
    while (1) {
        N=(left+right)/2;
        printf("%u\n",N);
        fflush(stdout);
        scanf("%s",input);
        switch (input[i]) {
            case 0:continue;
            case 'E':case 'O': return 0;
            case 'G': right=N-1;break;
            case 'L': left=N+1;break;
        }
    }
    return 0;
}