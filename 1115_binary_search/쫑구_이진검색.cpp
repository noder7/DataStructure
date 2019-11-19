//���ĵ� �迭�̶�� ����, �����˻��� ����, 
#include <iostream>                                    

using namespace std;

void binary_sort(int* arr, int start, int end, int find) {                          //arr = �˻��� �迭 start = ���ۺκ� end = ���κ� find = ã�� ��
	int target = (start + end) / 2;                                                 //find �� ���� index�� ����
	if (start == end) {                                                             //����Լ��� ���κ�(������ �ܰ迡���� start == end �� ��)
		if (find != arr[target]) cout << "ã�� ���� �����ϴ�."<< endl;              //find ���� ���� ��� ȣ�� �� �Լ� ����
		else cout << "ã�� ���� arr[" << target << "]�� �ֽ��ϴ�." << endl;         //find ���� ���� ��� ȣ�� �� �Լ� ����
	}
	 
	else {                                                                          
		if (arr[target] == find) {                                                  //ã�� ���߿� find���� ã���� ���.
			cout << "ã�� ���� arr[" << target << "]�� �ֽ��ϴ�." << endl;
		}

		else if (arr[target] > find) binary_sort(arr, start, target - 1, find);    //find������ �迭�� ����� ���� Ŭ ��� start�� �״��, end�� target���� ��ĭ ���ʿ� �ְ� ���� �� �Լ� �����

		else if (arr[target] < find) binary_sort(arr, target + 1, end, find);         //find������ �迭�� ����� ���� ���� ��� start�� target���� ��ĭ �����ʿ�, end�� �״�� ���� �� �Լ� �����
	}
}                                                                                  //����Լ��� ����ؼ� �����ϸ� find ���� ã�ų� start == end�� �Ǿ� �Լ� ����


int main() {
	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };                                          //���ĵ� �迭
	int find_number;                                                               
	 
	cout << "ã���� �ϴ� ���� �Է��Ͻÿ�. :";
	cin >> find_number;

	binary_sort(arr, 0, 6, find_number);                                          //�˻�

	return 0;
}