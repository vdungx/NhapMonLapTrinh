#include <stdio.h>
#include <string.h>
int main()
{
	int N,i,min;
	printf("N = "); scanf("%d",&N);
	char A[N][10];
	char T[10];
	for (i=1;i<=N;i++)
	{
	printf("Ten ngon ngu lap trinh thu %d: ",i);
	scanf("%s",A[i]);
	}
	printf("Ngon ngu ngan nhat cuoi cung la: ");
	min=strlen(A[1]); 
	strcpy(T,A[1]);
	for (i=2;i<=N;i++)
	if (min>=strlen(A[i]))
	{ 
	  min=strlen(A[i]);
	  strcpy(T,A[i]);
	} 
	printf("%s",T);
	return 0;
}
