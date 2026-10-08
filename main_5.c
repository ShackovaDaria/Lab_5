#include <stdio.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
#include <math.h>
void z1();
void z2();
int main()
{
z1();
z2();
}

void z1()
{
    printf("71 задание\n");
double gr,r;
printf("введите градусную величину: ");
scanf("%lf", &gr);
r=sin(gr*M_PI/180.0);
printf("%.6f",r);
}
void z2()
{
    printf("\n2-3 задания\n");
    double y,x,a,b,k=8.2;
    printf("введите значение х: ");
scanf("%lf",&x);

b=sqrt(fabs(x));
a=pow(b,4)+pow(k,3);
y=pow(log(a), 3)+exp(-x);
printf("у= %.2f",y);

//задание 3
int A,B,C;
A=(int)a;
B=(int)b;
C=(int)y;


int a1 = ((A % 2 == 0) != (B % 2 == 0));
int a2 = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));

printf(" \n'1' - условие верноб '0' - условие неверно \n 1 условие= %d \n 2 условие= %d", a1,a2);
}