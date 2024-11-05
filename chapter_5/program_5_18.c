#include <stdio.h>
#include <math.h>

int main() {
    float x, y;

    printf(" x value       y value\n");
    printf("-------------------------\n");

    for (x = 2.0; x <= 6.0; x += 0.5) {
        y = 10.0 * pow(x, 2) + 3.0 * x - 2.0;
        printf("%8.6f   %13.6f\n", x, y);
    }

    return 0;
}
