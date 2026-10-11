#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void task3(void)
{
    printf("\nTask3\n");
    printf("( x + y ) / ( y + 1 ) - ( x * y - 12 ) / ( 34 + x )");
    double x = 0, y = 0, z = 0;
    printf("\n\nInput X and Y:");
    scanf("%lf %lf", &x, &y);
    if (((y + 1) == 0) || ((34 + x) == 0))
    {
        printf("No solutions for X = %g Y = %g\n", x, y);
    }
    else
    {
        z = (x + y) / (y + 1) - (x * y - 12) / (34 + x);
        printf("Z(%g,%g)=%g\n", x, y, z);
    }
}

void task10(void)
{
    printf("\nTask10\n");
    printf("(1 + 1 / (x*x))^x - 12*(x*x)*y");
    double x = 0, y = 0, z = 0;
    printf("\n\nInput X and Y:");
    scanf("%lf %lf", &x, &y);
    if (x == 0)
    {
        printf("No solutions for X = %g Y = %g\n", x, y);
    }
    else
    {
        
        z = pow(1 + 1 / (x * x), x) - 12 * (x * x) * y;
        printf("Z(%g,%g)=%g\n", x, y, z);
    }
}

void task29(void)
{
    printf("\nTask29\n");
    printf("(x1 * x2 + x1 * x3 + x2 * x3)/x");
    double x1 = 0, x2 = 0, x3 = 0, x = 0, z = 0;
    printf("\n\nInput x1 and x2 and x3 and X:");
    scanf("%lf %lf %lf %lf", &x1, &x2, &x3, &x);

   
    if (x == 0)
    {
        printf("No solutions for x1 = %g x2 = %g x3 = %g X = %g\n", x1, x2, x3, x);
    }
    else
    {
        z = (x1 * x2 + x1 * x3 + x2 * x3) / x;
        printf("Z(%g,%g,%g,%g)=%g\n", x1, x2, x3, x, z);
    }
}

void task6(void)
{
    
    printf("\nTask6\n");
    printf("sin (sqrt(x + 1)) - sin (sqrt(x - 1))");
    double x = 0, z = 0;
    printf("\n\nInput X:");
    scanf("%lf", &x);

    if ((x + 1 < 0) || (x - 1 < 0))
    {
        printf("No solutions for X = %g\n", x);
    }
    else
    {
        z = sin(sqrt(x + 1)) - sin(sqrt(x - 1));
        printf("Z(%g)=%g\n", x, z);
    }
}

void task7(void)
{
    printf("\nTask7\n");
    printf("(1 - tan(x))^(1/tan(x)) + cos(x - y)");
    double x = 0, z = 0, y = 0;
    printf("\n\nInput X and Y:");
    scanf("%lf %lf", &x, &y);

   
    if (sin(x) == 0 || cos(x) == 0 || (1 - tan(x)) < 0)
    {
        printf("No solutions for X = %g\n", x);
    }
    else
    {
        z = pow((1 - tan(x)), (1 / tan(x))) + cos(x - y);
        printf("Z(%g,%g) = %g\n", x, y, z);
    }
}

int main(void)
{
    task3();
    task10();
    task29();
    task6();
    task7();
    return 0;
}