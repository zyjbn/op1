#include <stdio.h>
int main()
{
	double a, b, d;
	char c;
	printf("���������㷨��");
	scanf("%lf%c%lf", &a, &c, &b);
	switch (c)
	{
	case'+':d = a + b; printf("���Ϊ��%lf", d); break;
	case'-':d = a - b; printf("���Ϊ��%lf", d); break;
	case'*':d = a * b; printf("���Ϊ��%lf", d); break;
	case'/':d = a / b; printf("���Ϊ��%lf", d); break;
	default:printf("���㷨����������������");
	}
}
//���������С�����// 
