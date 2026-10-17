#include <stdio.h>
#include <math.h>

int dz33();

int main() {
    dz33();
}

int dz33() {
    double x = 2e-4, y = -0.003;
    double t1 = y - sqrt(fabs(x));
    double t2 = x - y / (1 + x*x/2);
    double f = log(t1 * t2);
    printf("результат: %.3f\n", f);
}
