//Напиши функцию int strToInt(string s), которая принимает на вход строку s и преобразует ее в целое число.
#include <iostream>

using namespace std;
int strToInt(string s)
{
  int temp = 0; 
  int i = 0;
  int sign = 0; 
  if (s[i] == '-')
  {
    sign = 1;
    i++;
  }
  while (s[i] >= 0x30 && s[i] <= 0x39)
  {
    temp = temp + (s[i] & 0x0F);
    temp = temp * 10;
    i++;
  }
  temp = temp / 10;
  if (sign == 1)
    temp = -temp;
  return(temp);
}
int main(){
    string s;
    cin >> s;

    cout << strToInt(s) + 2020;

    return 0;
}

//Напиши функцию string intToStr(int n), преобразующую число в строку
#include <iostream>

using namespace std;
string intToStr(int n) {
	char buf[10];
	sprintf(buf, "%d", n);
	string b = buf;
	return b;
}
int main(){
    int year;
    cin >> year;

    cout << "I was born in " + intToStr(year);

    return 0;
}

//Напиши функцию double strToDouble(string s), которая принимает на вход строку, являющуюся корректным вещественным числом с десятичной точкой, преобразует его в вещественный тип и возвращает в качестве результата.
#include <iostream>

using namespace std;
#include <bits/basic_string.h>

double strToDouble(string str)
{
	string s();
	double result = 0;
	result = strtod(str.c_str(),NULL);
	
	return result;
}
int main(){
    string s;
    cin >> s;

    cout << 5.4 + strToDouble(s);

    return 0;
}
   
