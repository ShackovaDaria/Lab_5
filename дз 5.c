#include <stdio.h>
#include <math.h>

void dz33(double x, double y, double *f);

int main() {
    double x, y;
     printf("Введите x и у: ");
    scanf("%lf %lf", &x,&y);
    double F;
dz33(x, y, &F);
}

void dz33(double x, double y, double *f) 
{
    double t1 = y - sqrt(fabs(x));
    double t2 = x - y / (1 + x * x / 2);
    *f = log(t1 * t2);
}

