//В стране СИ произошел сбой! В базе данных годов основания городов исказились многие данные. Вам необходимо сделать функцию, которая будет исправлять ошибки в выборке годов основания. Страна была основана в 1980 году и существует по текущую дату(2020 год). Если год основания не входит в этот диапазон, то необходимо поставить туда 0, чтобы сказать знающим, что тут необходимо ввести изменение.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void check_year(int &year) {
  if (year < 1980 || year > 2020) {
    year = 0;
  }
}
int main() {
	int data_size = 0;
	cin >> data_size;
	vector<int> years(data_size);
	for (int i = 0; i < years.size(); i++) {
		cin >> years[i];
	}
	for_each(years.begin(), years.end(), check_year);
	for (int i = 0; i < years.size(); i++) {
		cout << years[i] << " ";
	}
	return 0;
}

//Библиотеке современных книг требуется провести проверку книг, а именно их год издания. Современными книгами считают те, которые издались позже 2010 года. Определите, все ли книги, представленные в базе, являются современными или нет.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isModern(int &books_year) {
  if (books_year > 2010) {
    return true;
  } else {
    return false;
  }
}
int main() {
	unsigned int database_size = 0;
	cin >> database_size;
	vector<int> books_year(database_size);
	for (unsigned int i = 0; i < books_year.size(); i++){
		cin >> books_year[i];
	}
	if (all_of(books_year.begin(), books_year.end(), isModern)) {
		cout << "ALL BOOKS ARE MODERN" << endl;
	}
	else {
		cout << "SOME BOOK IS OLD" << endl;
	}
	return 0;
}

//Библиотеки решили, что пора фильтровать научные статьи от лже-научных.
//Вам будут дана часть базы данных с издательства, где будут хранится метки о качестве хранимых там статей. Вам необходимо понять, если ли там плохие статьи или нет.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isSci(string &Sci)
{
	if  (Sci =="Sci")
	{
		return true;
	}
	else {
		return false;
	}
}

int main() {
	unsigned int database_size = 0;
	cin >> database_size;
	vector<string> books_year(database_size);
	for (unsigned int i = 0; i < books_year.size(); i++) {
		cin >> books_year[i];
	}
	if (all_of(books_year.begin(), books_year.end(), isSci)) {
		cout << "CORRECT JOURNAL" << endl;
	}
	else {
		cout << "WRONG JOURNAL" << endl;
	}
	return 0;
}

//Теперь, когда вы выбрали нужные вам точки интереса, необходимо понять… Какие лучше всего посетить. Вы зашли на платформу Юдекс.Рейтинг и решили взглянуть, у кого какое количество очков. Как привередливый паломник, вы решили, что вам интересны только места с рейтингом выше 75(75 не включительно). Необходимо посчитать, сколько точек вам подходит для посещения по их рейтингу.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool is75(int &vec)
{
	if (vec > 75)
	{
		return true;
	}
	else {
		return false;
	}
}
int main() {
	unsigned int database_size = 0;
	cin >> database_size;
	vector<int> vec(database_size);
	for (unsigned int i = 0; i <vec.size(); i++) {
		cin >> vec[i];
	}
	cout << count_if(vec.begin(), vec.end(), is75);
		
	return 0;
}

//К сожалению, все базы данных районов смешались и теперь рейтинги мест для посещений лежат в одном большом массиве. И теперь представители города хотят проверить, входят ли их данные в эту одну большую утечку или нет. Они, открыв манускрипт, увидели, что есть функция equal, которая проверят, входит ли диапазон данных в другой, более большой.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void enter_rate(int& rate) {
	cin >> rate;
}

bool check2value(int a, int b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	int N;
	cin >> N;
	vector <int > vec1(N);
	for_each(vec1.begin(), vec1.end(), enter_rate);
	int K;
	cin >> K;
	vector <int> vec2(K);
	for_each(vec2.begin(), vec2.end(), enter_rate);
	if (equal(vec2.begin(), vec2.end(), vec1.begin(), check2value)) {
		cout << "CLEAR!";
	}
	else {
		cout << "LEAK FOUND!";
	}
 	return 0;
}

//Здесь все просто. Вам необходимо в данном векторе удалить элемент M.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v1(n);
	for (int i = 0;i < v1.size();i++)
	{
		cin >> v1[i];
	}
	int M;
	cin >> M;
	v1.erase(remove(v1.begin(), v1.end(),M), v1.end());
	cout << v1.size() << endl;
	for (int i = 0; i < v1.size();i++)
	{
		cout << v1[i] << " ";
	}
	return 0;
}

//В ПрогоГраде случилась беда! В результате неправильного использования указателей районы начали клонироваться. Используя функцию unique уберите все повторяющиеся последовательно номера из вектора, чтобы остались только уникальные районы!

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v1(n);
  for (int i = 0; i < v1.size(); i++) {
    cin >> v1[i];
  }
  v1.erase(unique(v1.begin(), v1.end()), v1.end());
  // cout << v1.size() << endl;
  for (int i = 0; i < v1.size(); i++) {
    cout << v1[i] << " ";
  }
  return 0;
}

//Библиотекари любят играть с антинаучной литературой, а именно в “Античетные странички”. Они берут случайный набор статьей и смотрят на количество страниц. Если все четные, то говорят “LUCKY PAGES” и идут пить чай. В противном случае они берут и отрывают страницы до тех пор, пока все страницы не станут четными. В этом случае они кричат “PAGES GO AWAY”, вырывают страницы и потом их перепроверяют. Реализуйте для них проверочную систему.

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

bool isChet(int& value) {
    if (value % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

void doChet(int& value) {
    if (value % 2 != 0) {
        value--;
    }
} 

void in(int& value) {
    cin >> value;
}

void out(int& value) {
    cout << value << " ";
}

int main() {
    unsigned int database_size = 0;
    cin >> database_size;
    vector <int > libr(database_size);
    for_each(libr.begin(), libr.end(), in);
    if (all_of(libr.begin(), libr.end(), isChet)) {
        cout << "LUCKY PAGES";
    }
    else {
        cout << "PAGES GO AWAY" << endl;
        for_each(libr.begin(), libr.end(), doChet);
        for_each(libr.begin(), libr.end(), out);
    }
    return 0;
}
