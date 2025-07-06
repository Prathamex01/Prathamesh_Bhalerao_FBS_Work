//mystrnstr function
#include <stdio.h>
#include <string.h>
char *mystrstr (char*,char*,int);
void main () {
	char str[] = "My name is prathamesh";
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	char *res;
	res= mystrstr (str,"name",n);
	if (res==NULL)
		printf("Not found");
	else {
		printf("%s",res);
	}
}
char *mystrstr (char *str,char *substr,int n) {
	int len=strlen (substr);
	int k,j;
	for (int i=n; str[i]!='\0'; i++) {
		k=i;
		for (j=0; j<=len-1; j++) {
			if (str[k] != substr[j])
				break;
			k++;
		}
		if(j==len)
			return &str[i];
	}
	return NULL;
}