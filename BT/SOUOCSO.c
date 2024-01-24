#include<stdio.h>
#include<math.h>
void main(){
	unsigned int n;
	int i=1;
	int dem=0;
	printf("N = "); scanf("%d", &n);
	while( i<=n){
		if(n%i==0){
			dem= dem+1;
		}i++;
	}
	printf("So %d co %d uoc so.",n,dem);
}

