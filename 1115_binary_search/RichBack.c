#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr;
	int length, val, num, start, mid, end;

	printf("�迭�� ���̸� �Է��Ͻÿ�: ");
	scanf("%d", &length);
	arr = (int*)malloc(sizeof(int)*length);

	printf("�迭�� ���ҵ��� ������������ �Է��ϰ� Enter�� �����ÿ�(�迭�� ���̸� �ʰ��ؼ� �Է��ص� ��������ϴ�)\nex)1 2 4 6 10\n");
	for (int i = 0; i < length; i++)
		scanf("%d", &arr[i]);

	printf("�迭���� ã���� �ϴ� ���� �Է��Ͻÿ�: ");
	scanf("%d", &val);

	printf("\n\n\n");
	num = 0;
	start = 0;
	end = length;
	mid = (start + end) / 2;
	while (mid > start)
	{
		num++;//�ܰ� ����
		mid = (start + end) / 2;
		if (arr[mid] == val) {
			printf("%d�ܰ踸�� %d��° ���ҿ��� %d���� ã�ҽ��ϴ�", num, mid + 1, val);
			return 0;
		}
		else {
			if (val < arr[mid])
				end = mid - 1;
			else
				start = mid + 1;
		}
	}
	printf("���� ã�� ���߽��ϴ�");

	free(arr);
	return 0;
}