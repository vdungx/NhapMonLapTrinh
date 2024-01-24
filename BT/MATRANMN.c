#include<stdio.h>
#include<math.h>
void main(){
	int m, n, i, j;
	printf("M = "); scanf("%d", &m);
	printf("N = "); scanf("%d", &n);
	if(m>0 && n>0){
		for(i=1; i<=m; i++){
			for(j=1; j<=n;j++){
				if(j==n)
					printf("0");
					else
					printf("0 ");
			}printf("\n");
		}
		
	}
}

