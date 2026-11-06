#include <stdio.h>
int main() {
    int i, N;
    printf("Nilai N > 0 = ");
    scanf("%d", &N);
    i = 1;
    while (i <= N) {
        printf("%d \n", i);
        i++;
    }
    return 0;
}