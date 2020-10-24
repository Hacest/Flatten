/** 죄송합니다 교수님, nested list를 iterator 없이 구현하는데 실패해서 2차원 배열을 1차원 배열로 바꾼후 원소들을 더하는 식으로 구현했습니다.**/

#include <iostream>

using namespace std;

int* flatten(int** arr, int x, int y) { // 2차원 배열, x길이, y길이
	int* item; // item들이 들어있는 1차원 배열 
	item = (int*)malloc(sizeof(int) * (x * y)); //배열 크기
	int idx = 0; 
	for (int i = 0; i < x; i++) { // 2차원 배열이므로 2중 for문 필요)
		for (int j = 0; j < y; j++) {
			item[idx++] = arr[i][j];
		}
	}
	return item;
 }
int main() {
	int x, y; // 배열의 x길이, y길이
	cout << "enter x value";
	cin >> x; 
	cout << "enter y value";
	cin >> y;
	int** arr; // 2차원 배열 (배열안의 배열이므로 더블 포인터 필요)
	arr = (int**)malloc(sizeof(int*) * x); //2차원 배열 크기
	for (int i = 0; i < x; i++) { // 2차원 배열이므로 입력할때 2중 for문 필요)
		arr[i] = (int*)malloc(sizeof(int) * y); //배열 크기
		for (int j = 0; j < y; j++) {
			cout << "enter elements for array";
			cin >> arr[i][j];
		}
	}
	int* item = flatten(arr, x, y);
	int sum = 0; // sum = item배열 안에 있는 원소들을 더한 값
	for (int i = 0; i < x * y; i++) { 
		if(sum <= 10)
		{
			sum += item[i];
			cout << item[i] << " ";
		}
	}
	cout << "result: " << sum;
		return 0;
}