#include<stdio.h>

void main(){
	int i, N, sum = 0;
	printf("N = "); scanf("%d", &N);
	for(i=2; i<=N; i++){
		sum += (i-1)*i*(i+1);
	}
	printf("A = %d\n",sum);
}
