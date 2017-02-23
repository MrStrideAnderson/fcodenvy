
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define ui unsigned int
#define si int
#define ul unsigned long
#define sl long
#define sd double



int main(int num ,char *arg[])
{
   int a, b, c, d, e;
    int x, y, z;

    scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);
    x = a-2*e;
    y = b-2*e;
    z = c-2*e;

    printf("%d ",(2 * (a*b + b*c + c*a)) + 8 * x* d + 8 * y* d + 8 * z* d);

    printf("%d\n", a * b * c - 2 * x * y * d - 2 * x * z * d - 2 * y * z * d );

    return 0;
}
