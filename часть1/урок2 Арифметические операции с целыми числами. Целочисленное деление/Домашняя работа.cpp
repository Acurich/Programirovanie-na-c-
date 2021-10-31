//Необходимо по заданной стороне квадрата узнать его периметр и площадь.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int s = n * n;
	int p = 4 * n;
	cout <<p << " " << s;
	system("pause");
	return 0;
}

//Дана масса в килограммах. Требуется вывести число полных центнеров в ней.
#include<iostream>
using namespace std;
int main() {
	int m;
	cin >> m;
	int M = m / 100;
	cout <<M;
	system("pause");
	return 0;
}

//Напишите программу, которая вычисляет расстояние между Борей и Аркадием. Начальное расстояние между ребятами равно s метров, затем мальчики удаляются друг от друга со скоростями v1 и v2 м/мин на протяжении t минут.
#include<iostream>
using namespace std;
int main() {
	int v1, v2, s, t;
	cin >> v1 >> v2 >> s >> t;
	int d = (v1 * t) + (v2 * t) + s;
	cout <<d;
	system("pause");
	return 0;
}

//Существует бесконечно высокий дом, в котором нумерация квартир начинается с единицы. Известен номер квартиры N. Определите на каком этаже находится данная квартира, если всего на этаже располагается по 12 квартир.
#include<iostream>
using namespace std;
int main() {
    long int a;
    cin >> a;
    cout << a / 12 + (a % 12);
    system("pause");
    return 0;
}
