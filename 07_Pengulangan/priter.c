#include <stdio.h>
int main() {
    int i, N;
    printf("Nilai N > 0 = ");
    scanf("%d", &N);
    i = 1;
    for (;;) {
        printf("%d \n", i);
        if (i == N) break;
        i++;
    }
    return 0;
}