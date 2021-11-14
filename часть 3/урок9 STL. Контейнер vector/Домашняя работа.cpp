//Создайте массив из N элементов, заполненный первыми N членами геометрической прогрессии с заданным первым членом прогрессии A и её знаменателем Z.
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
int n, a,z;
  cin>>n>>a>>z;
  vector<int> arr(n);
  arr[0]=a;
  for (int i = 1; i < arr.size(); i++)
    arr[i]=arr[i-1]*z;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}

//Дана последовательность целых чисел, а также два значения: X и K. Требуется записать все числа в массив, а после добавить в конец этого массива K элементов, каждый из которых равен X.
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
int n, k, x;
  cin>> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cin>>x>>k;
  arr.resize(n+k);
  for (int i = 0; i < arr.size(); i++)
    if(i>=n) arr[i] =x;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
