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

//Один из методов криптографии заключается в измерении частоты появляения буквы в тексте. Необходимо написать программу, вычисляющую какую часть текста составляет указанная буква. Т.е. отношения числа появления в строке одной буквы к количеству букв в тексте.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int n;
char a;
float n_a, counter = 0;
string s, s_a;
cin>>n>>a;
cin>>s;
for(int i=0; i<n; i++) {
if(s[i] == a)
counter = counter + 1;
}
n_a = counter / (n*1.0);
cout << fixed << setprecision(6) << n_a << endl;
return 0;
}

//Напиши функцию bool endswith(string s, char c), которая будет проверять, заканчивается ли строка s на символ c. В качестве результата функция должна возвращать true или false.
#include <iostream>
#include <string>

using namespace std;
bool endswith(string s, char c) {
 if (s[s.size() - 1] == c) return true;
 else return false;
}
int main(){
    string s;
    char c;
    
    getline(cin, s);
    cin >> c;
    
    if(endswith(s, c))
        cout << "yes";
    else
        cout << "no";
    
    return 0;
}

//Дана строка. Найдите в этой строке второе вхождение буквы f, и выведите индекс этого вхождения. Если буква f в данной строке встречается только один раз, выведите число -1, а если не встречается ни разу, выведите число -2.
#include <iostream>
#include <string>
using namespace std;

int main() {
  string a;
  cin >> a;
  int j = 0;
  for (int i = 0; i < a.size(); ++i) {
    if (a[i] == 'f') {
      ++j;
      if (j == 2) {
        cout << i;
      }
    }
  }
  if (j == 0) {
    cout << -2;
  }
  if (j == 1) {
    cout << -1;
  }
}

//Напиши и отправь функцию int charToInt(char c), принимающую символ и конвертирующую его в соответствующее число. Например, '5' -> 5
#include <iostream>
#include <string>

using namespace std;
int charToInt(char symbol){
    int result = 0;
    result = (result * 10) + (symbol - '0');
    return result;
}
int main(){
    char c;
    cin >> c;

    cout << charToInt(c) + 1;

    return 0;
}
