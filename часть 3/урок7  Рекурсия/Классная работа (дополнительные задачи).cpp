//Требуется найти наибольший общий делитель двух заданных натуральных чисел, используя алгоритм Евклида.
#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  while (a && b) {
    if (a >= b) {
      a = a - b;
      ;
    } else if (b >= a) {
      b = b - a;
    }
  }
  cout << b;
  return 0;
}

//Даны два натуральных числа, требуется найти их НОК (наименьшее общее кратное).
#include <iostream>
using namespace std;
int NOD(int n1, int n2) {
  int div;
  if (n1 == n2) return n1;
  int d = n1 - n2;
  if (d < 0) {
    d = -d;
    div = NOD(n1, d);
  } else
    div = NOD(n2, d);
  return div;
}
int NOK(int n1, int n2) { return n1 * n2 / NOD(n1, n2); }
int main() {
  int n1, n2;
  cin >> n1;
  cin >> n2;
  cout << NOK(n1, n2);
  cin.get();
  cin.get();
  return 0;
}

//Требуется найти наибольший общий делитель трех натуральных чисел, используя алгоритм Евклида и учитывая, что
//НОД(a,b,c)=НОД(a,НОД(b,c)).
#include <iostream>

using namespace std;

int G(int a, int b) {
  while (a != 0 && b != 0)
    if (a > b)
      a = a % b;
    else
      b = b % a;
  return a + b;
}

int main() {
  int a, b, c;
  do {
    cin >> a >> b >> c;
  } while (a < 0 || b < 0 || c < 0);

  cout << G(G(a, b), c) << endl;
}
