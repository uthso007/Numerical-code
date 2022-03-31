/*#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-4*x-1
int main()
{
 float x0, x1, x2;
 float f0, f1, f2;
 int i = 0;
 printf("Enter the value of x0 and x1: ");
 scanf("%f %f", &x0, &x1);
 do
 {
 f0=f(x0);
 f1=f(x1);
 x2=(x0+x1)/2;
 f2=f(x2);
 if(f0*f2<0)
 {
 x1=x2;
 }
 else
 {
 x0=x2;
 }
 i++;
 printf("Number of iterations = %d\t", i);
 printf("Root = %f\t", x2);
 printf("Value of the function = %f\n", f2);
 }while(fabs(f2)>e);
 return 0;
 }*/
#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) 3*x-cos(x)-1
int main()
{
    float x0,x1,x2,fx0,fx2,fx1;
    int i=0;
    printf("Enter the value of x0 ans x1: ");
    scanf("%f %f",&x0,&x1);
    printf("Number of iteration\t  Root\t\tValue of function\n");
    do
    {
        fx0=f(x0);
        fx1=f(x1);
        x2=x1-((x1-x0)/(fx1-fx0))*fx1;
        fx2=f(x2);
        x0=x1;
        x1=x2;
        i++;
        printf("\t%d\t\t%.4f\t\t%.4f\n",i,x2,fx2);

    }while(fabs(fx2)>e);
}

