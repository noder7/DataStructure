#include <iostream>

using namespace std;

bool echa(int* arr, int num) {                             //for�� 2���� �ߺ� �˻��ϴ� �Լ�
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

	cout << "�迭�� ũ�⸦ �Է��Ͻÿ�(�迭�� �ڵ����� ä�����ϴ�): ";
	cin >> num;

	arr = new int[num];

	for (int i = 0; i < num; i++) arr[i] = num - i;

	while (1) {
		cout << "�˻����� ������ �����Ͻÿ�.(����: 1, �ٸ���: 2): ";
		cin >> choose;

		if (choose == 1) echa(arr, num);

		else if (choose == 2) another(arr, num);

		else cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl;
	}
	return 0;
}