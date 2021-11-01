//Ваша задача — заполнить двумерный массив из N строк и N столбцов следующим образом: массив должен содержать все целые числа от 1 до N×N так, чтобы они шли по порядку при чтении слева направо сверху вниз.
#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[100][100];
    cin >> n;
int f=1;
for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    arr[i][j] = f;
    f++;
  }
}
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//Дан двумерный массив размера N×N. Требуется вывести на экран все элементы его побочной диагонали, начиная с элемента, расположенного в правом верхнем углу.
#include <iostream>
using namespace std;
int main() {
  int n; 
  int arr[500][500];
  cin >> n;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if (i + j== n -1) 
        cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

//Поле шахматной доски определяется парой натуральных чисел, каждое из которых не превосходит восьми: первое число — номер вертикали (при счете слева направо), второе — номер горизонтали (при счете снизу вверх). Определите, являются ли поля (a,b) и (c,d) полями одного цвета.
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    //Сумма индексов четная –белые клетки, нечетная –черные
    cin >> a >> b >> c >> d;
    if ((a + b + c + d) % 2 == 0) {
        cout << "YES";
    }
    else cout << "NO";
}

//Дан двумерный массив размера N×N. Требуется найти минимальный элемент главной диагонали квадратного массива.
#include <iostream>
using namespace std;
int main() {
  int n;
  int arr[500][500]; 
  int  max = 501;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i = j and arr[i][j] < max) {
        max = arr[i][j];
      }
    }
  }
  cout << max;
}

//Дан двумерный массив размера N×N, заполненный двузначными целыми числами. Требуется вывести все элементы, находящиеся ниже побочной диагонали.
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
      if (i + j >  n-1) {
          cout << arr[i][j] << " ";
      }
    }
  }
}
