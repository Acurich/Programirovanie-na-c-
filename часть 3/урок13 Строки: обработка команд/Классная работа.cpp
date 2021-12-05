//Напишите программу-приветствие, которая запрашивает имя человека и выводит его на экране с приветствием.
#include <iostream>
using namespace std; 
 
int main()
{
    char name[256] = {0};
    cin>>name;
    cout<<"Hello, "<<name<<endl;
    return 0;
}

//Многие из вас могли заметить, что при создании учетной записи где-либо, может понадобиться ввести подтверждение пароля. Требуется это для того, чтобы при первом вводе пароля не оказалось случайных опечаток. Давайте реализуем подтверждение пароля: на вход даются две строки с паролями и необходимо проверить, одинаковые ли они.
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str1 = "";
  string str2 = "";
  cin >> str1 >> str2;
  if (str1 == str2) {
    cout << "YES";
  }
  else cout << "NO";
}

//Улучшим систему ввода подтверждения пароля: новый пароль требуется вводить до тех пор, пока не будет введен корректный пароль.
#include <iostream>
#include <string>
using namespace std;
int main() {
string pass,key="";
cin>>key>>pass;
while (key != pass){
  cout << "Wrong password! Retry again." << endl;
  cin >> pass;
}
if(pass==key)
{
cout<<"Correct!";
}

}

//Добавьте еще одно улучшение для проверки пароля: требуется посчитать, сколько раз был введен неправильный пароль.
#include <iostream>
#include <string>
using namespace std;
int main() {
  int count = 0;
string pass,key="";
cin>>key>>pass;
while (key != pass){
  cout << "Wrong password! Retry again." << endl;
  cin >> pass;
  count++;
}
if(pass==key)
{
cout<<"Correct!" << endl;
}
cout << count;
}

//Дана строка, состоящая ровно из двух слов, разделенных пробелом. Переставьте эти слова местами. Результат запишите в строку и выведите получившуюся строку.
#include <iostream>
#include <string>
 
int main()
{
    using namespace std;
    string word[2];
    
    int i;
    for (i = 0; i <= 1; i++)
    {
        cin >> word[i];
    }                     
    for (i = 1; i >= 0; i--) {
        cout << word[i] << " ";
    }
    cout << endl;
    
    return 0;
}
