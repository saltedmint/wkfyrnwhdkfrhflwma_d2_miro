#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void main()
{
	int n = 0;
	int arr1[16] = { 0 };
	int arr2[16] = { 0 };

	//n �Է¹ޱ�, �Է� ������ ���� �ٿ���� ���
	printf("n�� �Է��ϼ���(1 ~ 16) :  ");
	scanf_s("%d", &n);
	int aa = 1;
	int count;
	for (count = 0; count < n; count++) {
		aa = aa * 2;
	}

	//arr1, 2 �Է¹ޱ�
	int g;
	for (g = 0; g < n; g++) 
	{
		printf("arr1�� %d ��° ���ڸ� �Է��ϼ���(0 ~ %d) : ", g + 1, aa-1);
		scanf_s("%d", &arr1[g]);
	}
	for (g = 0; g < n; g++)
	{
		printf("arr2�� %d ��° ���ڸ� �Է��ϼ���(0 ~ %d) : ", g + 1, aa - 1);
		scanf_s("%d", &arr2[g]);
	}
	

	printf("\n\n�̷�ã�� ����Դϴ�.\n\n");
	int i, k;
	char miro;
	for (i = 0; i < n; i++)
	{
		//a�� 2^(n-1)
		int a = 1;
		for (count = 0; count < n-1; count++) {
			a = a * 2;
		}
		//arr1, 2 ��ġ��
		miro=arr1[i] | arr2[i];
		//a ��Ʈ�� �̿��� ����ϱ�
		for (k = 0; k < n; k++,a/2)
		{
			if ((a & miro) >= a)
				printf("#");
			else
				printf(" ");
			a >>= 1;
		}
		printf("\n");
	}
}
