
/* ������ ������� ��������� ��������, ������ ���1601

������� 5
� ���� ������� ���������� ��������� ����� ����� task3.� �� ��� �����.
� ������ ���� � ������ task5_main.c ��������� ����� ������� main. 
�������������� ������ ���� task5_main.c.

�� ������ ���� � ������ task5_func.� ��������� ����� ������� � ����������� 
(double f(double x) ��� double f(double x, double y)). 
�������������� ������ ���� task5_func.c. 
����� ���������� ���������� ����������� ���������� ����������. 
���������� ����������� ���� ���������.

����� �������������� ����� ������������ � ��������� �� 0.0001


������� 21.


*/
//
//#include "Task5_func.c"
//extern double f_5(double, double);
#include "head.h"
void main(void)
{
	//�����, ����������� ������ ������� �� task1
	printf("f=%5.5f\n", (float)f_5(1,8));

	int x1, y1;
	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	printf("f=%5.5f\n", (float)f_5(x1,y1 ));
}
