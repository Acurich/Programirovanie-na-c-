//Напишите функцию void fill(vector<int> &a, int b = 0), которая заполняет вектор заданными значениями или нулем, если параметр не указан.
#include <iostream>
#include <vector>
using namespace std;
void fill(vector<int>& box, int x = 0) {
for (auto& v : box) v = x;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    fill(a, k);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    fill(a);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}

//Напишите функцию vector<int> odds(int n), которая создаст вектор, состящий из первых n натуральных нечетных чисел и вернёт его из функции.
#include <iostream>
#include <vector>
 
using namespace std;
vector<int> odds(int n) {

  vector<int> arr(n);

  int num = 1;

  for (int i = 0; i < n; i++) {

    arr[i] = num;

    num += 2;

  }

  return arr;

}


int main() {
  int n;
  cin >> n;
  vector<int> a = odds(n);
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  return 0;
}


//Напишите функцию vector<int> sum_vectors(vector<int>, vector<int>), которая складывает соответствующие элементы двух массивов одинаковой длины и возвращает как результат новый массив.



//Напишите функцию bool is_sorted(vector<int>), которая как результат работы вернет true, если массив отсортирован по неубыванию и false в ином случае.


//Напишите функцию print(vector<int> a, int size = -1), которая выводит весь вектор чисел, если size не указан и size элементов, если в функцию передается значение этого аргумента.
