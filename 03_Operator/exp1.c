#include <stdio.h>
int main() {
    int x = 1;
    int y = 2;
    float fx = (float)x;
    float fy = (float)y;
    printf("x/y (format integer) = %d \n", x / y);
    printf("x/y (format float) = %f \n", (float)x / y);
    printf("fx/fy (format float) = %f \n", fx / fy);
    printf("float(x)/float(y) (format float) = %f \n", (float)x / (float)y);
    return 0;
}