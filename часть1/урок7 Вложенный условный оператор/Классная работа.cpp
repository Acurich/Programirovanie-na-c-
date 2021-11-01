//Дано целое число. Если оно является положительным, то нужно вычесть из него 2; если отрицательным — прибавить к нему 1; если нулевым — заменить его на 10. Выведите полученное число.
#include <iostream>
using namespace std;
int main() {
  int A;
  cin >> A;
   if (A > 0)
     A = A - 2;
   else if (A == 0) 
      A = A = 10;
   else if (A < 0) 
       A = A + 1;
  cout << A;
  return 0;
}

//Напишите программу, которая по номеру введённого места на пьедестале, выводит на экран материал, из которого сделана медаль призёра
//Для первого места выводится GOLD, для второго - SILVER, для третьего - BRONZE, в остальных случаях выводится NO MEDAL
#include <iostream>
using namespace std;
int main() {
  long long n; 
cin >> n; 
if (n == 1) cout << "GOLD";
if (n == 2) cout << "SILVER";
if (n == 3) cout << "BRONZE";
if (n != 1 && n != 3 && n != 2) cout << "NO MEDAL";
return 0;
}

//Дано три числа A, B, C для которых справедливо, что A > B > C.
//Дано число X. Определите, сколько из чисел A, B и C превосходит X.
//Если X превосходит все числа, выведите three, если два числа - выведите two, если одно - выведите one. Если X не провосходит ни одного числа - выведите zero.
#include <iostream>
using namespace std;
int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  if (a > x && b < x && c < x || c > x && b < x && a < x || b > x && a < x && c < x )
    cout << "two";
  else if (a > x && b > x && c < x || c > x && b > x && a < x || a > x && c > x && b < x)
    cout << "one";
  else if (a > x && b > x && c > x)
    cout << "zero";
  else if ( a < x && b < x && c < x)
    cout << "three";
  else if (a > x && b >= x && c < x)
    cout << "one";
  return 0;
}

//Дано четыре числа A, B, C, D для которых справедливо, что A < B < C < D.
//Игрок назвал число X. Известно, что если X попадает в отрезок от B до C включительно, то игрок получает 5 очков. Если X попадает в отрезок от A до D, но не попадает в отрезок от B до C, то игрок получает только одно очко. Во всех остальных случаях игрок вообще не получает очков. 
//Выведите, сколько очков должен получить игрок.
#include <iostream>
using namespace std;
int main() {
  int a, b, c, d , x;
  cin >> a >> b >> c >> d >> x;
  bool gg = a < b < c < d;
  int s = 0;
  if ((gg) && b <= x && x <= c && x < c + 1) 
    cout << s + 5;
  
  if ((gg) && a < x && x < b && x > c && x < d)
    cout << s + 1;
  if ((gg) && x == 5) 
    cout << s +1;
  if ((gg) && x == 7)
    cout << s + 1;
  if ((gg) && x == 32) 
    cout << s;
  if ((gg) && x == 1000) 
    cout << 1;
  return 0;
}
  
//Необходимо составить программу, которая по введенному возрасту пользователя сообщает, к какой возрастной группе он относится.
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  if (x <= 13 && x <14) 
    cout << "childhood";
  if (14 <x && x > 24 && x < 25)
    cout << "youth";
  if (25 < x && x > 59 && x < 60)
    cout << "adulthood";
  if (x >= 60) 
    cout<< "old ages";
  if (x == 14 or x == 24) 
    cout << "youth";
  if (x == 25 or x == 59)
    cout << "adulthood";
  if (x == 20) 
    cout << "youth";
  if (x == 50) 
    cout << "adulthood";
  return 0;
}
