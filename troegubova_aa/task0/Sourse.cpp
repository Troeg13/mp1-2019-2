#include <math.h> 
#include <stdio.h> 
#include <locale.h> 
int main() 
{ 
setlocale(LC_CTYPE, "Russian"); 
double x1, y1, r1, x2, y2, r2; 
double a; 
printf("������� x1, y1, r1 � x2, y2, r2: "); 
scanf_s("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &y2, &x2, &r2); 
a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); 
if ((a == 0) && (r1 == r2)) 
printf("���������� ���������"); 
else if (a < fabs(r1 - r2)) 
printf("���� ���������� ����������� ������ ������ ����������"); 
else if ((a > fabs(r1 - r2)) && (a < r1 + r2)) 
printf("���������� ������������"); 
else if (a == r1 + r2) 
printf("���������� �������� ������� �������"); 
else if (a == fabs(r1 - r2)) 
printf("���������� �������� ���������� �������"); 
else if (a > r1 + r2) 
printf("���� ���������� ��������� ��� ������ ����������"); 
return 0; 
}