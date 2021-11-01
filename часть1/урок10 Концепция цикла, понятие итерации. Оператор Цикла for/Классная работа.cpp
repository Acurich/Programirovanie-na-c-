//Дано натуральное число N. Выведите последовательность чисел от N до 0 включительно. 
#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	for (int i = x; i >= 0; i = i - 1) {
		cout << i << " ";
	}
	system("pause");
	return 0;
}

//Дано натуральное число N. Выведите N раз на экран сообщение "Hello, World!"
#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	for (int pos = 0; pos < x; pos = pos + 1) {
		cout << "Hello, World!" << endl;
	}
	system("pause");
	return 0;
}

//Напишите программу, которая для заданного натурального числа N выведет квадраты всех целых чисел от N до 1.
#include <iostream>
using namespace std;
int main(){
  int x;
  cin >> x;
  for (int i = x; i > 0; i = i - 1) {
    cout << i * i << " ";
  }
  system("pause");
  return 0;
}

//Дано натуральное число N. Найдите сумму всех чисел от 1 до N.
#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int sum = 0;
	for (int i = 0; i <= x; i++) {
		sum = sum + i;
	}
  cout << sum << endl;
	system("pause");
	return 0;
}

//По данному натуральному n вычислите сумму 12+22+…+n2.
#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int rezult = 0;
	for (int i = 1; i <= x; i++) {
		rezult += i * i;
	}
	cout << rezult;
	system("pause");
	return 0;
}

//Дано натуральное число N. Найдите сумму всех нечетных чисел из диапазона от 1 до N.
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  int summa = 0;
  for (int i = 0; i <= x; i++) {
  if (i % 2 != 0) {
      summa = summa + i;
    }
  }
  cout << summa;
  system("pause");
  return 0;
}

//Дано 3 целых неотрицательных числа: N, x, y. Выведите все числа от 1 до N включительно, которые при делении на x дают остаток, равный y.
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; i <= a; i++) {
    if (i % b == c) cout << i << " ";
  }
  system("pause");
  return 0;
}

//Дано 3 целых неотрицательных числа: N, x, y. Выведите все числа, начиная с x, которые не превосходят N, с шагом y.
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  for ( int i = b; i <= a; i += c){
      cout << i << " ";
  }
  system("pause");
  return 0;
}

//Даны два натуральных числа n и m. Определите, сколько двузначных чисел, попадающих в диапазон от n до m включительно имеют в своей записи хотя бы одну нечетную цифру.
#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int c = 0;
  for (int i = n; i <= m; i++) {
    if (i / 100 == 0 && i / 10 != 0) {
      int a1 = i / 10;
      int a2 = i % 10;
      if (a1 % 2 != 0 || a2 % 2 != 0) c++;
    }
  }
  cout << c;
  system("pause");
  return 0;
}
