#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Белевцева Дарья Юрьевна студент группы УМЛ-112\n";
	cout << "Программа для расчёта полинома\n";

	for (double x = -0.5; x <= 1.1; i += 0.1)
	{
		double p = 0;
		double m = 1;
		for (int k = 0; k < 100; k++)
		{
			p += m;
			m *= x;
		}
		cout << "P(" << x << ") = " << p << endl;
	}

	system("pause");

	return 0;
}
