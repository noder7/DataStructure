#include<stdio.h>

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int length = sizeof(arr) / sizeof(int);
	int lowest, temp;

	printf("[��������]\n\n");
	puts("���� �� �迭, ���� �� �迭");
	for (int i = 0; i < length; i++)
		printf("%2d ", arr[i]);

	//����
	for (int i = 0; i < length; i++)
	{
		lowest = i;
		for (int j = i + 1; j < length; j++)
		{
			if (arr[lowest] > arr[j])
				lowest = j;
		}

		if (lowest != i) {
			temp = arr[i];
			arr[i] = arr[lowest];
			arr[lowest] = temp;
		}
	}

	puts("");
	for (int i = 0; i < length; i++)
		printf("%2d ", arr[i]);
	return 0;
}