//Дана последовательность чисел, оканчивающаяся нулем и число k. Ноль числом последовательности не является. Выведите все числа этой последовательности, которые делятся на k.
#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector <int> vec(1);
  int x;
  cin >> x;
  while (x != 0) {
    vec.push_back(x);
    cin >> x;
  }
  int k; 
  cin >> k;
  for (int i = 1; i < vec.size(); i++){
    if ( vec[i] % k == 0) 
      cout << vec[i] << " ";
  
}
}

//Напишите программу, которая для двух векторов поменяет значения между ними местами.
#include <iostream>
#include <vector>
 
using namespace std;

int main() {
int n1, n2;
  cin>> n1;
  vector <int> a(n1);
  for (int i = 0; i <n1; i++){
    cin >> a[i];
  }
  cin >> n2;
  vector <int> b(n2);
  for (int i = 0; i < n2; i++) {
    cin >> b[i] ;
  }
  swap(a,b);
    
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << endl;
  for (int i = 0; i < b.size(); i++)
    cout << b[i] << " ";
  return 0;
}
