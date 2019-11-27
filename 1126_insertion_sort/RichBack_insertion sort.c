#include<stdio.h>

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int length = sizeof(arr) / sizeof(int);
	int pos, temp;

	printf("[선택정렬]\n\n");
	puts("정렬 전 배열, 정렬 후 배열");
	for (int i = 0; i < length; i++)
		printf("%2d ", arr[i]);

	//정렬
	for (int i = 1; i < length; i++)
	{
		temp = arr[i];
		for (pos = i; temp < arr[pos - 1]; pos--)
		{
			arr[pos] = arr[pos - 1];
		}
		arr[pos] = temp;
	}

	puts("");
	for (int i = 0; i < length; i++)
		printf("%2d ", arr[i]);

	return 0;
}