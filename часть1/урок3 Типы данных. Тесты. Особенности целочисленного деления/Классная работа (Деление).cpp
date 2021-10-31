//Задан объем информации в битах A. Определить, суммарное количество килобайт, байт и бит, которые содержатся в A.
#include<iostream>
using namespace std;
int main() {
	unsigned int  a;
	cin >> a;
	unsigned int x = (a / 1024) / 8;
    unsigned int b = (a - x * 1024 * 8) / 8;
    unsigned int c = a % 8;
	cout << x << endl;
    cout << b << endl;
    cout << c << endl; 
	return 0;
}

//В царстве-государстве принята валюта "дубики", а мировая валюта - "чужачки".
//Чужачок стоит 62 дубика.
//Посчитать сколько чужачков можно купить на X дубиков.
#include<iostream>
using namespace std;
int main() {
	long long  x;
	cin >> x;
	cout << x / 62;
	system("pause");
	return 0;
}
//В царстве-государстве принята валюта "дубики", а мировая валюта - "чужачки".
//Также дубики можно разменять на липочки. Один дубик равен ста липочкам.
//Чужачок стоит 50 дубиков 20 липочек.
//Посчитать сколько чужачков можно купить на X дубиков и Y липочек.
#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
  cin >> a >>  b;
  c= a * 100 + b;
  d = 5020;
  cout << c / d;
	return 0;
}

//Дано целое число. Выведите на экран остаток от деления этого числа на десять.
#include<iostream>
using namespace std;
int main() {
	long long x, y;
	cin >> x >> y;
    y = x % 10;
	cout << y;
	system("pause");
	return 0;
}

//Дано неотрицательное целое число X. Выведите последнюю цифру этого числа, т.е. разряд единиц.
#include<iostream>
using namespace std;
int main() {
	long long  x;
	cin >> x;
	long long y = x % 10;
	cout << y;
	system("pause");
	return 0;
}

//Требуется написать программу, которая находит сумму и произведение цифр двузначного числа.
#include<iostream>
using namespace std;
int main() {
	short x;
	cin >> x;
	short P = (x / 10) + (x % 10);
    short S = (x / 10) * (x % 10);
	cout <<  P << " " << S;
	system("pause");
	return 0;
}

//Дано целое положительное пятизначное число. Выведите его цифры на разных строках, начиная с последней.
#include<iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
    int y = x % 10;
    int f = (x / 10) % 10;
    int a = (x / 100) % 10;
    int d = (x / 10000);
    int s = (x / 1000) % 10;
	cout << y << endl;
    cout << f << endl;
    cout << a << endl;
    cout << s << endl;
    cout << d << endl;
	system("pause");
	return 0;
}

//Дано натуральное трёхзначное число n. Найдите сумму и произведение цифр в нём.
#include <iostream>
using namespace std;
int main()
{
    int a, a1, a2, a3, s, p;
    cin >> a, cout << "\n";
    a1 = a/100;
    a2 = a/10 % 10;
    a3 = a % 10;
    s = a1+a2+a3;
    p = a1*a2*a3;
    cout << s <<"  " << p << "\n";
    return 0;
}
