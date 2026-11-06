#include <stdio.h>
int main() {
    int i = 1, N = 5;
    int tab[10];
    while (i <= N) {
        tab[i] = i;
        printf("i = %d tab[%d] = %d \n", i, i, tab[i]);
        i++;
    }
    return 0;
}