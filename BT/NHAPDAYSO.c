#include<stdio.h>
void main(){
	int n, i, dem=0;
	printf("N = "); scanf("%d", &n);
	int a[n];
	for( i=0; i<n; i++){
		printf("a[%d] = ",i); 
		scanf("%d", &a[i]);
	}
	printf("Day A =");
	for(i=0; i<n; i++){
		printf(" %d", a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]<0){
			dem= dem+1;
		}
	}
	printf("\nSo so am trong A: %d", dem);
}