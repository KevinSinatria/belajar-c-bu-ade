#include <stdio.h>
#define boolean unsigned char
#define true 1
#define false 0
int main() {
    boolean Bool1, Bool2, TF;
    int i, j, hsl;
    float x, y, res;
    Bool1 = true; Bool2 = false;
    printf("Bool1 = %d, Bool2 = %d \n", Bool1, Bool2);
    TF = Bool1 && Bool2;
    printf("TF = Bool1 And Bool2 : %d \n", TF);
    TF = Bool1 || Bool2;
    printf("TF = Bool1 Or Bool2 : %d \n", TF);
    TF = !Bool1;
    printf("TF = Not Bool1 : %d \n", TF);
    TF = Bool1 ^ Bool2;
    printf("TF = Bool1 Xor Bool2 : %d \n", TF);
    i = 5; j = 2;
    printf("Nilai i = %d, j = %d\n", i, j);
    printf("Hasil i + j : %d\n", i + j);
    printf("Hasil i - j : %d\n", i - j);
    printf("Hasil i / j : %d\n", i / j);
    printf("Hasil i * j : %d\n", i * j);
    printf("Hasil i %% j : %d\n", i % j);
    x = 5.0; y = 2.0;
    printf("Nilai x = %f, y = %f\n", x, y);
    printf("Hasil x + y : %f\n", x + y);
    printf("Hasil x - y : %f\n", x - y);
    printf("Hasil x / y : %f\n", x / y);
    printf("Hasil x * y : %f\n", x * y);
    TF = (i == j);
    printf("Hasil TF = (i == j) adalah : %d\n", TF);
    return 0;
}