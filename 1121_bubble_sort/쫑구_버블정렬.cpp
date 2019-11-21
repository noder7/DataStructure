#include <iostream>
#include <iomanip>

using namespace std;

void showarr(int* arr, int num) {
	for (int i = 0; i < num; i++) cout << "arr[" << i << "] ";
	cout << endl;
	for (int i = 0; i < num; i++) cout << left << "  " << arr[i] <<"    ";
	cout << endl << endl;
}


int main() {
	int* arr;
	int num;

	cout << "������ �迭�� ������ �Է��Ͻÿ�.: ";
	cin >> num;
	cout << endl;

	arr = new int[num];

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "��° ���� �Է��Ͻÿ�.";
		cin >> arr[i];
	}

	cout << "���� �� �迭: " << endl << endl;

	showarr(arr, num);

	for (int i = num - 1; i > 0; i--) {
		int tem;
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				tem = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tem;
			}
		}
	}

	cout << "���� �� �迭: " << endl << endl;

	showarr(arr, num);

	return 0;
}