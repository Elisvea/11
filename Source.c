#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#define N 10 ;
#define XMAX 50
const float cOnst = 2.5;

void n1(void)
{
	setlocale(LC_ALL, "RUS");
	int i, k;
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (k = 0; k < 10; k++)
	{
		printf("a[%d] =", k);
		scanf("%f", &temp);
		C[k] = k;
		B[k] = temp;
		A[k] = 2 * temp;
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (i = 0; i < 10; i++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[i], C[i], A[i]);
	}
}

void n2(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		if (i % 2 == 0)
		{
			A[i] = temp + 1;
		}
		else
		{
			A[i] = temp;
		}
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}


}
void n3(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		if (temp < 0)
		{
			A[i] = 0;
		}
		else
		{
			A[i] = temp;
		}
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}
void n4(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		A[i] = pow(temp, 2);
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}
void n5(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		A[i] = temp / 10;
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}
void n6(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		A[i] = -A[i];
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}
void n7(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		A[i] = temp - cOnst;
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}
void n8(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		A[i] = trunc(temp);
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}
void n9(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	float m = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		A[i] = temp;
		if (i % 2 == 0)
		{
			float s = A[i];
			m = m + s;
		}
	}
	A[1] = m;
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}
void n10(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		A[i] = ceil(temp);
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}
void n11(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		A[i] = temp;
	}
	for (int z = 0; z < 9; z++)
	{
		A[z] = A[z] + A[9];
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}
void n12(void)
{
	setlocale(LC_ALL, "RUS");
	float temp;
	float A[10];
	float B[10];
	int C[10];
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf("%f", &temp);
		C[i] = i;
		B[i] = temp;
		if (temp == 0)
		{
			A[i] = i;
		}
		else
		{
			A[i] = temp;
		}
	}
	printf("| �������� ��������  | \t | ������     |   | ����� �������� |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
}


void main(void)
{

	setlocale(LC_ALL, "RUS");
	n1(); n2(); n3(); n4(); n5(); n6(); n7(); n8(); n9(); n10(); n11(); n12();

	float A[10];
	float temp;
	float S = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("A[%d]=", i);
		scanf("%f", &temp);
		A[i] = temp;
		S = S + A[i];
	}
	S = S / 10;
	printf("������� �������������� = %f\n", S);

	// 2 �������

	//float A[100];
	//float m = 0;
	//float n = 0;
	//int number1 = 0; 
	//int number2 = 0;
	//for (int i = 0; i < 100; i++)
	//{
	//	
	//	A[i] = XMIN + 1.f * ( XMAX - XMIN) * rand() / RAND_MAX; 
	//	float numb = A[i];
	//	if (numb > 0)
	//	{
	//		m = m + kaka; 
	//		number1 += 1;
	//	}
	//	else
	//	{
	//		n = n + numb; 
	//		number2 += 1;
	//	}
	//}
	//printf(" ��� ������� = A ;\n ����������� �������� �����.��������� = %f ;\n ����������� �������� �����.��������� = %f ;\n ���-�� ������������� ��������� = %d ;\n ���-�� ������������� ��������� = %d ;\n ������� �������� ������������� ��������� = %f\n", n, m, number1, number2, m / 2);
	system("pause");
}


// ������� 10
// ��������� ����� ������� ��������� �������, ������������� ����� ������������ �� ������ ��������.
//void cold(void)
//{
//	setlocale(LC_ALL, "RUS");
//	int M[N];
//	int min_i; //����������� �� ������ ������� �������
//	int min = INT_MAX; //�������� ������������ �� ������ ��������
//	int sum = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &M[i]);
//		if (abs(M[i]) < min) // ���������� � ���������� �������� ������ ��������
//		{
//			min_i = i;
//			min = abs(M[i]);
//		}
//	}
//
//	for (int i = min_i; i < N; i++)
//	{
//		sum += abs(M[i]);
//	}
//	printf("\n����� = %d", sum);
//	system("pause");
//}