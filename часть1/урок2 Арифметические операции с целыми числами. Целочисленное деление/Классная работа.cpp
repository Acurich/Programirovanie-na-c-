//Дано два числа: a и b. Выведите сообщение о разности этих двух чисел в формате: "a - b = result", где a, b, result - числа.
#include<iostream>
using namespace std; 
int main() {
	int a, b;
	
	cin >> a >> b;
	cout << a <<" - " << b << " = " << a - b;
	system("pause");
	return 0;
}

//Дано целое число. Выведите на экран остаток от деления этого числа на два.
#include<iostream>
using namespace std; 
int main() {
	long int x;
	cin >> x;
	x %= 2;
	cout << x;
	system("pause");
	return 0;
}

//В магазине имеются товары двух видов. В начале дня есть b1 и b2 товаров первого и второго вида стоимостью c1 и c2, к концу дня товаров первого вида стало e1, а второго вида — e2.
#include<iostream>
using namespace std; 
int main() {
	int b1, c1, e1, b2, c2, e2;
	cin >> b1 >> c1 >> e1;
	cin >> b2 >> c2 >> e2;
    long int real_money = (b1 - e1)* c1 + (b2 - e2) * c2;
	long int max_money = (b1 * c1) + (b2 * c2);
  cout << real_money << endl << max_money;
	system("pause");
	return 0;
}

//Дано расстояние в метрах. Выведите число полных километров в нём.
#include<iostream>
using namespace std; 
int main() {
	int x;
	cin >> x;
	cout << x / 1000;
	return 0;
}

//Население инсектополиса составляет N муравьев. Известно, что в одном муравейнике помещается 1000 муравьев, при том один муравейник на 1000 особей уже построен. Определите, сколько еще нужно построить муравейников, чтобы ни в одном из них не было перенаселения.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int k = (n-1) / 1000;
	cout <<k;
	system("pause");
	return 0;
}

//Анатолий — начинающий некромант, но уже обзавёлся своим собственным легионом нежити. В него входит двузначное количество скелетов, где A — количество десятков в этом числе, а B — количество единиц. Для наступления на столицу королевства Анатолий, как хороший тактик, решил разбить свою армию на отряды из K скелетов.
#include<iostream>
using namespace std; 
int main() {
	int a, b, k;
	cin >> a >> b >> k;
	int sum = a * 10 + b;
	sum %= k;
	cout <<sum;
	system("pause");
	return 0;
}
//Дано число n. Выведите следующее за ним чётное число
#include<iostream>
using namespace std; 
int main() {
	int n;
	cin >>n;
	int next = n + 2 - (n % 2);
	cout <<next;
	system("pause");
	return 0;
}
