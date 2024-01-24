#include<stdio.h>
#include<math.h>
void main(){
	int N, T;
	printf("N = "); scanf("%d",&N);
	if(N<0)
		printf("Vui long nhap lai");
	else if(N<=50) 
			T=N*1484;
		else if(N<=100)
				T=50*1484+(N-50)*1533;
			else if(N<=200)
					T=50*1484+50*1533+(N-100)*1786;
				else if(N<=300)
						T=50*1484+50*1533+100*1786+(N-200)*2242;
					else if(N<=400)
							T=50*1484+50*1533+100*1786+100*2242+(N-300)*2503;
						else if(N>400)
								T=50*1484+50*1533+100*1786+100*2242+100*2503+(N-400)*2587;
	printf("So tien phai nop: %d", T);
}
