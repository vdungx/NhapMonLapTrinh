#include<stdio.h>
#include<math.h>

void main(){
	float x, a0, a1, a2, a3, a4, dathuc;
	printf("X = "); scanf("%f",&x);
	printf("A0 = "); scanf("%f",&a0);
	printf("A1 = "); scanf("%f",&a1);
	printf("A2 = "); scanf("%f",&a2);
	printf("A3 = "); scanf("%f",&a3);
	printf("A4 = "); scanf("%f",&a4);
	dathuc=a0+(a1*x)+(a2*pow(x,2))+(a3*pow(x,3))+(a4*pow(x,4));
	printf("f(x) = %g",dathuc);
}
