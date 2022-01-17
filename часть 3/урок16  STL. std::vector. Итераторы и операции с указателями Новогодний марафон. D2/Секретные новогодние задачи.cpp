//Близится новый год, а значит, пора ставить ёлку. У Вовочки искусственная ёлка, причем с очень сложной конструкцией. Елка состоит двух видов деталей: слоев и веток. На каждый слой крепятся ветки. При том в самом верхнем слое всего 1 ветка, а в каждом последующем - на 1 больше, чем в предыдущем. Так, например, в ёлке высоты 5 будет 5 слоев и 1+2+3+4+5=15 веток.

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	cout << N * (N + 1) / 2 + N;
    return 0;
}

//Вовочка установил дома ёлку, но на этом запас его энтузиазма иссяк. Наряжать ёлку оказалось сильно сложнее, чем он предполагал, поэтому он лег на кровать и просто стал кидать на ёлку игрушки. Помогите Вовочке определить, попал ли он в ёлку игрушкой или промахнулся. Ёлка представляет из себя фигуру на плоскости, представленную на рисунке а место, куда Вовочка кидает игрушку задается координатами точки.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x1, x2, x3, y1, y2, y3, x0, y0;
	x1 = -4;
	y1 = 2;
	x2 = 0;
	y2 = 10;
	x3 = 4;
	y3 = 2;
	cin >> x0 >> y0;
	int a = (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0);
	int b = (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0);
	int c = (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0);
	if ((a >= 0 && b >= 0 && c >= 0 || a <= 0 && b <= 0 && c <= 0) || (x0 >= -1 && x0 <= 1 || y0 >= -1 && y0 <= 2)){
		cout << "YES";
	} else{
		cout << "NO";
	}
}

//Новый год - один из любимых праздников Вовочки. Только встретив один, он тут же начинает ждать следующий. Узнайте по текущей дате, сколько еще дней придется провести Вовочке в ожидании нового года.

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

bool vis_year (string data)
{
int i = 0, j = data.length() - 1;
int year = 0;
while (i < 4 && data[j] != '.')
{
year += (data[j] - '0') * pow(10,i);
i++;
j--;
}

if ( year % 400 == 0 || year % 4 == 0 && year % 100 != 0 )
return true;
return false;
}

int get_mon (string data)
{
int i = data.length()-1;
while (data[i] != '.' && i >= 0) i--;
i--; // пропускаем точку.
char mon[5];
int j = 0;
while (data[i] != '.' && i >= 0)
{
j++;
i--;
}
if (j > 2)
{
return -1;
}
int x;
for (x = 0; x < j; x++, i++)
mon[x] = data[i+1];
mon [j] = '\0';
//cout << "x = " << x << endl;
//cout << "j = " << j << endl;
int mont = atoi(mon);
if (mont < 1 || mont > 12)
{
return -2;
}
return mont;
}

int get_day (string data, int mon, bool vis)
{
int x = 0;
char day[5];
while (data[x] != '.' && x < data.length())
{
day[x] = data[x];
x++;
}
day[x] = '\0';
if (x > 2)
{
return -1;
}
int day_i = atoi(day);
if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8
|| mon == 10 || mon == 12)
{
if (day_i > 0 && day_i < 32)
return day_i;
}
else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
{
if (day_i > 0 && day_i < 31)
return day_i;
}
else if (mon == 2)
{
if (vis)
{
if (day_i > 0 && day_i < 30)
return day_i;
}
else
{
if (day_i > 0 && day_i < 29)
return day_i;
}
}
return -2;
}

int main()
{
int days_mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 } ;
int lost = 0; // сколько осталось дней
string data;
cin >> data;
bool vis = vis_year(data);

int mon = get_mon (data);
if (mon >= 1 && mon <= 12)
{
int day = get_day(data,mon,vis);
if (day > 0 && day < 32)
{
if (vis)
{
if (mon > 2)
{
for(int x = mon; x < 12; x++)
lost += days_mon[x];
lost += days_mon[mon-1] - day + 1;
}
else
{
for(int x = mon; x < 12; x++)
lost += days_mon[x];
lost += days_mon[mon-1] - day + 1;
lost++;
}
}
else
{
for(int x = mon; x < 12; x++)
lost += days_mon[x];
lost += days_mon[mon-1] - day + 1;
}
}
}

cout << lost << endl;

return 0;
}

//К Новому году в детском саду ребята начали вырезать из бумаги снежинки. Их получилось так много, что пришлось выбирать те, которые будут украшать двери и окна. Считается, что снежинка тем красивее, чем она ажурнее, то есть чем больше в ней дырочек. Было решено выбирать только те снежинки, количество дырочек в которой больше или равно n. Узнайте, сколько снежинок будет украшать детский сад в течение праздников, а также сколько получилось в сумме дырочек на этих выбранных самых красивых снежинках.

#include <iostream>
using namespace std;

int main() {
	int N, inp = 1, am = 0, sum = 0;
	cin >> N;
	while(inp != 0){
		cin >> inp;
		if(inp >= N){
			am++;
			sum += inp;
		}
	}
	cout << am << " " << sum;
}

//Дед Мороз уже получил информацию о том, кто как вел себя в уходящем году, и начал распределять подарки. Он решил, что тот, кто вел себя плохо, не получит ни одного подарка, тот, кто вел себя хорошо, - 1 подарок, а тот, кто вел себя отлично, - x подарков. Всего в распоряжении у Деда Мороза n подарков. Узнайте, какое максимальное значение может принимать x, и выведите на экран то количество подарков, которое получит каждый из ребят в зависимости от их поведения.

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, am = 0;
	string inp;
	vector<int> vect;
	cin >> N >> M;
	for(int i = 0; i < M; i++)
	{
		cin >> inp;
		if(inp == "bad")
			vect.push_back(0);
		if(inp == "good")
			vect.push_back(1);
		if(inp == "excellent")
			vect.push_back(-1);
	}
	for(int i = 0; i < M; i++){
		if(vect[i] != -1){
			N -= vect[i];
		} else{
			am++;
		}
	}
	for(int i = 0; i < M; i++){
		if(vect[i] == -1){
			vect[i] = N / am;
		}
		cout << vect[i] << " ";
	}
}

//Подготовка к Новому Году идет полным ходом: снежинки вырезаны, подарки распределены. Но, как это обычно бывает, появился злодей Грюнч, который хочет испортить всем праздник. Грюнч решил начать с самого незащищенного слоя населения - детей. Он узнал, что Дед Мороз отправляет все подарки на упаковку, а это отличная возможность для Грюнча вмешаться в процесс и все испортить. Он уже придумал алгоритм, по которому будет перемешивать все подарки:
#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
vector<int> pack(vector<int> presents) {
  for (int i = 0; i < presents.size() - 1; i += 2)
    swap(presents[i], presents[i + 1]);
  reverse(presents.begin(), presents.end());
  return presents;
}
int main()
{
    vector<int> presents;

    int a;
    while (cin >> a) {
        presents.push_back(a);
    }
    presents = pack(presents);
    
    for (int i = 0; i < presents.size(); i++) {
        cout << presents[i] << " ";
    }
    return 0;
}

//Дед Мороз сильно расстроился, когда узнал, что все подарки перепутались в процессе упаковки. Поэтому он решил поехать домой в автобусе, в надежде, что он получит счастливый билетик и это поднимет ему настроение. Однако, в том автобусе, на котором ездит Дед Мороз, другие билетики и другие правила проверки того, какие билетики считаются счастливыми. 

#include <iostream>
#include <cmath>
using namespace std;

void root(long long int num){
	long long int sum1 = 0;
	while(num > 0){
		sum1 += num % 10;
		num /= 10;
	}
	if((int)log10((double)sum1) + 1 > 1){
		root(sum1);
	} else{
		cout << sum1;
	}
}

int main() {
	long long int N;
	cin >> N;
	root(N);
}

//Вовочка случайно узнал из новостей, что в срыве Нового года подозревается некий Грюнч, и отправился на его поиски, чтобы спасти праздник.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double N, M;
	cin >> M >> N;
	cout << ceil(N / M);
}
