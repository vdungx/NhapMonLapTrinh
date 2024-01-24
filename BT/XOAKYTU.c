#include<stdio.h>
#include<string.h>
void main(){
	int i,j;
	printf("Nhap W = ");
	char w[100]; gets(w);
	printf("W sau khi xoa cac chu so = ");
	for(i= 0; i< strlen(w); i++){
		for(j=0 ; j<10 ; j++){
			if(w[i]>='0'&&w[i]<='9'){
				continue;
			}else{
				printf("%c",w[i]);break;
			}
		}
	}
}