#include<stdio.h>
#include<math.h>
#define f(x) 3*x-cos(x)-1
#define e 0.001
int main()
{
    int i;
    float a,b,c,fa ,fb,fc;
    printf("Enter the vaule of the a and b\n");
    scanf("%f %f",&a,&b);
    printf("\n");
    do
    {
        fa=f(a);
        fb=f(b);
        c=(a+b)/2;
        fc=f(c);
        printf("The vaule of fa is %f\n",fa);
        printf("The vaule of fb is %f\n",fb);
        printf("The vaule of fc is %f\n",fc);
        if(fa*fc<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
        printf("The number of iteration is %d",i);
        printf("The root is %0.3f\n\n",c);
        i++;
    }
    while(fabs(fc)>e);

    return 0;
}
