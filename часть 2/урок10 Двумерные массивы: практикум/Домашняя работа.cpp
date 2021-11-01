//Дано число n. Создайте массив размером n×n и заполните его по следующему правилу. На главной диагонали должны быть записаны числа 0. На двух диагоналях, прилегающих к главной, числа 1. На следующих двух диагоналях числа 2, и т.д.
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = (int) abs(i - j);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
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
      for (int i = 0; i < n; i++) {
        for (int j = x; j < y; j++) {
          sum += a[i][j];
        }
      }
      cout << sum << " ";
    }

//Дан двумерный массив размером n×n. Требуется составить программу, которая меняет местами элементы симметрично относительно побочной диагонали.
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N;
    
    cin >> N;
    int** arr = new int*[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[N];
    }
    ;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            swap(arr[i][j], arr[N-j-1][N-i-1]);
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    system("pause");
    return 0;
}
