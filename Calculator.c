#include <stdio.h>
int main()
{
	double a, b, d;
	char c;
	printf("请输入运算法则");
	scanf("%lf%c%lf", &a, &c, &b);
	switch (c)
	{
	case'+':d = a + b; printf("结果为：%lf", d); break;
	case'-':d = a - b; printf("结果为：%lf", d); break;
	case'*':d = a * b; printf("结果为：%lf", d); break;
	case'/':d = a / b; printf("结果为：%lf", d); break;
	default:printf("运算法则有误，请重新输入");
	}
}
//还在完善中。。。// 
