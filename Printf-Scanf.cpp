#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float p1,p2,p3,cf;
	printf("Captura la calificación del primer parcial: ");
	scanf("%f",&p1);
	printf("\nCaptura la calificación del segundo parcial: ");
	scanf("%f",&p2);
	printf("\nCaptura la calificación del tercer parcial: ");
	scanf("%f",&p3);
	cf=((p1*1.5)+(p2*3.5)+(p3*5));
	printf("\nTu calificación final es %f",cf);
	return 0;
}
