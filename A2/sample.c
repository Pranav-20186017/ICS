#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* reverse(char *ch) {
	long unsigned int l = strlen(ch);
	char *rev = (char *)malloc(sizeof(char) * l);
	int j = 0;
	for (int i = l - 1; i >= 0; i--) {
		rev[j] = ch[i];
		j++;
	} 
	rev[j] = '\0';
	return rev;
}

int main() {
	char* st = (char *)malloc(sizeof(char) * 100);
	printf("Enter a String: ");
	scanf("%s",st);
	printf("\nReversed String: %s\n",reverse(st));
	return 0;
}
