//Вам дан фрагмент программы, в котором создается и вводится двумерный массив. Дополните эту программу таким образом, чтобы находилась сумма элементов данного массива.
#include <iostream>
using namespace std;
int main() {
    int n, m;
    int arr[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
int sum = 0;
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          sum += arr[i][j];
        }
  }
  cout << sum;
  
    return 0;
}

//Напишите программу, которая находит минимальный и максимальный элементы в матрице и их позиции. Если в матрице есть несколько одинаковых минимальных (максимальных) элементов, нужно найти индексы первого такого элемента в порядке обхода по строкам: сверху вниз, слева направо.
#include <iostream>
using namespace std;
int main() {
  int n, m;
  int arr[100][100];
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  int maxs = 0, max = 0;
  int mins = 0, min = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[maxs][max] < arr[i][j]) {
        maxs = i;
        max = j;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[mins][min] > arr[i][j]) {
        mins = i;
        min = j;
      }
    }
  }
  cout << mins + 1 << " " << min + 1 << " " << arr[mins][min] << endl;
  cout << maxs + 1 << " " << max + 1 << " " << arr[maxs][max];
  return 0;
}

//Вам даны два двумерных массива одинаковых размеров, содержащие целые числа. Постройте по ним третий массив так, что каждый его элемент равен сумме соответствующих элементов первых двух.
#include <iostream>
using namespace std;
int main() {
  int n, m;
    int a[50][50], b[50][50], c[50][50];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
    }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> c[i][j];
    }
  }
   for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      b[i][j] = a[i][j] + c[i][j];
      cout << b[i][j] << " ";
    }
    cout << endl;
   }
                                    

      return 0;
}
