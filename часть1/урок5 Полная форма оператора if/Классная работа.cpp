//Дано двузначное число. Определить, заканчивается ли число цифрой 5?
#include <iostream>
using namespace std;
int main () {
  int a;
  cin >> a;
  a = a % 10;
  if (a == 5) {
  cout << "YES";
  } 
  else {
    cout << "NO";
  }
  return 0;
}

//Ученые царства-государства изучают редкий организм-бактерию. Организм-бактерия содержит ядрышки, от количества которых зависит сколько новых ядрышек произведет организм-бактерия. Если ядрышек было четное число, то организм-бактерия произведет 5 новых ядрышек. А если ядрышек было нечетное число, то организм-бактерия произведет целых 11 ядрышек. Известно, что организм-бактерия содержал N ядрышек. Определите, сколько ядрышек будет содержать организм-бактерия когда закончит производство новых ядрышек.
#include <iostream>
using namespace std;
int main () { 
  int n, k; 
  cin >> n;
  if (n % 2 ==0) {
    k = n + 5;
  }
  else {
    k = n + 11;
  }
  cout << k;
  return 0;
}

//Дано двузначное число. Определить, что больше: цифра его десятков или цифра единиц?
#include <iostream> 
using  namespace  std;
int main () {
  int a, c1, c2;
  cin >> a;
  c1 = a / 10;
  c2 = a % 10;
  if (c1 >= c2) {
    cout << "dec";
  }
  else { 
    cout << "one";
  }
}

//Однажды Сладкоежка пришел в магазин своей мечты: Сладкое королевство. Чего там только не было! И пирожные, и мороженое, и печенье, и конфеты, и вафельки! Но наш Сладкоежка точно знал, что ему нужно для счастья сегодня: либо D упаковок вкуснейшего шоколадного драже, либо коробка вкуснейших шоколадок с мармеладками. Только вот беда: наш сладкоежка совсем не умеет рассчитывать стоимость покупки, а купить нужно самое дешевое, чтобы завтра прийти снова за сладостями.
//Зная цену одной упаковки драже (39 рублей) и одной коробки шоколадок (2376 рублей), помогите определить, что же будет дешевле купить: D пачек драже или коробку шоколадок?
#include <iostream>
using namespace std;
int main() {
  int a;
  cin >> a;
  int b = 39;
  int c = 2376;
  if (a <= b) {
    cout << "1";
  }
  if (a > b and c < a) {
    cout << "2";
  } 
  if ( a > b and a > 60) {
    cout <<"2";
  }
  if ( a > b and a <= 60) {
    cout << "1";
  }
}

//Требуется написать программу, которая определяет и выводит сумму только положительных из трёх данных чисел a, b и c.
#include <iostream>
using namespace std;
int main () { 
  int a, b, c;
  cin >> a >> b >> c;
  int sum = 0;
  if (a > 0) {
    sum = sum + a;
  }
  if (b > 0) {
    sum = sum + b;
  }
  if (c > 0) {
    sum = sum + c;
  }
  cout << sum;
  return 0;
}

//Даны три числа. Требуется найти сумму двух наибольших из них.
#include <iostream> 
using namespace std;
int main () { 
  long long a, b, c;
  cin >> a >> b >> c;
  if (a > b and  b > c)
    cout << a + b;
  if (a > c and c > b)
    cout << a + c;
  if (b > c and c  > a)
    cout << b + c;
  if (c > a and a > b)
    cout << c + a;
  if (a == c and b == c)
    cout << a + c;
  if ( a > b and a == c)
    cout << a + c;
  if (a > c and a == b)
    cout << a + b;
  if (b > a and b == c)
    cout << b + c;
  if (b > a and c > b)
    cout << b + c;
  return 0;
}

//Дано четыре натуральных числа. Андрею необходимо определить, на сколько сумма этих чисел (не считая минимума!) превосходит минимальное из них. Помогите ему!
#include <iostream>
using namespace std;
int main () {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a > b and b > c and c > d){
    cout << (a + b + c) - d;
  }
  if (b > d and d > a and a > c) {
    cout << (a + b + d) - c;
  }
  if (d > c and c > b and b > a) {
    cout << (d + c + b) - a;
  }
  if (a == b and c == d and a < d){
    cout << (b + c + d) - a;
  }
  if ( a < b and a > c and c > d) {
    cout << (a + b + c) - d;
  }
  if ( d > b and b > a and a > d) { 
    cout << (a + b + d) - c;
  }
  if (d > c and c > a and a > b) {
    cout << (a + c + d) - b;
  }
  if (d > b and b > a and a > c) {
    cout <<  (a + b + d) - c;
  }
  if (c > a and a > d and d > b) {
    cout << (a + c + d) - b;
  }
  if (b > c and c > d and d > a) {
    cout << ( b + c + d) - a;
  }
  if (c > d and d > a and a > b) {  
    cout << (a + c + d) - b;
  }
  return 0;
}
