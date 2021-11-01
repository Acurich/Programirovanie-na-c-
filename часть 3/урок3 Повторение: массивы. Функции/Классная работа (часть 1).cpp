//Требуется написать функцию long long pow(long long a, unsigned int p), которая возводит число a в степень p и возвращает ap.
//С её помощью рассчитайте значение выражения x11 + y5 + z18.
#include <iostream>
using namespace std;
long long pow_l(long long a, unsigned p)
{
long long temp = a;
for(int i = 1; i < p; i++)
{
temp *=a;
}
return temp;
}

int main()
{
long long x,y,z,res;
cin >> x;
cin >> y;
cin >> z;
res = pow_l(x, 11)+pow_l(y, 5)+pow_l(z, 18);
cout << res << endl;
}

//Напишите функцию подсчёта количества цифр в натуральном числе.
#include <iostream>
using namespace std;
 
int main() {
	int x, n=1;
	cin >> x;
	while ((x/=10) > 0) n++;
	cout << n;
	return 0;
}

//У Вовочки на клавиатуре сломалась клавиша shift, а ему необходимо использовать те символы, которые находятся на цифровых клавишах. Помогите Вовочке, написав функцию, переводящую цифру в символ по следующим правилам:
# include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  if ( n ==1){cout << "!";}
  if (n == 2) {cout << "@";}
  if (n == 3) {cout << "#";}
  if (n == 4){cout << "$";}
  if (n == 5){cout << "%";}
  if (n == 6){cout << "^";}
  if (n == 7){cout << "&";}
  if (n == 8){cout << "*";}
  if ( n== 9){cout << "(";}
  if (n==0){cout << ")";}
}

//Создайте функцию для печати каждой цифры при помощи символа #, но свободное пространство всё еще будем заполнять символом _ (6 раз: ______). 
//Программа должна получать на вход цифру и выводить её в “текстовой графике” на экран.
#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
if (n==1) {cout << "_#_\n_#_\n_#_\n_#_\n_#_\n_#_\n";}
if (n ==2){cout << "__##__\n_#__#_\n_#__#_\n___#__\n__#___\n_####_\n";}
if (n == 3){cout << "__####_\n_#____#\n__###__\n______#\n_#____#\n__####_";}
if (n==4){cout << "_#__#_\n_#__#_\n_####_\n____#_\n____#_\n____#_";}
if (n == 5){cout << "_#####\n_#____\n_#_##_\n_____#\n_____#\n_####_";}
if (n == 6){cout << "__###_\n_#___#\n_#_#__\n_#___#\n_#___#\n___##_";}
if (n == 7){cout << "_#####\n____#_\n___#__\n__#___\n_#____\n_#____";}
if (n==8){cout << "__##__\n_#__#_\n__##__\n#____#\n#____#\n_####_";}
if (n == 9){cout << "__###_\n_#__#_\n__###_\n____#_\n____#_\n_###__";}
if (n== 0){cout << "_####_\n#____#\n#____#\n#____#\n#____#\n_####_";}
}

//Напишите функцию, проверяющую наличие определенной цифры в заданном числе.
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

void method(int a, int b) {
  string ans = "NO";
  if (a == 0) ans = "YES";
  while (a != 0) {
    int k = a % 10;
    if (k == b) ans = "YES";
    a /= 10;
  }

    cout << ans;
  }

  int main() {
    int a, b;
    cin >> a >> b;
    method(a, b);
  }

//Напишите функцию, проверяющую, является ли введенное число простым. Напомним, что простым числом является такое число, среди натуральных делителей которого есть только 1 и само число.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i;
    bool isPrime = true;
    cin>>n;
    for (i=2; i<=(sqrt(abs(n))); i++){
        if (n%i==0){
        isPrime = false;
        break;
        }
    }
    if(isPrime)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
