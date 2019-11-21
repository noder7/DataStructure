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

	cout << "정렬할 배열의 개수를 입력하시오.: ";
	cin >> num;
	cout << endl;

	arr = new int[num];

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "번째 수를 입력하시오.";
		cin >> arr[i];
	}

	cout << "정렬 전 배열: " << endl << endl;

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

	cout << "정렬 후 배열: " << endl << endl;

	showarr(arr, num);

	return 0;
}