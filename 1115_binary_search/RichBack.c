#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr;
	int length, val, num, start, mid, end;

	printf("배열의 길이를 입력하시오: ");
	scanf("%d", &length);
	arr = (int*)malloc(sizeof(int)*length);

	printf("배열의 원소들을 오름차순으로 입력하고 Enter를 누르시오(배열의 길이를 초과해서 입력해도 상관없습니다)\nex)1 2 4 6 10\n");
	for (int i = 0; i < length; i++)
		scanf("%d", &arr[i]);

	printf("배열에서 찾고자 하는 값을 입력하시오: ");
	scanf("%d", &val);

	printf("\n\n\n");
	num = 0;
	start = 0;
	end = length;
	mid = (start + end) / 2;
	while (mid > start)
	{
		num++;//단계 측정
		mid = (start + end) / 2;
		if (arr[mid] == val) {
			printf("%d단계만에 %d번째 원소에서 %d값을 찾았습니다", num, mid + 1, val);
			return 0;
		}
		else {
			if (val < arr[mid])
				end = mid - 1;
			else
				start = mid + 1;
		}
	}
	printf("값을 찾지 못했습니다");

	free(arr);
	return 0;
}