/*Написать функцию f(a,b), вычисляющую и возвращающую величину неизвестного угла С в треугольнике по заданным величинам его известных углов a и b.
Продемонстрировать ее работу для трех треугольников*/
#include<iostream>

using namespace std;

void ugol(int a, int b, int* c) {
	*c = 180 - (a + b);
}
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, d = 0;
	cout << "введите углы:";
	cin >> a >> b;
	ugol(a, b, &d);
	cout << "третий угол равен:" << d << endl;
	return 0;
}