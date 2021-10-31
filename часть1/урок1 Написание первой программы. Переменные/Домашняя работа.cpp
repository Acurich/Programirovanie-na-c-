//Требуется вычислить разность двух чисел.
#include<iostream>
using namespace std; 
int main() {
	long int a;
	long int b;
	cin >> a;
	cin >> b;
	cout <<a - b;
	return 0;
}

//Саша надувает s воздушных шариков в час, а Никита — n шариков. Какое количество шариков они надуют вместе за h часов?
//Напишите программу, которая выводит на экран ответ на указанную задачу.
#include<iostream>
using namespace std; 
int main() {
	long int s;
	long int n;
	long int h;
	cin >> s;
	cin >> n;
	cin >> h;
	cout <<(s + n) * h;
	return 0;

}

//Составьте программу для вывода на экран «лесенкой» трех последовательно идущих трехзначных чисел. Первое число вводится, а остальные должны вычисляться в программе.
#include<iostream>
using namespace std; 
int main() {
	long int n;
	cin >> n;
	int a= n +1;
	int b= n +2;
	cout << n << endl;
    printf("    ");
	cout << a << endl;
    printf("        ");
	cout << b << endl;
	return 0;
}
