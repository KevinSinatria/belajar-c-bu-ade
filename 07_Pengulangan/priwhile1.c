#include <stdio.h>
int main() {
    int N, i = 1;
    printf("Nilai N > 0 = ");
    scanf("%d", &N);
    while (i <= N) {
        printf("%d \n", i);
        i++;
    }
    return 0;
}