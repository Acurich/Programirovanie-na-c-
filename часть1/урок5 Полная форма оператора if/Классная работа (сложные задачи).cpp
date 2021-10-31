//Дано трехзначное число. Напишите программу определения, является ли оно палиндромом, т.е. числом, десятичная запись которого читается одинаково слева направо и справа налево.
#include <iostream>
using namespace std;
int main () {
  int a;
  cin >> a;
  int b = a % 10;
  int c = a / 100;
  if ( b == c ) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}

//Дано целое число k. Определите, будет ли k-й день года выходным (суббота или воскресенье), если 1 января — понедельник.
#include <iostream>
using namespace std;
int main() {
setlocale(0, "");
int k;

cin >> k;
if ((k >365) || (k <1))
cout << "ERROR"<< endl;
else
{

int r1;
r1 = k - 1;
int r2;
r2 = r1 % 7;
int r3;
r3 = r2 + 1;
{
if (r3 <= 5)
cout << "NO" << endl;
else cout << "YES" << endl;
}
}

system("pause");
}

//В доме несколько подъездов. В каждом подъезде одинаковое количество квартир. Квартиры нумеруются подряд, начиная с единицы. Может ли в некотором подъезде первая квартира иметь номер x, а последняя — номер y?
#include <iostream>
using namespace std;
int main () {
  int x, y;
  cin >> x >> y;
  if ((x - 1) % (y - (x - 1)) == 0) {
    cout << "YES";
  }
    else {
      cout << "NO";
    }
      return 0;
 }
