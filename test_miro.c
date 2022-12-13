#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void main()
{
	int n = 0;
	int arr1[16] = { 0 };
	int arr2[16] = { 0 };

	//n 입력받기, 입력 가능한 정수 바운더리 계산
	printf("n을 입력하세요(1 ~ 16) :  ");
	scanf_s("%d", &n);
	int aa = 1;
	int count;
	for (count = 0; count < n; count++) {
		aa = aa * 2;
	}

	//arr1, 2 입력받기
	int g;
	for (g = 0; g < n; g++) 
	{
		printf("arr1의 %d 번째 숫자를 입력하세요(0 ~ %d) : ", g + 1, aa-1);
		scanf_s("%d", &arr1[g]);
	}
	for (g = 0; g < n; g++)
	{
		printf("arr2의 %d 번째 숫자를 입력하세요(0 ~ %d) : ", g + 1, aa - 1);
		scanf_s("%d", &arr2[g]);
	}
	

	printf("\n\n미로찾기 결과입니다.\n\n");
	int i, k;
	char miro;
	for (i = 0; i < n; i++)
	{
		//a는 2^(n-1)
		int a = 1;
		for (count = 0; count < n-1; count++) {
			a = a * 2;
		}
		//arr1, 2 합치기
		miro=arr1[i] | arr2[i];
		//a 비트값 이용해 출력하기
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
