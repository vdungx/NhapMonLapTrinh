#include <stdio.h>
#include <math.h>
int main()
{
	int i, N;
	printf("N = ");
	scanf("%d", &N);
	printf("Cac so chia het cho 3 trong khoang N den 2N:");
	for(i=N; i<= 2*N; i++){
		if(i % 3 == 0){
		printf(" %d",i);}
	} 
	return 0;
}
