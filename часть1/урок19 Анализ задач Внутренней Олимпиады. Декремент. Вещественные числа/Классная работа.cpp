//Составьте программу вычисления стоимости поездки на дачу и обратно. Исходными данными являются: S — расстояние до дачи в километрах; B — количество бензина в литрах, которое потребляет автомобиль на 100 километров пробега; C — цена одного литра бензина.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int s;
  double petrol, sprice;
  cin >> s >> petrol >> sprice;
  double km = petrol/ 100.0;
  double price = km * sprice * s * 2;
  cout << fixed << setprecision(6) << price;
}

//Необходимо составить программу вычисления стоимости покупки с учетом скидки. Скидка в 3% предоставляется в том случае, если сумма покупки больше 500 рублей, в 5% — если сумма больше 1 000 рублей.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int  x, a;
  cin >> x;
  if (x > 500 and x <= 1000) {
   a = x * 0.97;
     cout << fixed << setprecision(0);
    cout << a;
  } if (x > 1000) {
    a = x * 0.95;
     cout << fixed << setprecision(0);
    cout << a;
    }
  if (x <= 500) cout << x;
}

//Известны координаты двух точек на плоскости — (x1, y1) и (x2, y2). Найдите расстояние между ними.
#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;
int main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  double X = x2 - x1;
  double Y = y2 - y1;
  double answ = sqrt(X * X + Y * Y);
  cout << fixed << setprecision(6) << answ;
}
