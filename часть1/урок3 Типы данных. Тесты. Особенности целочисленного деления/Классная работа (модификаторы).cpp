//Вычислите значение выражения 7X2 − 3X + 6 для введенного значения X.  
#include<iostream>
using namespace std;
int main() {
long long  x;
	cin >> x;
  long long  y = (7 * x * x) - (3 * x) + 6;
	cout << y;
	return 0;
}

//С некоторого момента прошло некоторое количество дней. Сколько полных недель прошло с этого же момента?
#include<iostream>
using namespace std;
int main() {
	unsigned long x;
	cin >> x;
	unsigned long L = x / 7;
	cout << L;
	system("pause");
	return 0;
}

//Требуется вычислить значение выражения (3X3 + 18X2) X + 12X2 − 5.
#include<iostream>
using namespace std;
int main() {
	unsigned long x ;
	cin >> x;
	unsigned long y = 3 * (x * x * x + 6 * x * x) * x + 12 * x * x -5;
	cout << y;
	system("pause");
	return 0;
}

//В железнодорожной кассе стоимость билетов для одного ребенка и трех взрослых составила S рублей. Сколько стоит билет для ребенка, если взрослый билет стоит A рублей?
#include<iostream>
using namespace std;
int main() {
	long long  a, b;
	cin >> a >> b;
	cout << a - (b * 3);
	system("pause");
	return 0;
}
