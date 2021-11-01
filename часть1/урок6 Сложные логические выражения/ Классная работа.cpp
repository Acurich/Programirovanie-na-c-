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

//Вовочка, который любит постоянство, считает хорошими двузначные числа в которых или обе цифры четные или обе нечетные. Дано двузначное число, определите, является ли оно хорошим по мнению Вовочки, который любит постоянство.
#include <iostream> 
using namespace std;
int main (){
  int N;
  cin >> N;
 int dec = N /10;
 int ones = N % 10;
  bool dec_check = ((dec % 2) ==0);
  bool ones_check = ((ones % 2) ==0);
  if ((dec_check && ones_check) ||
      ((!dec_check) && (! ones_check))) {
    cout << "LIKE\n";
  }
  else {
    cout << "DISLIKE\n";
  }
}
