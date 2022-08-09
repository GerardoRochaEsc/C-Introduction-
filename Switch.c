#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float p1,p2,p3,cf;
printf("Captura la calificación del primer parcial: ");
scanf("%f",&p1);
printf("\nCaptura la calificación del segundo parcial: ");
scanf("%f",&p2);
printf("\nCaptura la calificación del tercer parcial: ");
scanf("%f",&p3);
cf=((p1*.15)+(p2*.35)+(p3*.5));
printf("\nTu calificación final es %f",cf);
if (cf<=5)
{
printf("\nReprobado");
}
if (cf>5)
{
printf("\nAprobado");
}
return 0;
}
