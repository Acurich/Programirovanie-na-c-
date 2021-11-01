//Создайте массив из N элементов, заполненный первыми N членами арифметической прогрессии с заданным первым членом прогрессии A и её разностью P.
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a, p, n;
  cin >> n >> a>> p;
  vector<int> arr(n);
  arr[0] = a;
  for(int i = 1; i < arr.size(); i++){
    arr[i] = arr[i-1] +p;
  }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}

//Дано натуральное число N, не превосходящее 106. Ваша задача - заполнить вектор arr цифрами этого числа в порядке справа налево.
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int> arr;
   int i = 0;
   while (N != 0){
     arr.resize(i+1);
     arr[i] = N % 10;
     N /=10;
     i++;
   }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}

//Дан вектор из N элементов. Вывести на первой строке все положительные элементы, а на второй - все отрицательные.
#include <iostream>
#include <vector>
using namespace std;

int main() {

int n; cin >> n;
vector<float> arr(n);
for (int i = 0; i<n; i++) cin >> arr[i];

for (int i = 0; i < arr.size(); i++) {
if (arr[i] > 0) {
cout << arr[i] << " ";
}
}

cout << endl;

for (int i = 0; i < arr.size(); i++) {
if (arr[i] < 0) {
cout << arr[i] << " ";
}
}
}

//Дана последовательность целых чисел и значение K. Требуется записать все числа в массив, а после удалить последние K элементов из этого массива.
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i <n; i++){
      cin >> arr[i];
    }
    int k;
    cin >> k;
    arr.resize(n-k);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}

//Дана последовательность целых чисел и значение K. Требуется удалить из этого массива все элементы, равные заданному значению K.
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i <arr.size(); i++){
      cin >> arr[i];
    }
    int k;
    cin >> k;
    for(int i = 0; i <arr.size(); i++){
        if (arr[i] == k){
                arr.erase(arr.begin() + i);
                vector<int>(arr).swap(arr);
        }
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
