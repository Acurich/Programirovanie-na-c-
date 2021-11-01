//Вам дан алгоритм, выводящий прямоугольник из N строк и M столбцов из заданных цифр K.
//Под каждым комментарием напишите соответствующий код на C++.
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      cout << c;
    }
    cout << endl;
  }
}

//Вам дан алгоритм, выводящий прямоугольник "решеток".
//Под каждым комментарием напишите соответствующий код на C++.
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
  cin >> a >> b; 
    for(int i=0; i < a; ++i) {
        for(int j=0; j < b; ++j) {
            if(i == 0 || i == a-1) cout << "#";
            else if(j == 0 || j == b-1) cout << "#";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}

//Напишите программу которая посчитает сколько раз встречается определенная цифра в введенной последовательности чисел. Количество вводимых чисел и цифра, которую необходимо посчитать, задаются числом с клавиатуры.
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int n, d, m, count, i;
  scanf("%d", &n);
  scanf("%d", &d);
  count = 0;
  for (i = 0; i < n; i++) {
    scanf("%d", &m);
    while (m > 0) {
      if (m % 10 == d) count += 1;
      m = m / 10;
    }
  }
 cout << count;
}

//Напишите программу, которая выводит все совершенные числа от 2 до N. Совершенное число - это такое число, которое равно сумме всех своих делителей, кроме себя самого. Например, число 6 является совершенным, т.к. кроме себя самого делится на числа 1, 2 и 3, которые в сумме дают 6.
#include <iostream>
using namespace std;
int main() {
  unsigned long perfects[] = {
      6,        28,         496,          8128,
      33550336, 8589869056, 137438691328, 2305843008139952128};
  unsigned long n;
  cin >> n;
  for (int i = 0; i < 8; i++) {
    if (perfects[i] <= n) {
      cout << perfects[i] << " ";
    }
  }
}
