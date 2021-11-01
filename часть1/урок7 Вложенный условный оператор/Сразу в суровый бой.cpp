//Проверьте, что хотя бы одно из введенных чисел А, В, С отрицательно и оканчивается нулём.
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  bool kaneki = (a < 0) && (a % 10 == 0) || (b < 0) && (b % 10 == 0) ||
                (c < 0) && (c % 10 == 0);
  if (kaneki) {
    cout << "TRUE";
  } 
  else {
    cout << "FALSE";
  }
  return 0;
}
