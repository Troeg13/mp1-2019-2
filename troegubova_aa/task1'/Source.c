#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int x1, y1, x2, y2, a, x, y, e;
	printf("������� ���������� ������ ������ �1: ");
	scanf_s("%d %d", &x1, &y1);
	printf("������� ���������� ������ ������ �2: ");
	scanf_s("%d %d", &x2, &y2);
	printf("�������� ������, ������ ��������������� ����� (1 - ����; 2 - ������; 3 - ����; 4 - �����; 5 - �����): ");
	scanf_s("%d", &a);
	x = abs(x2 - x1);
	y = abs(y2 - y1);
	e = 0;

	switch (a)
	{
	case 1:
		if (((x == 1) && (y == 2)) || ((x == 2) && (y == 1)))
			printf("�����");
		else
			e = 1;
		break;
	case 2:
		if ((x <= 1) && (y <= 1))
			printf("�����");
		else
			e = 2;
		break;
	case 3:
		if (x == y)
			printf("�����");
		else
			e = 3;
		break;
	case 4:
		if ((x == 0) || (y == 0))
			printf("�����");
		else
			e = 4;
		break;
	case 5:
		if (((x == 0) || (y == 0)) || (x == y))
			printf("�����");
		else
			e = 5;
		break;
	default:
		printf("������� ������������ �����");
		break;
	}

	if (e != 0)
	{
		if ((e != 1) && (((x == 1) && (y == 2)) || ((x == 2) && (y == 1))))
		{
			printf("���� \n");
			e = 0;
		}
		if ((e != 2) && ((x <= 1) && (y <= 1)))
		{
			printf("������ \n");
			e = 0;
		}
		if ((e != 3) && (x == y))
		{
			printf("���� \n");
			e = 0;
		}
		if ((e != 4) && ((x == 0) || (y == 0)))
		{
			printf("����� \n");
			e = 0;
		}
		if ((e != 5) && (((x == 0) || (y == 0)) || (x == y)))
		{
			printf("����� \n");
			e = 0;
		}
		if (e != 0)
			printf("�� ���� ������ �� ����� ������� �� �1 � �2");
	}

	system("pause");
}


    


