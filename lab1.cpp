// lab1c.cpp: определяет точку входа для приложения.
//

#include "lab1.h"

using namespace std;
double Diskriminant(double a, double b, double c) {
	double result = b * b - 4.0f * a * c;
	return result;
}

double cleanZero(double value) {
	if (value == 0.0) {
		return 0.0;
	}
	return value;
}

void Error_A_Zero(double b, double c) {

	if (c == 0 && b != 0) {
		cout << "Корень уравнения: " << endl << "x1 = " << 0.0 << endl;
		return;
	}

	if (c == 0 && b == 0) {
		cout << "Корни уравнения - множество вещественных чисел" << endl;
		return;
	}

	if (b == 0 && c != 0) {
		cout << "Уравнение не имеет смысла" << endl;
		return;
	}

	double root = (-1.0) * c / b;
	cout << "Корень уравнения: " << endl << "x1 = " << root << endl;


}
void Roots(double a, double b, double c) {

	double root1, root2;

	if (a == 0.0) {
		Error_A_Zero(b, c);
		return;
	}

	double diskriminant = Diskriminant(a, b, c);

	if (diskriminant < 0.0) cout << "Решений нет" << endl;

	else if (diskriminant == 0.0) {

		root1 = b / (-2.0 * a);
		cout << "Корень уравнения: " << endl << "x1 = " << cleanZero(root1) << endl;
	}
	else {

		root1 = ((-1.0) * b - sqrt(diskriminant)) / (2.0 * a);
		root2 = ((-1.0) * b + sqrt(diskriminant)) / (2.0 * a);

		cout << "Корни уравнения: " << endl;
		cout << "x1 = " << root1 << endl << "x2 = " << root2 << endl;
	}
}

void Print(double a, double b, double c) {
	cout << "Уравнение: " << a << "x^2";
	if (b < 0) {
		cout << b << "x";
	}
	else {
		cout<<"+" << b << "x";
	}
	if (c < 0) {
		cout << c << "=0"<<endl;
	}
	else {
		cout << "+" << c << "=0" << endl;
	}
}

