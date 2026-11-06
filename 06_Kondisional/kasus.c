#include <stdio.h>
int main() {
    char cc;
    printf("Ketikkan sebuah huruf: ");
    scanf(" %c", &cc);
    switch (cc) {
        case 'a': case 'u': case 'e': case 'i': case 'o':
            printf("Yang anda ketik adalah huruf vokal: %c\n", cc);
            break;
        default:
            printf("Yang anda ketik adalah huruf mati\n");
    }
    return 0;
}