/** �˼��մϴ� ������, nested list�� iterator ���� �����ϴµ� �����ؼ� 2���� �迭�� 1���� �迭�� �ٲ��� ���ҵ��� ���ϴ� ������ �����߽��ϴ�.**/

#include <iostream>

using namespace std;

int* flatten(int** arr, int x, int y) { // 2���� �迭, x����, y����
	int* item; // item���� ����ִ� 1���� �迭 
	item = (int*)malloc(sizeof(int) * (x * y)); //�迭 ũ��
	int idx = 0; 
	for (int i = 0; i < x; i++) { // 2���� �迭�̹Ƿ� 2�� for�� �ʿ�)
		for (int j = 0; j < y; j++) {
			item[idx++] = arr[i][j];
		}
	}
	return item;
 }
int main() {
	int x, y; // �迭�� x����, y����
	cout << "enter x value";
	cin >> x; 
	cout << "enter y value";
	cin >> y;
	int** arr; // 2���� �迭 (�迭���� �迭�̹Ƿ� ���� ������ �ʿ�)
	arr = (int**)malloc(sizeof(int*) * x); //2���� �迭 ũ��
	for (int i = 0; i < x; i++) { // 2���� �迭�̹Ƿ� �Է��Ҷ� 2�� for�� �ʿ�)
		arr[i] = (int*)malloc(sizeof(int) * y); //�迭 ũ��
		for (int j = 0; j < y; j++) {
			cout << "enter elements for array";
			cin >> arr[i][j];
		}
	}
	int* item = flatten(arr, x, y);
	int sum = 0; // sum = item�迭 �ȿ� �ִ� ���ҵ��� ���� ��
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