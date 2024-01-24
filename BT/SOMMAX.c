#include<stdio.h>
void main(){
 	int N, i; 
	int sum = 0;
	printf("N = ");scanf("%d",&N); 
	if(N==0) printf("m lon nhat = 0");
 	else {
		printf("m lon nhat = ");
		for(i = 1 ; i <= N ; i++){
			sum = sum + i;
			if(sum >= N){
			printf("%d",i-1);
			break;
			}
		}
	}
}

