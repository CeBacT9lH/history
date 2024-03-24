#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"ru");
	double x, y;
	char a;

	cin >> x >> y >> a;

	switch (a)
	{
	case '+':
			cout << x + y;
		break;

	case '-':
			cout << x - y;
		break;

	case '*':
			cout << x * y;
		break;

	case '/':
			cout << x / y;
		break;
	default:
		cout << "Такой операции нет!";
		break;
	}
}