//Дана строка, заканчивающаяся точкой. Ваша задача — посчитать, сколько символов в строке. Строка содержит только строчные латинские буквы, пробелы и ровно одну точку в конце.
#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    int i=0,count=0;
    string s; 
    getline(cin, s);      
    while(s[i])
    {
    if(s[i]!=32&&s[i]!=46) count++;
    i++;
    } 
    cout<<count<<endl;
return 0;
}


//Напиши и отправь функцию int charToInt(char c), принимающую символ и конвертирующую его в соответствующее число.
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

//Дано предложение, оканчивающееся точкой. Требуется подсчитать количество букв в нём.


//Дана строка, начинающаяся с символа "+", хранящая некое положительное число. Напишите программу, определяющую сумму цифр данного числа.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int counter=0;
    for (int i=1;i<s.size();i++) {
        counter+=s[i]-'0';
    }
    cout <<counter;
    return 0;
}
