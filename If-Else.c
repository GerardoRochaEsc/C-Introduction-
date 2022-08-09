#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input
loop */
int main(int argc, char *argv[]) {
float a,b,c,res1,res2,res3,res4,res5,res6,res7;
printf("Introduce el valor de a: ");
scanf("%f",&a);
printf("\nIntroduce el valor de b:");
scanf("%f",&b);
printf("\nIntroduce el valor de c:");
scanf("%f",&c);
res1=pow(b,2)-(4*a*c);
if (res1>=0)
{
res2=(-b/2*a)+(sqrt(res1)/(2*a));
res3=(-b/2*a)-(sqrt(res1)/(2*a));

printf("El resultado num 1 es: %f\nEl resultado num 2 es: %f",res2,res3);

}
else
{
res1*=-1;
res4=(-b/(2*a));
res5=(sqrt(res1)/(2*a));
res6=(-b/(2*a));
res7=(sqrt(res1)/(2*a));
printf("El resultado num 1 es: %f + %fi\nEl resultado num 2 es: %f-

%fi",res4,res5,res6,res7);
}

return 0;
