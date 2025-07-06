//mystrlen function
#include <stdio.h>
#include<string.h>

int mystrlen (char*);
void main (){
	char str []="Prathamesh";
	int res = mystrlen (str);
	printf("The length is: %d",res);
}
int mystrlen (char *str){
	int i=0;
	while (str[i] != '\0'){
		i++;
	}
	return i;
}