//Даны два числа a и b. Требуется увеличить первое число на 1, а второе — на 2, если a=b.
#include <iostream>
using namespace std;
int main()
{
int a,b;
cin >> a >> b;
if( a == b )
cout << a + 1 <<" "<< b + 2 << endl;
else
cout << a <<" "<< b << endl;
}

//Даны два числа. Выведите порядковый номер меньшего из них.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a;
    cin>>b;
  if (a < b)   
    cout << 1;
  else          
    cout << 2;
        return 0;
}
//В журнале «Мётлы» был опубликован каталог с новыми моделями мётел, и для каждой из трёх новинок была указана скорость в километрах в час. Помогите Гарри определить, на сколько самая быстрая метла быстрее, чем самая медленная.
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a < c and b > c)
    cout << b - a;
  if (b > c and a > b) 
    cout << a - c;
  if (a > c and b > a) 
    cout << b - c;
  if (a == b and a == c) 
    cout << a - b;
  if (a > b and b == c) 
    cout << a - b;
  return 0;
}
