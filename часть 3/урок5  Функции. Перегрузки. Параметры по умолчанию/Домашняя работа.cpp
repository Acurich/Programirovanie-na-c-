//Напишите функцию int max(int a, int b), находящую максимум из двух чисел.
#include <iostream>
using namespace std;
int itc_max(int f_num, int s_num) {
  if (f_num > s_num)
    return f_num;
  else
    return s_num;
}
int main() {
  int a, b;
  cin >> a >> b;
  cout << itc_max(a, b);
}

//Добавьте к предыдущей программе функцию нахождения максимума из трёх чисел int max(int a, int b, int c).
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int max;

  if (a > b && a > c) {
    max = a;
  } else if (b > a && b > c) {
    max = b;
  } else if (a == b && b > c) {
    max = a;
  } else if (b == c && c > a) {
    max = b;
  } else if (a == c && b < c) {
    max = a;
  } else {
    max = c;
  }
  cout << max;
}

//Добавьте к предыдущим двум функциям поиска максимума функцию, находящую наибольшее значение в одномерном массиве int max(int a[], int size).
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[100], max = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i == 0 || a[i] > max) max = a[i];
  }

  cout << max << "\n";

  return 0;
}
