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
