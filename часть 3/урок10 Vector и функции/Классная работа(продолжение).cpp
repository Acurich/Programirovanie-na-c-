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

//Напишите функцию vector<int> naturals(int n), которая создаст вектор, состящий из первых n натуральных чисел и вернёт его из функции.
#include <iostream>
#include <vector>
 
using namespace std;
vector<int> naturals(int n){
  vector<int> a(n);
  for ( int i =0; i < n; i++){
    a[i] = i+1;
  }
  return a;
}
int main() {
  int n;
  cin >> n;
  vector<int> a = naturals(n);
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  return 0;
}

//Реализуйте функцию long long sum(vector<int>) которая возвращает как результат сумму всех элементов вектора.
#include <iostream>
#include <vector>
using namespace std;
long long sum(vector<int>);
long long sum(vector<int> a){
  long long s = 0;
  for (int i=0; i <a.size();i++){
    s+=a[i];
  }
  return s;
}
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &i : a)
		cin >> i;
	cout << sum(a);
}

//Добавьте к предыдущей функции функцию long long sum(vector<int> a, int k), которая как результат возвращает сумму первых k элементов вектора.
#include <iostream>
#include <vector>
using namespace std;
long long sum(vector<int>);
long long sum(vector<int>, int);
long long sum(vector<int> a){
  long long s = 0;
  for (int i=0; i <a.size();i++){
    s+=a[i];
  }
  return s;
}

long long sum(vector<int> a, int k){
  long long s = 0;
  for (int i=0; i <k;i++){
    s+=a[i];
  }
  return s;
}

void p1(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i: a)
        cin >> i;
    cout << sum(a);
}
void p2(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int& i: a)
        cin >> i;
    cin >> k;
    cout << sum(a, k);
}
int main() {
	int n;
	cin >> n;
	switch (n) {
	    case 1: p1(); break;
	    case 2: p2(); break;
	}
}

//Добавьте к предыдущим функциям еще одну - long long sum(vector<int> a, int k, int m). Эта функция должна находить сумму элементов вектора с индексами из диапазона [k, m).
#include <iostream>
#include <vector>
using namespace std;
long long sum(vector<int>);
long long sum(vector<int>, int);
long long sum(vector<int>, int, int);
long long sum(vector<int> a){
  long long s = 0;
  for (int i=0; i <a.size();i++){
    s+=a[i];
  }
  return s;
}

long long sum(vector<int> a, int k){
  long long s = 0;
  for (int i=0; i <k;i++){
    s+=a[i];
  }
  return s;
}

long long sum(vector<int> a, int k, int m){
    long long s = 0;
  for (int i=k; i <m;i++){
    s+=a[i];
  }
  return s;
}
void p1(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i: a)
        cin >> i;
    cout << sum(a);
}
void p2(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int& i: a)
        cin >> i;
    cin >> k;
    cout << sum(a, k);
}
void p4(){
    int n, m, k;
    cin >> n;
    vector<int> a(n);
    for (int& i: a)
        cin >> i;
    cin >> k >> m;
    cout << sum(a, k, m);
}
int main() {
	int n;
	cin >> n;
	switch (n) {
	    case 1: p1(); break;
	    case 2: p2(); break;
	    case 4: p4(); break;
	}
}
