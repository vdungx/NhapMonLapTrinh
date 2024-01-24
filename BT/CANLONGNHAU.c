#include<stdio.h>
#include<math.h>

void main(){
	int i, N;
	float s;
	printf("N = "); scanf("%d",&N );
	s=sqrt(N);
	for(i=N-1;i>=1; i-=1)
	s=sqrt(i+s);
	printf("F(n) = %g",s);
}
