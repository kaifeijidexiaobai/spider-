#include <stdio.h>
void test()
{
	static int a = 1;//a是一个静态的局部变量，而static可以修饰局部变量（也可以修饰全局变量,会改变变量的作用域-让静态的局部变量只能在自己所在的源文件内部使用，出了源文件就无法使用了），使局部变量的生命周期变长
	a++;
	printf("%d\n", a);
}
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
	
}

