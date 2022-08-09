#include <stdio.h>
int main()
{
	int a = 10;
	//int b = a++;//后置++，b先使用，a再加1（a=11,b=10）
	//int b = ++a;//前置++，b在a的基础上先加1，a在使用（a=11,b=11）
	int b = --a;// 前置--，b在a的基础上先减1，a在使用（a=9,b=9）
	printf("a=%d b=%d\n", a, b);
	return 0;
}