#include <stdio.h>
int main() {
    int sum = 0, x;
    printf("Masukkan nilai x (999 untuk berhenti): ");
    scanf("%d", &x);
    if (x == 999) printf("Kasus Kosong \n");
    else {
        do {
            sum += x;
            printf("Masukkan nilai x (999 untuk berhenti): ");
            scanf("%d", &x);
        } while (x != 999);
        printf("Hasil penjumlahan = %d \n", sum);
    }
    return 0;
}