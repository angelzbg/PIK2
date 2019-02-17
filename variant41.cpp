/*
 * ����� � �������� ����� A[N,M], ������ N,M �� ���� ����� � ��������� [2,4] � �� �������� �� ������������.
 * �� �� ������� ��������, ����� ������� ���������� �� ������ � ��������� ��������:
 * 1. ������ ������������ �������� �� ������� �� ������
 * 2. ������� ����� A, ���� ������ �������� �� ����������� �������� � ������� 77
 * 3. ������� �� ������ ���������� ����� � �������� ���
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
 	SetConsoleOutputCP(1251);

	int N, M;
	do
	{ 	printf("�������� ����� �� �������� (���� ����� � ������� [2,4]): ");
		scanf("%d", &N);
	}while(N<2 || N>4);
	do
	{ 	printf("�������� ����� �� ���������� (���� ����� � ������� [2,4]): ");
		scanf("%d", &M);
	}while(M<2 || M>4);

	float A[N][M];
	printf("\n�������� ���������� �� ��������� ����� A:\n");
	for(int i=0; i<N; i++)
	{ 	for(int j=0; j<M; j++)
		{ 	printf("A[%d][%d]= ", i, j);
			scanf("%f", &A[i][j]);
		}
	}

	float max=A[0][0];
	for(int i=0; i<N; i++)
	{ 	for(int j=0; j<M; j++)
		{
			if(A[i][j]>max) max=A[i][j];
		}
	}
	printf("\n������������ �������� �� ������� �� ������ � ����� �� %f\n", max);
	
	for(int i=0; i<N; i++)
	{ 	for(int j=0; j<M; j++)
		{
		 	if(A[i][j]<0) A[i][j]=77;
		}
	}
	
	printf("\n����������� ����� A �������� ����:\n");
	for(int i=0; i<N; i++)
	{ 	for(int j=0; j<M; j++)
		{
			printf("%f\t", A[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	system("pause");
	return 0;
}



