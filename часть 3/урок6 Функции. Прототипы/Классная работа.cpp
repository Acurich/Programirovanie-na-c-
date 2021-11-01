//Создайте функцию void readArray(int[], int), считывающую массив заданной длины
#include <iostream>

using namespace std;
void readArray(int[], int);
void readArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
}
int main() {
    int a[100], n;
    cin >> n;
    readArray(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

//Создайте функцию void printArray(int[], int), выводящую содержимое массива через пробел.
#include <iostream>

using namespace std;
void printArray(int[], int);
void printArray(int a[], int n){
  for(int i = 0; i < n; i++){
    cout << a[i] << " " ;
  }
}
int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    printArray(a, n);
    return 0;
}

//Создайте функцию void reverseArray(int[], int), переворачивающую содержимое массива, т.е. первый элемент меняется местами с последним, второй с предпоследним и т.д.
#include <iostream>

using namespace std;
void reverseArray(int[], int);
void reverseArray(int a[], int n) {
  int b[100];
  for (int i = n - 1; i != -1; i--) b[n - i - 1] = a[i];
  for (int i = 0; i != n; i++) a[i] = b[i];
}
int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    reverseArray(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

//Создайте функцию int arrayMin(int[], int), возвращающую как результат индекс первого минимального значения массива.
#include <iostream>

using namespace std;
int arrayMin(int[], int);
int arrayMin(int a[], int n) {
  int min = 9, ind = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
      ind = i;
    }
  }
  return ind;
}
int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << arrayMin(a, n);
    return 0;
}

//Создайте функцию int arrayFind(int[], int, int), возвращающую как результат индекс первого вхождения значения, заданного последним параметром. Если такого значения нет, функция должна вернуть -1.
#include <iostream>

using namespace std;
int arrayFind(int[], int, int);
int arrayFind(int a[], int n, int x) {
  int find =0;
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      find = i;
        return find;
    }
  }
  return -1;
}
int main() {
    int a[100], n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    cout << arrayFind(a, n, x);
    return 0;
}

//Создайте функцию void arrayCopy(int[], int, int[]), копирующую все значения из первого массива во второй.
#include <iostream>

using namespace std;
void arrayCopy(int[], int, int[]);
void arrayCopy(int a[], int n, int b[]) {
  for (int i = 0; i < n; i++) {
    b[i] = a[i];
  }
}
int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int b[100];
    arrayCopy(a, n, b);
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    return 0;
}

//Создайте функцию void fillArray(int[], int, int = 0), заполняющую все элементы массива заданным значением. По умолчанию это значение равно 0.
#include <iostream>

using namespace std;
void fillArray(int a[], int size, int b = 0) {
  for (int i = 0; i < size; i++) {
    a[i] = b;
  }
}
int main() {
    int a[100], n;
    cin >> n;
    fillArray(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    fillArray(a, n, 5);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

//Создайте функцию void insertInArray(int[], int&, int position, int num), вставляющую элемент со значением num на позицию position в массиве. Все элементы массива правее добавляемого должны быть сдвинуты вправо, а размер массива должен быть соответствующим образом изменен.
#include <iostream>

using namespace std;
void insertInArray(int a[], int& n, int k, int num){
  int b[100];
  for (long i = 0; i < n+1; i++) {
    if (k == i) b[i] = num;
    else if (k < i) b[i] = a[i-1];
    else b[i] = a[i];
  }
  for(int i = 0; i < n+1; i++) {
    a[i] = b[i];
  }
  n++;
}
int main() {
    int a[100], n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x >> y;
    insertInArray(a, n, x, y);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
