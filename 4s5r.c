#include <stdio.h>
#include <stdlib.h>
double fun(double n);
int main()
{
    double n;
    scanf("%lf",&n);
    printf("%.1lf",fun(n));
    
    system("pause");
    return 0;
}
double fun(double n)
{
    double m;
    m=(int)(n*10.0+0.5)/10.0;
    return m;
}
