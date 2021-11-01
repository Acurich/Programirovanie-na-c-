//Дан двумерный массив размера N×N. Требуется вывести на экран все элементы его главной диагонали, начиная с элемента, расположенного в левом верхнем углу.
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
      if (i == j) 
        cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

//Дан двумерный массив размера N×N. Требуется вывести на экран все элементы его побочной диагонали, начиная с элемента, расположенного в левом нижнем углу
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
        cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}

//Дано число n. Создайте массив размером n×n и заполните его по следующему правилу:
//Числа на диагонали, идущей из правого верхнего в левый нижний угол равны 1.
//Числа, стоящие выше этой диагонали, равны 0.
//Числа, стоящие ниже этой диагонали, равны 2.
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    do
    {
    cin >>n;
     if (n<1 || n>100) cout <<"1<=n<=100 !!! Repeat please...\n";
    }
    while (n<1 || n>100);
    
      int **a = new int*[n];
    for (int i = 0; i < n; i++)
         a[i]=new int[n];  
    
    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < n; j++)
    {
    if (i<n-1-j) a[i][j]=0;
    else if (i>n-1-j) a[i][j]=2;
    else a[i][j]=1;
      cout <<a[i][j]<<" ";
    }
    cout <<endl;
    }
    for (int i = 0; i < n; i++)
    delete [] a[i];
    delete [] a;
system("pause");
return 0;
}

//Дан двумерный массив размера N×N. Требуется найти максимальный элемент побочной диагонали квадратного массива
#include <iostream>
using namespace std;
int main() {
  int n;
  int arr[500][500]; 
  int  max = -999999999;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j == n - 1 and arr[i][j] > max) {
        max = arr[i][j];
      }
    }
  }
  cout << max;
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
