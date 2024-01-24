#include<stdio.h>
#include<math.h>
void main(){
	int n, i=0;
	printf("Hay nhap mot so duong: "); scanf("%d", &n);
	while(n>0){
		i=i+1;
		printf("Hay nhap mot so duong: "); scanf("%d", &n);
	}
	printf("Ban da nhap %d so nguyen duong!", i);
}
