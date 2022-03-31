#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) 3*x-cos(x)-1
int main()
{
    float a,b,c,fa,fb,fc;
    int i=0;
    printf("Enter the vaule of a and b\n");
    scanf("%f %f",&a,&b);
    printf("\n\n");
    do{
        fa=f(a);
        fb=f(b);
        c=((a*fb)-(b*fa))/(fb-fa);
        fc=f(c);
        printf("The vaule of the fa is %f\n",fa);
        printf("The vaule of the fb is %f\n",fb);
        printf("The vaule of the fc is %f\n",fc);
        if(fa*fc<=0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
        printf("The number of iteration is %d",i);
        printf("\n");
        printf("The vaule of the root is %0.4f\n\n",c);
        i++;
    }
    while(fabs(fc)>e);
    return 0;
}
