/*�������� ������� f(a,b), ����������� � ������������ �������� ������������ ���� � � ������������ �� �������� ��������� ��� ��������� ����� a � b.
������������������ �� ������ ��� ���� �������������*/
#include<iostream>

using namespace std;

void ugol(int a, int b, int* c) {
	*c = 180 - (a + b);
}
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, d = 0;
	cout << "������� ����:";
	cin >> a >> b;
	ugol(a, b, &d);
	cout << "������ ���� �����:" << d << endl;
	return 0;
}