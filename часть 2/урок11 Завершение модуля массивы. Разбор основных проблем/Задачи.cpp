//Дан массив из n элементов (n<100) , определите, у какого количества элементов значение и номер в массиве совпали (нумерация элементов ведется с единицы).
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[100];
  int k = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == i + 1) {
      ++k;
    }
  }
  cout << k << endl;
}

//Дано нечетное число n. Выведите квадрат размером n×n, состоящий из символов «.» и «*» разделенных пробелами. «*» должны быть расположены на диагоналях, а также на средней строке и среднем столбце, все остальное должно быть точками.
#include <iostream>
using namespace std;
int main() {
  char a[50][50];
  int size;
  cin >> size;
  for (int str = 0; str < size; str++) {
    for (int stlb = 0; stlb < size; stlb++) {
      if (stlb == str) a[str][stlb] = '*';
      else if (str + stlb == size - 1)
        a[str][stlb] = '*';
      else if (str == size / 2)
        a[str][stlb] = '*';
      else if (stlb == size / 2)
        a[str][stlb] = '*';
      else
        a[str][stlb] = '.';
    }
  }
  for (int str = 0; str < size; str++) {
    for (int stlb = 0; stlb < size; stlb++) {
      cout << a[str][stlb] << " ";
    }
    cout << endl;
  }
}

//Дан двумерный массив размера N×N, заполненный двузначными целыми числами. Требуется вывести все элементы, находящиеся выше главной диагонали.
#include <iostream>
using namespace std;
int main() {
  int n;
  int arr[500][500]; 

  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i < j) {
        cout << arr[i][j] << " ";
      }
    }
  }

}

//Вам вводятся два числа - N и M.
//Далее в N строках вам вводятся элементы двумерного массива.
//После вам вводятся числа A и B.
//Выведите сумму элементов на всех строках с A по B.
#include <iostream>
using namespace std;
int main() {
  int a[100][100];
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
      int sum = 0;
      int x, y;
      cin >> x >> y;
      for (int i = x-1; i < y; i++) {
        for (int j = 0; j < m; j++) {
          sum += a[i][j];
        }
      }
      cout << sum << " ";
    }
