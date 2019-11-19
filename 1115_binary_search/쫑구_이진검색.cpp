//정렬된 배열이라고 상정, 이진검색만 구현, 
#include <iostream>                                    

using namespace std;

void binary_sort(int* arr, int start, int end, int find) {                          //arr = 검색할 배열 start = 시작부분 end = 끝부분 find = 찾을 값
	int target = (start + end) / 2;                                                 //find 와 비교할 index값 저장
	if (start == end) {                                                             //재귀함수의 끝부분(마지막 단계에서는 start == end 가 됨)
		if (find != arr[target]) cout << "찾는 수가 없습니다."<< endl;              //find 값이 없을 경우 호출 후 함수 종료
		else cout << "찾는 수는 arr[" << target << "]에 있습니다." << endl;         //find 값이 있을 경우 호출 후 함수 종료
	}
	 
	else {                                                                          
		if (arr[target] == find) {                                                  //찾는 도중에 find값을 찾았을 경우.
			cout << "찾는 수는 arr[" << target << "]에 있습니다." << endl;
		}

		else if (arr[target] > find) binary_sort(arr, start, target - 1, find);    //find값보다 배열에 저장된 값이 클 경우 start는 그대로, end를 target보다 한칸 왼쪽에 있게 설정 후 함수 재실행

		else if (arr[target] < find) binary_sort(arr, target + 1, end, find);         //find값보다 배열에 저장된 값이 작을 경우 start는 target보다 한칸 오른쪽에, end를 그대로 설정 후 함수 재실행
	}
}                                                                                  //재귀함수를 계속해서 실행하면 find 값을 찾거나 start == end가 되어 함수 종료


int main() {
	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };                                          //정렬된 배열
	int find_number;                                                               
	 
	cout << "찾고자 하는 수를 입력하시오. :";
	cin >> find_number;

	binary_sort(arr, 0, 6, find_number);                                          //검색

	return 0;
}