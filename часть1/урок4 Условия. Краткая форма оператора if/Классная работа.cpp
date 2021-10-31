//Дано целое число a. Требуется вывести модуль этого числа.
#include <iostream>
using namespace std;
int main() {
int  x;
cin >> x;
 if (x < 0) {
  x *= -1;
}
  cout << x;
  return 0;
}

//Дано целое число a. Требуется прибавить к нему 1, если оно является положительным, и не изменять его в противном случае.
#include <iostream>
using namespace std;
int main() { 
int a;
cin >> a;
 if (a > 0) {
    a += 1;
 }
  cout << a;
}


//Вычислите значение функции:
//f(x)=(x2+5,x−8,при x>3;при x≤3.)
#include <iostream>
using namespace std;
int main() { 
int x;
cin >> x;
 if (x > 3) {
   cout << (x * x) + 5; 
}
 if (x <= 3) {
   cout << x - 8;
  }
}

//Даны три числа — A, B, C. Требуется возвести положительные числа в квадрат, а отрицательные оставить без изменений и вывести числа в том же порядке.
#include <iostream>
using namespace std;
int main(){ 
long long  x, y, z, a, d, f;
cin >> x >> y >> z;
  if (x > 0) {
     x = x * x;
 }
  if (y > 0) {
    y = y * y;
 }
  if (z > 0) {
    z = z * z;
  }
  cout << x << " " << y << " " << z; 
}

//Даны два числа. Выведите наибольшее из них. Если числа равны, выведите любое из них.
#include <iostream>
using namespace std;
int main() { 
int x, y, max;
cin >> x >> y;
  max = x;
 if (y > max) {
  max = y;
 }
  cout << max;  
}
//Дано два целых числа - a, b. Требуется вывести наименьшее из них.
#include <iostream>
using namespace std;
int main() { 
int x, y, min;
cin >> x >> y;
  min = x;
 if (y < min) {
  min = y;
 }
  cout << min; 
}

//Напишите программу, которая считает три числа и большее из них уменьшит на 5.
#include <iostream>
using namespace std;
int main() { 
int a, b, c, max;
cin >> a >> b >> c;
  max = a;
 if (b > max) {
  max = b;
 }
   if (c > max) {
  max = c;
 }
   if (a == max) {
     a -= 5;
 }
   if (b == max) {
      b -= 5;
 } 
   if (c == max) {
      c -= 5;
 } 
 cout << a << " " << b << " " << c;
  return 0;
}

//Дано три целых числа. Необходимо найти разность наибольшего и наименьшего из них.
#include <iostream>
using namespace std;
int main() { 
int a, b, c;
cin >> a >> b >> c;
  if (a > b and b > c)
   cout << a - c;
  if (b > a and a > c)
    cout << b - c;
  if (a > c and c > b)
    cout << a - b;
  if (b > c and c > a)
    cout << b - a;
  if (c > a and a > b)
    cout << c - b;
  if (c > b and b > a)
    cout << c - a;
  if (a == b and b < c)
    cout << c - b;
}
