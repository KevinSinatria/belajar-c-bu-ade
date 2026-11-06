#include <stdio.h>
int main() {
    int i, N = 5;
    int tab[10];
    for (i = 1; i <= N; i++) tab[i] = i;
    for (i = 1; i <= N; i++) printf("i = %d tab[%d] = %d \n", i, i, tab[i]);
    return 0;
}