//Вова обожает писать цифры. Его страсть - взять число, и что-нибудь сделать с его цифрами. Поэтому, каждое утро он начинает с того, что пишет какое-нибудь целое неотрицательное число и выписывает все его цифры справа налево через пробелы.
#include <iostream>
using namespace std;
int main() {
  int number = 0;
  cin >> number;

  while (number) {
    cout << number % 10 << " ";
    number /= 10;
  }
  return 0;
}

//Дано натуральное число. Необходимо подсчитать количество его цифр.
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  cout << (x == 0 ? 1 : int(log10(x) + 1));
  return 0;
}

//Что может быть прекраснее больших цифр и больших чисел? Ничего.
//Напишите программу, которая находит самую большую цифру в числе.
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  int max = x % 10;
  while (x > 0) {
    if (x % 10 > max) max = x % 10;
    x /= 10;
  }
  cout << max << endl;
}

//Дано натуральное число n. Необходимо определить, есть ли в нём цифра 3.
#include <iostream>
using namespace std;
int main() {
  int a = 0, n, r;
  cin >> n;
  do {
    r = n % 10;
    if (r == 3) {
      cout << "YES";
      a = 1;
      n = 0;
    }
    n = n / 10;
  } while (n >= 1);
  if (a != 1) cout << "NO";
  system("pause");
  return 0;
}
