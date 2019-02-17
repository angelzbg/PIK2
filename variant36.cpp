/*
 * ����� � �������� ����� A[N,N] ������ N � ���� ����� � ��������� [12,16] � �� ������� �� ������������.
 * �� �� ������� ��������, ����� ������� ����������� �� ���������� �� ������ � ��������� ��������:
 * 1. ������ ������������������� �������� �� ������������� �������� �� ������
 * 2. ������� ��� ����� B, ����� ��� �� �������� ���� �� ���������� �� A, ����� �� ����������� ��� ������� ��������
 * 3. ������� �� ������ ���������� ����� � �������� ���
 */


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1251); //����� �� ���������� �� ����������
	
	int N=0; //� N �� �������� �������� �� ���������� �� �������� � ���������� (��������� �������)
	while(N<12 || N>16)
	{
		printf("�������� ����� �� �������� � ���������� �� ����� A (12<=N<=16): "); //������� �� � ���������
		scanf("%d", &N); //������� �� ��������� ���������� �� N
		if(N<12 || N>16) printf("���� ��������� ���������!\n");
	}
	//���� � �����, ����� �� �� ���������, ������ �� ������� ����� �� 12 �� 16
	//�� �������  ����� while ���� �� �� �� �������, �� � ���������� ������� - (N<12 || N>16)
	//��� �� �� ������� ���� ������, ������ ��������� �������� �� N � 0 � ��������� �� ���������
	//�.�. ��������� �������� �� N � ��-����� �� 12, � ��� ��� ������, �� ��� � ��-����� �� 12 ��� ��-������
	//�� 16, ������ �� �� ������� ������
	int elements = N*N-N-(N*N-N)/2;
	float B[elements]; //������� ����� B (������ �����, ������), � ���� ��������, ����� ��
	//������� �������� �� A, ����� �� ������� ��� ������� ��������
	/*�������� �� ���� ������� �������� � 4 ���� � 4 ������ (��� ����� � ����� �����)
	� ������ �� ��������� ���� ����� �� ��������: 4x4-4-(4x4-4):2 = ?
	������ 6? ����� ������� ��������, ������� �� ��� ������� ��������*/
	float A[N][N]; //�������� ����� A (������ �����, ������), ����� ��� N �� ���� ������ � ��������
	float sumA=0; //� sumA �� �������� ���������� �� ������ ����������� �������� �� ����� A
	int counterPositive=0; //� counterPositive �� �������� +1 ������ ������� ����������� �������
	int index=0; //� index �� ������ ��������� �� ����� B, ������ �� ����������� ���������� �� �, �����
	//�� ��� ������� ��������
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			printf("A[%d][%d]= ", i, j); //������ A[0][1]= , A[0][2]= � �.�.
			scanf("%f", &A[i][j]); //������� ����������� �� ���������� �� �������� �� ������������
			if(A[i][j]>0) //������ ���������� ������� � ����������� (�.�. ��-����� �� 0)
			{
				sumA = sumA + A[i][j]; // ������ ��� ������ ��������
				counterPositive++; //������ 1 ��� counterPositive
			}
			if(i<j) //���� ������� �� ���� � ��-����� �� ���� �� ������ (�.�. ���� � ��� ������� ��������)
			{
				B[index]=A[i][j]; //��������� �� ������� ������� �� B ���������� �� �������� �� A
				index++; //� �������� ��� index ���� �� �� ���� ��������� ��� �� ������� ��� ��. ������� �� B
			}
		}
	}
	printf("\n�������� �������� �� ������������� �������� � ����� A = %f\n", sumA/counterPositive);
	//������������������� � = �� ������ �� ������������� �������� ������ �� ����� ��
	
	printf("\n����� B �������� ����:\n");
	for(int i=0; i<elements; i++) printf("%f\t", B[i]); //����� �� ������ ���������� �� B � �������� ��� - \t
	
	system("pause");
	return 0;
}

/*
* %d � �� ���� ����� �� ��� int (���� � � %i)
* %f � �� ������ �����, �������� �� ��� float, double
* \n �������� ��� ��� ���� ����
* \t �������� �������� (�.�. ��������� ���������� � �������� ��� /��� ���� �� ���� ������ xD/)
*/