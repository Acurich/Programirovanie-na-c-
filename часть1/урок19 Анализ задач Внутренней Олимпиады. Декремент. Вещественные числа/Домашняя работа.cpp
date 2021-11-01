//Вычислите площадь круга по его радиусу по формуле S=3.14⋅r2. Использование более точного значения π не допускается.
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  double R, S;
  cin >> R;
  S = 3.14 * R * R;
  cout << fixed << setprecision(6) << S;
  return 0;
}
