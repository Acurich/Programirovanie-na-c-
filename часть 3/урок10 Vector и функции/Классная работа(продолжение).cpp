//Создайте функцию void print(vector<int>), выводящую элементы вектора через пробел.
#include <iostream>
#include <vector>

using namespace std;
void print (const vector<int>& v){
  for (int i=0; i<v.size();i++){
    cout << v[i] << " ";
  }
}
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  print(a);
  return 0;
}

//Создайте функцию vector<int> read_vector(), считывающую последовательность чисел и возвращающую эту последовательность как результат работы функции.
#include <iostream>
#include <vector>
 
using namespace std;
vector<int> read_vector() {
    vector<int> v;
    int n, tmp;
    cin >> n;
    while (n--) {
        cin >> tmp;
        v.push_back(tmp);
    }
    return v;
}
int main() {
  vector<int> a = read_vector();
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  return 0;
}
