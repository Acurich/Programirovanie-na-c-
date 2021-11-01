//Напишите функцию void inc(int &a, int b = 1), которая увеличивает значение переменной a на b. Если значение b не указано, то a должно увеличиваться на 1.
#include <iostream>
using namespace std;
void inc(int &a, int b = 1){
  a += b;
}
int main(){
    int a, b;
    cin >> a >> b;
    inc(a, b);
    cout << a;
    return 0;
}

//Напишите функцию void fill(int a[], int size, int b = 0), которая заполняет массив заданными значениями или нулем, если параметр не указан.
#include <iostream>
using namespace std;
void fill(int a[], int size, int b = 0) {
  for(int i = 0; i < size; i++){ 
  a[i] = b;
  }
}
int main() {
    int arr[100000], size, k;
    cin >> size >> k;
    fill(arr, size, k);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    fill(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}

//Напишите функцию сравнения двух целых чисел bool is_equal(int a, int b). Как результат функция должна возвращать true, если числа равны и false в ином случае.
#include <iostream>
 
using namespace std;
bool is_equal(int a, int b) {
  if (a == b) {
    return true;
  }
  else {return false;}
}
int main() 
{
	int a, b;
 
	cin >> a >> b;
 
	if (is_equal(a, b))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}

//Напишите функцию сравнения двух вещественных чисел bool is_equal(double a, double b). Как результат функция должна возвращать true, если числа равны и false в ином случае.
//Сравнивать вещественные числа необходимо с точностью до сотыx. Для этого необходимо сравнить разницу чисел с 0.01, если числа отличаются меньше чем на это число, то будем считать их равными: abs(a - b) <= 0.01.
#include <iostream>
 
using namespace std;
bool is_equal(double a, double b) {
  if (abs(a - b) < 0.01) {
    return true;
  }
  else {return false;}
}
int main() 
{
	double a, b;
 
	cin >> a >> b;
 
	if (is_equal(a, b))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}

//Измените функцию из предыдущей задачи, добавив точность сравнения как параметр функции, указав значение по умолчанию 0.01.
#include <iostream>
 
using namespace std;
bool is_equal(double a, double b, double c) {
  if (abs(a - b) < c) {
    return true;
  }
  else {return false;}
}
int main() 
{
	double a, b, c;
 
	cin >> a >> b >> c;
 
	if (is_equal(a, b, c) == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}

//Добавьте к предыдущей функции перегруженную версию, в которую третьим параметром передается точность как целое число - количество знаков после точки.
#include <iostream>
#include <cmath>
using namespace std;
bool is_equal(double a, double b, int c) {
  if (abs(a - b) < pow ( 10, -c)) {
    return true;
  }
  else {return false;}
}
bool is_equal(double a, double b, double c) {
  if (abs(a - b) <  c) {
    return true;
  }
  else {return false;}
}
int main() 
{
  int d;
  cin >> d;
  double a, b;
  cin >> a >> b;
  if ( d== 2) {
  int c;
    cin >> c;
    if (is_equal(a, b, c) == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
  }
  else if ( d == 1) {
    double c;
    cin >> c;
    if (is_equal(a, b, c) == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
  }
 
	
}
