//Группе разработчиков Юдекс.Рейтинга необходимо расширить набор инструментов по анализу рейтингов 'точек кода' в ПрогоГраде. Такое решение было принято из-за появлений оценок ниже нуля, что никак не может быть реальностью, так как минимальная оценка равна 0.
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
	int count = 0;
	for (int i = 0; i < v1.size();i++)
	{
		if (v1[i] < 0) {
			count += 1;
		}
	}
	if (count == 0) {
		cout << "MARKS ARE CLEAR";
	}
	else
	{
		cout << count;
	}
	return 0;
}

//В ПрогоГраде проходит великолепный фестиваль научных знаний. Они решили пригласить участников к себе на центральную площадь. Вам было поручено сделать систему распознавания билетов у групп посетителей. Билет является подлинным, если он нечетный. Необходимо из набора удалить все билеты, не проходящие по этому критерию.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool check_nechet(int value)
{
	if (value % 2 == 1) {
		return true;
	}
	else {
		return false;
	}
}
bool check_chet(int value)
{
	if (value % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

void in(int& value) {
	cin >> value;
}

void out(int& value) {
	cout << value << " ";
}
int main() {
	int n;
	cin >> n;
	int counter = 0;
	vector<int> vec(n);
	for_each(vec.begin(), vec.end(), in);
	if (all_of(vec.begin(), vec.end(), check_nechet))
	{
		cout << "ALL TICKETS ARE CORRECT";
	}
	else {
		counter = count_if(vec.begin(), vec.end(), check_chet);
		cout << "WRONG" << endl;
		cout << counter << endl;
		vec.erase(remove_if(vec.begin(), vec.end(), check_chet),vec.end());
		for_each(vec.begin(), vec.end(), out);
	}
	return 0;
}
