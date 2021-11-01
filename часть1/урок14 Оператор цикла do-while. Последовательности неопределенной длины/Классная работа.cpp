//Вова все еще обожает писать цифры, поэтому он все еще продолжает брать числа и выписывать их цифры справа налево. Но в какой-то момент Вова задумался, а чем же число 0 хуже любого другого и для него тоже стал выписывать цифру 0.
//Напишите программу, которая делает тоже самое, только автоматически
#include <iostream>
using namespace std;
int main() {
  int number;
  cin >> number;
 do {
    cout << number % 10 << " ";
    number /= 10;
  }
  while (number > 0);
  return 0;
}

//Дана последовательность целых чисел, оканчивающаяся нулём. Необходимо найти сумму всех чисел этой последовательности. Ноль числом последовательности не является.
#include "iostream"
using namespace std;
int main() {
  short k;
  int s = 0;
  while (cin >> k, k) s += k;
  cout << s << endl;
}

//Дана последовательность целых чисел, оканчивающаяся нулём. Необходимо найти количество чисел в этой последовательности. Ноль числом последовательности не считается.
#include <iostream>

using namespace std;

int main(void) {
  int i, result = -1;
  do {
    cin >> i;
    result++;
  } while (i != 0);
  cout << result;
  system("pause");
  return 0;
}

//Дана непустая последовательность состоящая из целых чисел a1,a2,…,ak и оканчивающаяся нулем. Требуется вычислить произведение всех чисел последовательности, то есть S=a1⋅a2⋅…⋅ak. Число 0 не является членом последовательности.
#include <iostream>
using namespace std;
long long a, sum = 0;
int main() {
  cin >> a;
  sum = a;
  while (a != 0) {
    cin >> a;
    if (a != 0) sum *= a;
  }
  cout << sum;
}

//Дана последовательность целых чисел, оканчивающаяся нулём. Определите, сколько элементов этой последовательности больше предыдущего элемента. Ноль числом последовательности не считается.
#include <iostream>
using namespace std;
int main() {
  int n, max = 100000, count = 0;
  do {
    cin >> n;
    if (n && n > max) count++;
    { max = n; }
  } while (n);
  { cout << count << endl; }
  return 0;
}

//Известны оценки по информатике каждого ученика класса, состоящего из n человек. Неоходимо определить количество пятёрок.
#include <iostream>
using namespace std;
int main() {
  int i = 0, N, a, count = 0;
  cin >> N;
  while (i < N) {
    cin >> a;
    if (a == 5) count++;
    i++;
  }
  cout << count << "\n";
  system("pause");
  return 0;
}

//Дана последовательность целых чисел, оканчивающаяся числом −1. Необходимо определить, присутствует ли в последовательности хотя бы одна пара одинаковых «соседних» чисел. Число −1 членом последовательности не является.
#include <iostream>
using namespace std;
int main() {
  int a, b;
  bool yes = false;
  while (a != -1) {
    cin >> a;
    if (a == b) yes = true;
    b = a;
  }
  if (yes)
    cout << "YES";
  else
    cout << "NO";
  system("pause");
  return 0;
}

//Дана непустая последовательность целых чисел, оканчивающаяся числом 100. Необходимо определить, есть ли в последовательности число 77.
#include <iostream>
using namespace std;
int main() {
  setlocale(LC_ALL, "Russian");
  int currentNumber = 0;
  bool isNumberInSequence = false;
  while (currentNumber != 100) {
    cin >> currentNumber;
    if (currentNumber == 77) isNumberInSequence = true;
  }
  if (isNumberInSequence)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  system("pause");
  return 0;
}
