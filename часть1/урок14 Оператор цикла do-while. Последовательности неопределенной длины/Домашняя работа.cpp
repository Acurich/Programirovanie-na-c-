//Tecт
№1 Ответ:нет
№2 Ответ:да
№3 Ответ:6
№4 Ответ:0
№5 Ответ:4
//Проверьте, есть ли среди данных N чисел нули.
#include <iostream>
using namespace std;
int main() {
int x, n;
cin >> n;
bool zeroExist = false;
for (int i = 1; i <= n; i++) {
  cin >> x;
  if (x == 0) {
    zeroExist = true;
    break;
  }
}
if (zeroExist)
  cout << "YES";
else
  cout << "NO";
}

//Дана непустая последовательность целых чисел, оканчивающаяся отрицательным числом. Необходимо определить, равны ли между собой все элементы последовательности. Отрицательное число членом последовательности не является.
#include <bits/stdc++.h>
using namespace std;
int main() {
  bool eq = true;
  int x, y;
  cin >> x;
  while (true) {
    cin >> y;
    if (y < 0) break;
    if (y != x) {
      eq = false;
      break;
    }
    x = y;
  }
  cout << (eq ? "YES" : "NO") << endl;
  return 0;
}

//Дано натуральное число n. Необходимо определить, сколько раз в этом числе встречается цифра k.
#include <iostream>
using namespace std;
 
int main() {
    int n, k, skolko = 0;
    cin >> n >> k;
    while(n) {
        if(n%10 == k)
            skolko++;
        n /= 10;
    }
    cout << skolko << endl;
}
//С клавиатуры вводится целое число N. Найти:
//его максимальную и минимальную цифру;
//номер в числе первой максимальной цифры;
//сколько раз в числе встречается его минимальная цифра.
#include <iostream>
using namespace std;
int main() {
  unsigned x;
  unsigned result = 0;
  char d;
  int md = 10;
  while (x) {
    d = x % 10;
    if (md == d) {
      result++;
    }
    if (md > d) {
      md = d;
      result = 1;
    }
    x /= 10;
  }
  return result;
}
