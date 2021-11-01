//Дан треугольник со сторонами a, b и c. Определите, является ли он равнобедренным.
#include <iostream>
 
using namespace std;
 
int main()
{
    int A, B, C;
    cin>>A >> B >> C;
    if (A==B|| A==C || B==C)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}

//Дано число, превышающее 99. Определить, заканчивается ли это число цифрами 55.
#include <iostream>
using namespace std;
int main()
{
    int a;
    
    cin >> a;
    if (a % 100 == 55)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    system("pause");
}

//Даны числа a и b. Необходимо найти все числа, являющиеся полными квадратами, на отрезке [a;b].
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int a , b;
    cin >> a >> b ;
    int sqrt_a = ceil(sqrt(a + 0.0));
    int sqrt_b = sqrt((double)b);
    for (int i = sqrt_a ; i <= sqrt_b ; i++)
        cout << i*i << " ";    return 0;
}

//Старинными русскими денежными единицами являются: 1 рубль = 100 копеек, 1 гривна = 10 копеек, 1 алтын = 3 копейки, 1 полушка = 0,25 копейки. Имеется A копеек. Напишите программу для представления имеющейся суммы в рублях, гривнах, затем алтынах и полушках. Например, 114 коп = 1 рублю 1 гривне 1 алтыну 4 полушкам
#include <iostream>
using namespace std;
int main() {
  int n,rub,grn,alt, pol;
  cin >> n;
  rub = n / 100;
  grn = (n - rub * 100)  / 10;
  alt = (n - rub * 100 - grn * 10)  / 3;
  pol=((n-rub*100-grn*10-alt*3)/0.25);
  cout<<rub<<" " << grn <<" "<< alt << " "<<pol;
  }
