#include<stdio.h>
#include<string.h>


int main(){
	char str[50];
	char str2[50][50];
	int i,j;
	int lenstr;
	scanf("%s",str);
	lenstr = strlen(str);
	for(i = 0;i<lenstr;i++){
		for(j = 0;j<lenstr;j++){
			str2[i][j] = ' ';
		}
	}
	
	for(i = 0;i<lenstr;i++){
	    str2[i][i] = str[i];
	    str2[i][lenstr-i-1] = str[lenstr-i-1];
	}
	
	for(i = 0;i<lenstr;i++){
		for(j = 0;j<lenstr;j++){
			printf("%c",str2[i][j]);
		}
		printf("\n");
	}
	
}
