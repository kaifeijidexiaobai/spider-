#include <stdio.h>
void test()
{
	static int a = 1;//a��һ����̬�ľֲ���������static�������ξֲ�������Ҳ��������ȫ�ֱ���,��ı������������-�þ�̬�ľֲ�����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷�ʹ���ˣ���ʹ�ֲ��������������ڱ䳤
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

