#include <stdio.h>
#include <string.h>
void main()
{
	int dai,P,Q;
	char W[25]; 
	char S[25]; 
	printf("Nhap W = "); gets(W);
	printf("Nhap S = "); gets(S);
	printf("P = "); scanf("%d",&P);
	printf("Q = "); scanf("%d",&Q);
	dai=strlen(W); 
	if (P<=dai&&Q<=dai)
	{
		int i; printf("Ket qua: ");
		if (P==0) printf("%s",S);
		if (Q==0) printf("%s",S);
		for (i=0;i<dai;i++)
		{ printf("%c",W[i]);
		if (i==P-1||i==Q-1) printf("%s",S); }
	} else printf("");
}
