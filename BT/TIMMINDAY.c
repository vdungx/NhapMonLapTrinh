#include<stdio.h>
void main(){
	int n, i;
	float min;
	printf("N = "); scanf("%d", &n);
	float a[n];
	for( i=0; i<n; i++){
		printf("a[%d] = ",i); 
		scanf("%g", &a[i]);
	}
	min=a[0];
	for(i=0; i<n; i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("Gia tri nho nhat trong A: %g", min);
}