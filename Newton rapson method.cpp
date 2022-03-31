#include<stdio.h>
#include<math.h>
#define f(x) 3*x-cos(x)-1
#define df(x) 3+sin(x)
#define e 0.001
int main()
{
    float x0,x1,f0,df0,f1;
    int i=0;
    printf("Enter the vaule of the x0\n");
    scanf("%f",&x0);
    do{
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        f1=f(x1);
        printf("The number of iteration is %d\n",i);
        i++;
        printf("The vaule of the root is %0.3f",x1);
        x0=x1;

        printf("\n\n");
    }
    while(fabs(f1)>e);
    return 0;

}
