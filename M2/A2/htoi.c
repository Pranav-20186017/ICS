#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<math.h>
unsigned int htoi(char * hex) {
	unsigned int decimal = 0;
	unsigned int value = 0;
	int l = strlen(hex);
	int power = 0;
	for (int i = l - 1; i >= 0; i--) {
		if(hex[i] == 'x' || hex[i] == 'X' || hex[i] == '0') {
			continue;
		}
		else if(hex[i] >= '1' && hex[i] <= '9') {
			value = hex[i] - 48;
		}
		else if(hex[i] >= 'a' && hex[i] <= 'f') {
			value = hex[i] - 97 + 10;
		}
		else if(hex[i] >= 'A' && hex[i] <= 'F') {
			value = hex[i] - 65 + 10;
		}
		decimal = decimal + (value * pow(16,power));
		power++;
	}
	return decimal;
}

int main() {
	char * st = (char *)malloc(sizeof(char) * 100);
	printf("enter the hex value:");
	scanf("%s",st);
	printf("Integer value: %d",htoi(st));
	return 0;
}