#include <stdio.h>
int main() {
    int sum = 0, x;
    printf("Masukkan nilai x (999 untuk berhenti): ");
    scanf("%d", &x);
    while (x != 999) {
        sum += x;
        printf("Masukkan nilai x (999 untuk berhenti): ");
        scanf("%d", &x);
    }
    printf("Hasil penjumlahan = %d \n", sum);
    return 0;
}