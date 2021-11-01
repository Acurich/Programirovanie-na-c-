//Дана последовательность из N целых чисел и натуральное число K. Выведите первые K минимальных элементов этого массива в порядке их возрастания.
#include <iostream>
using namespace std;

int main() {
  int n, a[100], tmp = 0, k, min = 0;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  cin >> k;
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < n - 1; i++) {
      if (a[i] > a[i + 1]) {
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
      }
    }
  }

  for (int i = 0; i < k; i++) {
    cout << a[i] << " ";
  }

  return 0;
}

//Определите, сколько обменов сделает алгоритм пузырьковой сортировки по возрастанию для данного массива.
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n];
  int a = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      if (arr[j - 1] > arr[j]) {
        swap(arr[j - 1], arr[j]);
        a++;
      }
    }
  }
  cout << a;
  return 0;
}

//Дан массив из n элементов. Необходимо найти максимальное и минимальное значение элементов массива.
#include <iostream>
using namespace std;
int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max = a[0], min = a[0];
  for (int i = 0; i < n; i++)
    if (a[i] > max)
      max = a[i];
    else if (a[i] < min)
      min = a[i];
  cout << max << " " << min;
}

//Дан массив a из n целых чисел. Требуется определить количество различных элементов.
#include <iostream>
using namespace std;
int main() {
  int n, b = 0, x[100];
  cin >> n;

  int flag = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      if (x[i] == x[j]) flag = 1;
    }
    if (!flag) count++;
    flag = 0;
  }
  cout << count << " ";
}

//Даны два одномерных массива размеров из n и m элементов соответственно. Найдите элементы первого массива, которых нет во втором.
#include <cmath>
#include <iostream>

using namespace std;
int main() {
  int a[100], e, d;
  cin >> e;
  for (int j = 0; j < e; j++) cin >> a[j];

  int max;
  for (int i = e - 1; i > 0; i--) {
    max = 0;
    for (int j = 0; j <= i; j++)
      if (a[j] > a[max]) max = j;
    swap(a[max], a[i]);
  }

  int c[100];
  cin >> d;
  for (int j = 0; j < d; j++) cin >> c[j];

  int  cnt2 = 0;
  for (int i = 0; i < e; i++) {
    bool flag = false;
    for (int j = 0; j < d; j++) {
      if (a[i] == c[j]) flag = true;
    }
    if (!(flag)) {
      cout << a[i] <<  " ";
      
    }
  }
return 0;
}

//Дано натуральное четырехзначное число. Найдите минимальное натуральное четырехзначное число, состоящее из тех же цифр, что и заданное. Заметим, что четырехзначные числа не могут начинаться с нуля.
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int mn[4];
  for(int i = 0; i < 4; i++){
    int x= n% 10;
    mn[i] = x;
    n/=10;
  }
  int a = 10000;
  for(int i = 0; i < 4; i++){
    for (int b = 0; b < 4; b++) {
      for(int j = 0; j < 4; j++){
        for(int c = 0; c < 4; c++){
          int k = mn[i] * 1000 + mn[b] * 100 + mn[j] * 10 + mn[c];
          if(i != j and i != c and i != b and j != c and j != b and b != c and k >= 1000 and k <a) a = k;
        }
      }
    }
  }
  cout << a;
}
