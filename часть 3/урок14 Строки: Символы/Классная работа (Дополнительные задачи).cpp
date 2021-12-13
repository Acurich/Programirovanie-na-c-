//Для того чтобы выходить в Интернет, каждому компьютеру присваивается так называемый IP-адрес. Он состоит из четырех целых чисел в диапазоне от 0 до 255, разделенных точками. В следующих трех строках показаны три правильных IP-адреса
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ip[16];
    if(s[0] == '.' || s[s.size() - 1] == '.'){
        cout << 0;
        return 0;
    }
    if(s.find("..") + 1){
        cout << 0;
        return 0;
    }
    for(int i = 0; i < s.size(); ++i)
        ip[i] = s[i];
    int result = 1;
    char *pch = strtok(ip, ".");
    while (pch != NULL)
    {
        if(stoi(pch) < 0 || stoi(pch) > 255){
            result = 0;
            break;
        }
        pch = strtok(NULL, ".");
    }
    cout << result << endl;
    return 0;
}

//Рассмотрим последовательность, состоящую из круглых, квадратных и фигурных скобок. Программа дожна определить, является ли данная скобочная последовательность правильной.
#include <iostream>
#include <string>
#include <vector>
 
inline bool is_begin(const char c)
{
    return 
      c=='('
    ||c=='{'
    ||c=='[';
}
 
inline bool is_true_braket(const char beg, const char end){
    return (beg == '(' && end == ')')||
        (beg == '{' && end == '}')||
        (beg == '[' && end == ']');
}
 
int main()
{
   using namespace std;
   string s;
   cin>>s;
   vector<int> braket_begins; braket_begins.reserve(s.length());
   bool good = true;
   for (size_t i = 0 ; good && i< s.length(); ++i){
        if (is_begin(s[i])){
            braket_begins.push_back(i);
        }   
        else{
            if (braket_begins.size() && is_true_braket(s[braket_begins.back()],s[i]))
                braket_begins.pop_back();
            else{
                good = false;
            }
        }
    }
    good = good&&!braket_begins.size();
    cout<<(good?"yes":"no");
}
