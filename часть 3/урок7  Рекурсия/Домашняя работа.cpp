//Дано два целые числа a и b. Напишите рекурсивную функцию для нахождения суммы всех чисел от a до b включительно.
#include <iostream>
using namespace std;
int sum(int a, int b) {
  int s = 0;
  if (a == b)
    return b;
  else
    return sum(a, b - 1) + b;
};

int main() {
  int a, b;
  cin >> a >> b;
  if (a > b) swap(a, b);
  cout << sum(a, b) << endl;
  return 0;
}

//Реализуйте функцию рекурсивного возведения вещественного числа в степень
#include <iomanip>
#include <iostream>
using namespace std;
double power(double x, unsigned p, double m = 1) {
  if (p == 0) return m;
  m *= x;
  return power(x, p - 1, m);
}
int main() {
  double x;
  int p;
  cin >> x >> p;
  auto res = power(x, p);
  cout << fixed << setprecision(10) << res;
}

//Дано целое положительное число, не оканчивающееся нулем.
//Выведите все цифры числа через пробел справа налево.
#include <iostream>
using namespace std;

int DigitsNumber(int n) {
  if (n == 0) return 0;
  cout << n % 10 << " ";
  return DigitsNumber(n / 10);
}

int main() {
  int n;
  cin >> n;

  DigitsNumber(n);
  return 0;
}
  
