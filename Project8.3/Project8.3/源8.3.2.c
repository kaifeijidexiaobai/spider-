#include <stdio.h>
int main()
{
	int a = 10;
	//int b = a++;//����++��b��ʹ�ã�a�ټ�1��a=11,b=10��
	//int b = ++a;//ǰ��++��b��a�Ļ������ȼ�1��a��ʹ�ã�a=11,b=11��
	int b = --a;// ǰ��--��b��a�Ļ������ȼ�1��a��ʹ�ã�a=9,b=9��
	printf("a=%d b=%d\n", a, b);
	return 0;
}