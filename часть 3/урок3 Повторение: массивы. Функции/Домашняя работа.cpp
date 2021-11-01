//Напишите функцию, находящую сумму всех цифр числа:
//int digitSum(int n)
#include <iostream>

using namespace std;
int digitSum(int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main() {
    int a;
    cin >> a;
    cout << digitSum(a);
}

//Напишите функцию, которая как результат возвращает число, переведенное в восьмеричную систему счисления.
#include <iostream>
using namespace std;
void toOct(int x) {
  if (x < 8)
    cout << x;
  else {
    toOct(x / 8);
    cout << x % 8;
  }
}
int main() {int y;
          cin>>y;
  toOct(y); }
