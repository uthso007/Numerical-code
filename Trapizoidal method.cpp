#include<stdio.h>
#include<math.h>
#define f(x) 1.0/x
int main()
{
    int a,b,n;
    float sum=0.0,result,h,x;
    printf("Enter the vaule of the lower case and the upper case:");
    scanf("%d %d",&a,&b);
    printf("Entr the vaule of the interval: ");
    scanf("%d",&n);
    printf("\n\n");
    h=(float)(b-a)/10;
    for(int i=1;i<n;i++)
    {
        x=a+h*i;
        sum=sum+(2*f(x));
    }
    sum=sum+f(a)+f(b);
    //printf("The vaule of the sum %f\n",sum);
    result=(sum*h)/2;
    printf("The result of the intregation is %.4f",result);
    return 0;
}
