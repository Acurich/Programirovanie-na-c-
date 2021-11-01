//На вход программы подается 10 чисел. Выведите в столбик для каждого из них число, равное удвоенному квадрату первоначального числа.
#include <iostream>
using namespace std;
int main(){
 for (int i = 0; i < 10; i++){
   int x;
   cin >> x;
   cout << x*x*2 << endl;
 }
  return 0;
}

//Дано 4 числа: a,b,c,d. Найдите разность между суммой всех чисел в интервале [a;b] и суммой всех чисел в интервале [c;d].
#include <iostream> 
using namespace std; 
int main() { 
 int a, a1, b, b1, sum, sum1, razn; 
 cin >> a>>a1>>b>>b1; 
 sum=0; 
 sum1=0; 
 for (int i = a; i <= a1; i++) { 
 sum+=i; 
 } 
 for (int c = b;c <= b1; c++) { 
 sum1+=c; 
 } 
 razn=sum-sum1; 
 cout<<razn; 
 system("pause"); 
 return 0; 
}

//Вычислите значение 2N для заданного N.
#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int power = 1;
  for (int i = 0; i < N; i++) {
    power *= 2;
  }
  cout << power;
}
