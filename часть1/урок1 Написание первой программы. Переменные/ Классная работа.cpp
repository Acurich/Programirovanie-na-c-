//Сложите число A с числом B и выведите ответ.
#include<iostream>
using namespace std;
int main() {
	long int a; 
	long int b;
	cin >> a;
	cin >> b;
	cout << a + b;
	system("pause");
	return 0;

}

//Напишите программу, которая считывает год рождения пользователя и текущий год и находит его возраст.
#include<iostream>
using namespace std; 
int main() {
	long int b;
	long int n;
	cin >> b;
	cin >> n;
	cout << n - b;
	system("pause");
	return 0;

}

//В железнодорожной кассе стоимость билетов для одного ребенка и трех взрослых составила s рублей. Сколько стоит билет для ребенка, если взрослый билет стоит a рублей?
#include<iostream>
using namespace std; 
int main() {
	long int s;
	long int a;
	cin >> s;
	cin >> a;
	cout << s - 3*a;
	system("pause");
	return 0;
}

//Необходимо по заданным сторонам прямоугольника a и b узнать его периметр и площадь.
#include<iostream>
using namespace std; 
int main() {
	long int a;
	long int b;
	cin >> a;
	cin >> b;
	cout <<2*a + 2*b << endl;
	cout <<a*b << endl;
	system("pause");
	return 0;
}
