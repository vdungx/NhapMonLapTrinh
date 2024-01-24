#include<stdio.h>
#include<string.h>
void main(){
	char s[100], w[100];
	printf("Nhap xau S: "); gets(s);
	printf("Nhap xau W: "); gets(w);
	int i, j, d, kt=0;
	for(i=0; i<strlen(s); i++){
		if(w[0]==s[i]){
			d=i;
			kt=1;
			for(j=0;j<strlen(w);j++){
				if(w[j]!=s[i+j]){
					kt=0;break;
				}
			}
		}
		if(kt==1) break;
	}
	if(kt==1){
		printf("W xuat hien trong S o vi tri %d\n",d);
	}else printf("W khong xuat hien trong S\n");
}