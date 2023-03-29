#include <stdio.h>

void main() {
	int i, length = 0;
	char str[50];
	printf("문자열을 입력하세요 : ");
	gets(str);
	
	printf("\n입력된 문자열은");
	printf("\"%s\"\n", str);
	printf("입니다.\n\n");

	for (i = 0; str[i]; i++) {
		length += 1;
	} 
	printf("입력된 문자열의 길이 = %d\n", length);

	getchar();
}