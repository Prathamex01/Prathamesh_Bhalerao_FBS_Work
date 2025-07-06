// mystrcpy function

#include <stdio.h>
#include<string.h>

char mystrcpy (char* ,char*);
void main (){
	char str1 [10]="Prathamesh";
	char str2 [20];
	mystrcpy (str1,str2);
	printf("The copied string is:%s",str2);
}

char mystrcpy (char *str1,char *str2){
	int i=0;
	while (str1 [i]!='\0'){
		str2 [i] = str1 [i];
		i++;
		
	}
	
	}
	