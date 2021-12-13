//Дано предложение, оканчивающееся точкой. Требуется подсчитать количество цифр в нём.
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int c=0;
    do {
        cin >> ch;
        if(isdigit(ch)) {
            c++;
        }
    }while(ch!='.');
    cout << c;
    return 0;
}

//Для нового сервиса «Яндекс.Литература» требуется написать систему обработки предложений для поиска гласных букв.
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int counter=0;
    do{
        cin >> ch;
        if ((ch=='A')||(ch=='a')||(ch=='E')||(ch=='e')||(ch=='I')||(ch=='i')||(ch=='O')||(ch=='o')||(ch=='U')||(ch=='u')||(ch=='Y')||(ch=='y')){
            counter++;
        }
    }while(ch!='.');
    cout << counter;
    return 0;
}

//При входе в новую версию операционной системы Windows 934 выводится приветствие вида «Hello, ИмяПользователя».
#include <iostream>

using namespace std;

int main()
{
    string s;
    int size;
    cin >> s;
    size=s.length();
    s.erase(size-1,1);
    cout << "Hello, " << s;
    return 0;
}
