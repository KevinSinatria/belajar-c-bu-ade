#include <stdio.h>
int main() {
    int a, b;
    printf("Ketikkan dua bilangan: ");
    scanf("%d %d", &a, &b);
    if (a >= b) printf("Nilai a yang maksimum %d \n", a);
    else printf("Nilai b yang maksimum %d \n", b);
    return 0;
}