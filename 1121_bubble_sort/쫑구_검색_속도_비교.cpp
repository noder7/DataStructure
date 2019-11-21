#include <iostream>

using namespace std;

bool echa(int* arr, int num) {                             //for문 2개로 중복 검사하는 함수
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i != j && arr[i] == arr[j]) return true;
			}
		}
	return false;
}

bool another(int* arr, int num) {                         //
	int* ray;
	ray = new int[num + 1];

	for (int i = 0; i < num; i++) {
		if (ray[arr[i]] == 1) { 
			delete[] ray;
			return false; }

		else {
			ray[arr[i]] = 1;
		}
	}
	delete[] ray;
	return true;
}



int main() {
	int* arr;
	int num;
	int choose;

	cout << "배열의 크기를 입력하시오(배열은 자동으로 채워집니다): ";
	cin >> num;

	arr = new int[num];

	for (int i = 0; i < num; i++) arr[i] = num - i;

	while (1) {
		cout << "검색법의 종류를 선택하시오.(이차: 1, 다른거: 2): ";
		cin >> choose;

		if (choose == 1) echa(arr, num);

		else if (choose == 2) another(arr, num);

		else cout << "잘못된 값을 입력하였습니다." << endl;
	}
	return 0;
}