#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
	SetConsoleOutputCP(1251); //�������� ���������� � ���������
	int N; //���������� ����������, � ����� �� ������� �������� �� �������� � ����������
	/*
	* � ����� do-while �� ������ ���� ���������� ����� �� ������ � �������� ������ � ��������� [12,16]
	*/
	do
	{
		printf("�������� ����� �� �������� � ���������� (���� ����� � ������� [12,16]): ");
		scanf("%d", &N); //��������� �������� ���� ����� �� n �� ��������� ���� ������ ������
	}while(N<12 || N>16);
	/*
	* while(N<12 || N>16); - ���� ������ ���� ���������� ����� �� �
	* ��-����� �� 12 ��� ��-������ �� 16
	* � ��� �, �� �� ���� �� ��������� �������� ������, �.�. �� ��������� ������ ������
	* �� ������� ����� � �������� �� 2 �� 6 (�.�. �/� 2 � 6, �� ��� 2 � 6)
	*/

	float A[N][N]; //��������� �������� ����� - ������ �����,����� ��� N �� ���� ������ � N ��������
	int br=0; //� br �� ������ ���� �� ����������, ����� ��������� �� �������� � ����� 2 �� ���������
	float sum=0; //� sum �� ������� ����������� �� ������ �������� �� �,
	//����� �� ����������� � ��� ������� ��������
	printf("\n�������� ���������� �� ��������� ����� A:\n");
	//������ ����� � ����� �� ���������  �� ����� ����� � ��������� �� ����������:
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			printf("A[%d][%d]= ", i, j); //������� A[0][0]=, A[0][1]=, A[0][2]= � �.�.
			scanf("%f", &A[i][j]); //��������� �������� �� ������� �� ������ �� ������������
			if(A[i][j]==(i+j)) br++; //�� ����� 2 ��������� br � ���� ������ ������� ����� �������
			if(i<j && A[i][j]>0) sum+= A[i][j]; /*������ ������� �������, ����� �� ������ ��� �������
			*��������� � � �����������, ������ ���������� �� � sum*/
		}
	}
	printf("������ �� ������������� ��������, ����������� ��� ��. ����. � ����� � �: %f", sum);
 	
 	float B[br]; //��������� ����� B � ���� �������� ����� �� br (���������� �� �, ����� ���. �� �.2)
 	int index=0; //� index �� ������ ���������� �� ����� C, ������ �� ����������� �������� �� A
 	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			if(A[i][j]==(i+j)) //��� �������� � ����� �� ���������� �� ������ �� ��������� ��
			{
				B[index]=A[i][j];
				index++; //���� ���� �������� �������� �� B ������ �� ������� ������� � 1 �� ��. ��.
			}
		}
	}
	
	printf("\n����� B, �������� ���������� �� �, ����� ���� �������� ������ �� ��������� ��:\n");
	for(int i=0; i<br; i++) //����� for �� ��������� �� ����� B
	{
		printf("%f\t", B[i]); //��������� ����������� �� ���������� �� ����� B �������� - \t
	} printf("\n\n");
	//������ ���������� \n � printf ���� �������� ��� ��� ���� ����.
	system("pause"); //������� ��������� �� ����������� �� ������ (Press any key to continue . . .)
	return 0;
}


