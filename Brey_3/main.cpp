#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Белевцева Дарья Юрьевна студент группы УМЛ-112\n";
	cout << "Программа для расчёта полинома\n";

	for (int i = -5; i <= 11; i++)
	{
		double x = i / 10.;
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
