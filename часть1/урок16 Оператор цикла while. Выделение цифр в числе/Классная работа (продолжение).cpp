//Известна масса каждого из N предметов, загружаемых в автомобиль. Определите суммарную массу груза.
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int mass[n], sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> mass[i];
  }
  for (int i = 0; i < n; i++) {
    sum += mass[i];
  }
  cout << sum << endl;
  return 0;
}

//Дано натуральное число X, большее единицы. Требуется найти для этого числа наименьший его делитель, отличный от 1.
#include <iostream>
using namespace std;
int main() {
  int i = 2, n;
  cin >> n;
  while (i <= n) {
    if (n % i == 0) {
      cout << i;
      break;
    }
    i++;
  }
  return 0;
}

//В классе учится n учеников. Известен рост каждого из них в сантиметрах. Рост мальчиков по условию задан отрицательными числами. Определите средний рост мальчиков и средний рост девочек.
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int n = 0, currValue = 0, bSum = 0, bCount = 0, gSum = 0, gCount = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> currValue;
    if (currValue < 0) {
      bSum += currValue;
      bCount++;
    } else if (currValue > 0) {
      gSum += currValue;
      gCount++;
    }
  }
  cout << abs(bSum) / bCount << " " << gSum / gCount << endl;
  system("pause");
  return 0;
}

//Натуральное число называется совершенным, если оно равно сумме своих делителей, включая 1 и, естественно, исключая это самое число. Например, число 6 — совершенное (6=1+2+3). Дано натуральное число n. Необходимо выяснить, является ли оно совершенным.
#include <iostream>
using namespace std;
int main() {
  long double N;
  cin >> N;
  long double sum = 0;
  for (unsigned long int i = 1; i < N; i++)
    if (N / i == int(N / i)) sum += i;
  if (sum == N)
    cout << "YES";
  else
    cout << "NO";
  system("Pause");
  return 0;
}
