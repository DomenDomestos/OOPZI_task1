/* ������ ������� ��������� ��������, ������ ���1601

������� 2
�������� �������� ������� �� ������� 1 ��������� �� ��� ���������, 
������� � ���� �������������� �������� ����� ���������, � � ������ 
��� �������� �����-������. ������ ��������� �������� ��� �������. 
�������������� ����� ��������� �������� ��� ������� � �����������, 
������������� �� ��������, � ������������ ���������.

����� �������������� ����� ������������ � ��������� �� 0.0001


������� 21.


*/

//������ ��������������� ���������� ��� ���������� �������
#include <stdio.h>
#include <math.h>

//������ ���������� ���������
#include <string.h>
double f_2(double x, double y)
{
	return (sqrt(x) - sqrt(y)) / x;
}
void main(void)
{
	//�����, ����������� ������ ������� �� task1
	printf("f=%5.5f\n", (float)f_2(1,8));

	int x1, y1;
	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	printf("f=%5.5f\n", (float)f_2(x1,y1 ));
}