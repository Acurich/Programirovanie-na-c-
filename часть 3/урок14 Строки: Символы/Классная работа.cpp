//Даны два числа: a и b — коды символов. Ваша задача — вывести все символы, ASCII-коды которых лежат между a и b включительно, в порядке возрастания их кодов.

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin >> a >> b;
    for ( int i=a;i<=b;i++) {
        c=i;
        cout << i << " " << c << endl;
    }
    return 0;
}


//Дан один символ A. Требуется определить, является он строчным, заглавным или числом.
#include <iostream>
using namespace std;
int main()
{
    char A;
    cin >> A;
    if  (isupper(A)) { cout << "BIG";}
    else if (islower(A)) {cout << "TINY";}
    else if (isdigit(A)) { cout << "DIGIT";}
    return 0;
}


//Вам дан символ, причем известно что этот символ является заглавной латинской буквой. Необходимо заменить эту букву на строчную и вывести ее как результат.
#include <iostream>
using namespace std;
int main()
{
    char A,B;
        cin >> A;
        B=tolower(A);
        cout << B;
    return 0;
}

//У мальчика Жени на ноутбуке заело клавишу «Caps Lock», поэтому он не придумал ничего лучше, как попросить вас написать программу, которая поможет ему переводить текст, состоящий из заглавных латинских букв, в строчные. Также у Жени перестала работать клавиша пробела на клавиатуре, но с этой проблемой он справился сам, заменив все пробелы знаками подчеркивания «_».
#include <iostream>
using namespace std;
int main()
{
    char A,B;
    do {
        cin >> A;
        B=tolower(A);
        cout << B;
    }while (A!='.');
    return 0;
}

//На вход даётся число N. Выведите на экран пирамидку из символов высотой ровно N.
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    for (int i = 65; i <= (65 + N - 1); i++)
    {
        string s(i-64, (char)i);
        cout << s << endl;
    }
    return 0;
}
