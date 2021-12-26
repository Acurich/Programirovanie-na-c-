//Напиши функцию bool startswith(string s, char c), которая будет проверять, начинается ли строка s с символа c. В качестве результата функция должна возвращать true или false.
#include <iostream>
#include <string>
using namespace std;
bool startswith(string s, char c){
  if (s.front() == c){
    return true;
  }
  else return false;
}
int main(){
    string s;
    char c;
    
    getline(cin, s);
    cin >> c;
    
    if(startswith(s, c))
        cout << "yes";
    else
        cout << "no";
    
    return 0;
}

//Вам дана строка S, состоящая из строчных латинских букв. Ваша задача — удалить из этой строки последнюю из букв «l», если такая буква есть в строке, и вывести изменённую строку. Латинская строчная буква «l» имеет ASCII-код 108. Если строка не содержит такую букву, выведите исходную строку, ничего не удаляя.
#include <iostream>
#include <string>

std::string& remove_end(std::string& s, char c) {
  std::string::size_type i = s.rfind(c);
  if (i != std::string::npos) s.erase(s.begin() + i);
  return s;
}

int main(void) {
  std::string s;
  std::cin >> s;
  std::cout << remove_end(s, 'l') << std::endl;
  std::cin.get();
  return 0;
}

//Дано предложение. Определите наибольшее количество идущих подряд пробелов
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string str;
    int k, max;
    getline(cin, str);
    max = k = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isblank(str[i]))
            k++;
        else
            k = 0;
        if (k > max)
            max = k;
    }
    cout << max << "\n";
    system("pause");
    return 0;
}
