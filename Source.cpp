#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"ru");
	double x, y;
	char a;

	cout << "напишите два числа и знак операции:";
	cin >> x >> y >> a;

	switch (a)
	{
	case '+':
			cout << "Сумма:" << x + y;
		break;

	case '-':
			cout << "Разность:" << x - y;
		break;

	case '*':
			cout << "Произведение:" << x * y;
		break;

	case '/':
			cout << "Частное:" << x / y;
		break;
	default:
		cout << "Такой операции нет!";
		break;
	}
	return 0;
}
