#include <cstdio>
#define max_size 10

//�迭�� �Ķ���ͷ� �޴� �Լ� 
void sub(int x, int arr[])
{
	x = 10;
	arr[0] = 10;

}

int main()
{
	int var;
	int list[max_size];

	var = 0;
	list[0] = 0;
	sub(var, list);
	printf("var=%d, list[0]=%d\n", var, list[0]);

	return 0;
}