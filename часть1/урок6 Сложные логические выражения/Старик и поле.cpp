//Перед посадкой саженцев поле нужно вскопать. Само поле по ширине попадает в отрезок [20, 100].  Старик нашел 3 самых удачных точки, где проще всего начать вскапывать. Напишите программу, которая определит, сколько точек попадают в поле.
#include <iostream>
using namespace std;
int main () {
int a, b, c, s = 0;
cin >> a >> b >> c;
  if (100 >= a && a >= 20) {
    ++s;
  }
  if (100 >= b && b >= 20) {
    ++s;
  }
  if (100 >= c && c >= 20) {
    ++s;
} 
  cout << s;
  return 0;
}
