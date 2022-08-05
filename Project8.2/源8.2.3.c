#include <stdio.h>
int main()
{
	extern int g_val;//extern-声明外部符号的
	printf("g_val=%d\n", g_val);
	return 0;
}