#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-x-1
#define phi(x) cbrt(x+1)
#define e 0.0001
int main()
{
    int i=0;
    float x[100],ep=100;
    printf("Enter the vaule of x[0]\n");
    scanf("%f",&x[0]);
    while(ep>e)
    {
        x[i+1]=phi(x[i]);
        ep=fabs(x[i+1]-x[i]);
        printf("The number of iteration is %d",i);
        printf("\n");
        printf("The root is %0.4f",x[i+1]);
        printf("\n\n\n");
        i++;
    }
    return 0;
}
