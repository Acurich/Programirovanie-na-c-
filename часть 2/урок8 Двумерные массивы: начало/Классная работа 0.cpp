//Вам дан фрагмент программы, в котором создается двумерный массив и выводится на экран. Дополните эту программу таким образом, чтобы элементы в каждой строке были равны индексу этой строки.
#include <iostream>
using namespace std;
int main() {
    int n, m;
    int arr[100][100];
    cin >> n >> m;
for(int i = 0; i < n; i++)
  for(int j =0; j < m; j++)
    arr[i][j] = i;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//Вам дан фрагмент программы, в котором создается двумерный массив и выводится на экран. Дополните эту программу таким образом, чтобы элементы в каждой строке были равны индексу столбца этого элемента.
#include <iostream>
using namespace std;
int main() {
    int n, m;
    int arr[100][100];
    cin >> n >> m;
for (int i = 0; i < n; i++)
  for (int j = 0; j < m; j++) 
    for(int stolb = 0; stolb <= 2; stolb++)
      arr[i][j] = j;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//Вам дан фрагмент программы, в котором создается двумерный массив и выводится на экран. Дополните эту программу таким образом, чтобы массив содержал все целые числа от 1 до N x M. Причем первая строка должна состоять из упорядоченной последовательности чисел от 1 до M, следующая - упорядоченная последовательность, начинающаяся с M + 1 и так далее.
#include <iostream>
using namespace std;
int main() {
    int n, m;
    int arr[100][100];
    cin >> n >> m;
int f=1;
for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++) {
    arr[i][j] = f;
    f++;
  }
}
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//Вам дан фрагмент программы, в котором создается двумерный массив и выводится на экран. Дополните эту программу таким образом, чтобы на пересечении строки с индексом i и столбца с индексом j хранилось значение, равное произведению индексов этого элемента массива.
#include <iostream>
using namespace std;
int main() {
    int n, m;
    int arr[100][100];
    cin >> n >> m;
for(int i = 0; i < n; i++){
  for(int j = 0; j < m; j++) {
    arr[i][j] = i * j;
  }
}
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//Ваша задача — заполнить двумерный массив из N строк и N столбцов следующим образом: в четных строках массива должны расположиться единицы, а в нечетных - нули.
#include <iostream>
using namespace std;
int main() {
  int n;
  int arr[100][100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i % 2 == 0) arr[i][j] = 0;
      if (i % 2 != 0) arr[i][j] = 1;
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
