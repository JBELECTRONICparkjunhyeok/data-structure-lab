#include <stdio.h>

void main() {
	int i, length = 0;
	char str[50];
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);
	
	printf("\n�Էµ� ���ڿ���");
	printf("\"%s\"\n", str);
	printf("�Դϴ�.\n\n");

	for (i = 0; str[i]; i++) {
		length += 1;
	} 
	printf("�Էµ� ���ڿ��� ���� = %d\n", length);

	getchar();
}