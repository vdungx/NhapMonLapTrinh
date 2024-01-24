#include<stdio.h>
#include<math.h>

void main(){
	float mieng, mottiet, hocky, tb;
	printf("Diem Mieng = "); scanf("%f", &mieng);
	printf("Diem Mot Tiet = "); scanf("%f", &mottiet);
	printf("Diem Hoc Ky = "); scanf("%f", &hocky);
	tb=(mieng+(2*mottiet)+(3*hocky))/6;
	printf("Diem TB = %g", tb);
}
