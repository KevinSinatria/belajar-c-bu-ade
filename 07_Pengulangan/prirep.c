#include <stdio.h>
int main() {
    int i, N;
    printf("Nilai N > 0 = ");
    scanf("%d", &N);
    i = 1;
    do {
        printf("%d \n", i);
        i++;
    } while (i <= N);
    return 0;
}