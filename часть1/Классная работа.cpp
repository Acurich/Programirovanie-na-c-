//Даны два целых числа A и B. Требуется проверить истинность высказывания «Каждое из чисел A и B положительное».
#include<iostream> 
using namespace std;
int main() {
  int x, y;
  cin >> x >> y;
  bool solution =  (x > 0 ) && (y > 0);
  if (solution) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}

//Даны два целых числа A и B. Требуется проверить истинность высказывания «Каждое из чисел A и B нечетное».
#include <iostream>
using namespace std;
int main () {
int a,b;
cin>>a>>b;
if(a%2!=0 && b%2!=0) {
cout << "YES";
}
else {
cout << "NO";
}
  return 0;
}

//Даны три целых числа A, B и C. Требуется проверить истинность высказывания «Хотя бы одно из чисел A, B и C положительное».
#include <iostream>
using namespace std;
int main () {
int a, b, c;
cin >> a >> b >> c;
if ((a > 0) or (b > 0) or (c > 0))
  cout << "YES";
  else cout << "NO";
}

//Дано натуральное двузначное число n. Определите, входит ли в него цифра a.
#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if ((a / 10) == b or (a % 10) == b)
    cout << "YES";
  else cout << "NO";
}
