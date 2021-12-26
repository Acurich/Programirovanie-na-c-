//Дана строка S, состоящая из строчных латинских букв. Ваша задача — определить, совпадают ли первый и последний символы этой строки.
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s[s.size() - 1] == s[0])
    cout << "YES";
  else
    cout << "NO";
  return 0;
}

//Вам дана строка S, содержащая только строчные латинские буквы. Ваша задача — заменить в ней все буквы «e» на «i».
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
 string s;
 int k = 0;
 getline(cin, s);
 for (int i = 0; i < s.size(); i++) {
  if (s[i] == 'e') {
   s[i] = 'i';
  }
 }
 cout << s;
 system("pause");
 return 0;
}

//
