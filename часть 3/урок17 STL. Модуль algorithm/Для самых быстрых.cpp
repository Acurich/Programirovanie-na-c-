//На улицах праздник! Народ празднует очередную годовщину технологии ООП. Люди скандируют: «Инкапсуляция, полиморфизм, наследование», мешая господину Лямбда работать над новой технологией. Долгое время он вынашивал свою идею, которая улучшит существующие механизмы программ. И вот, момент настал. Он создал функции, которые можно встраивать прямо в существующие методы. Дрожащими руками он просит вас, ассистента, провести первую реакцию: Пробуждение лямбда функции.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    auto hello_world(
        []()
        {
            cout << "Hello lambda!";
        }
    );
    hello_world();
	return 0;
}

//Он пробудился! С криками по лаборатории ученый лямбда носится туда – сюда, сгорая от радости. C криком «It's a alive» он подбегает к вам с новым заданием. Необходимо проверить – как лямбда функция реагирует на входные данные.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int val1 = 0;
    int val2 = 0;
    cin >> val1 >> val2;
    auto lambda_sum(
        [](int value1, int value2)
        { return value1 + value2;
    });
    cout << lambda_sum(val1, val2) << endl;
    return 0;
}

//Все базовые тесты пройдены и пора проводить интеграцию функций, названных в честь ученого Лямбда. В качестве экспериментальной выборки возьмите вектор целых значений, отвечающий за номера диктофонных записей ученого. Они в наборе как положительные, так и отрицательные, так как диктофон словил пару багов.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	int size_of_records = 0;
	cin >> size_of_records;
	vector<int> num_record(size_of_records);
	for_each(num_record.begin(), num_record.end(),
		[](int& _val) {
			cin >> _val;
		}
	);
for_each(num_record.begin(), num_record.end(), [](int& _val) {
  if (_val < 0) {
    _val = abs(_val);
  }
});
	for_each(num_record.begin(), num_record.end(),
		[](int _val) {
			cout << _val << " ";
		}
	);
	return 0;
}

//После успешного релиза первых версий лямбда функций, вы с ученым сидите в кабинете  и размышляйте о том, что же можно улучшить, чтобы ваш продукт стал еще лучше.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int test_value = 0;
	cin >> test_value;
auto sum_func(
		[test_value]()
		{
			cout << "Lymbda take value: " << test_value;
		}
	);
	sum_func();
	return 0;
}

//Прекрасные новости. Модуль захвата принял значение извне и смог вывести ее! Думаю пора повышать функциональность данного модуля. Как и в предыдущий раз, следующий тест будет на суммировании. Приготовьте два значения и отправьте их в лямбду функцию, которая должна принять их и вернуть сумму данных чисел.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int value1 = 0;
	int value2 = 0;
	cin >> value1 >> value2;
auto sum_func(
		[value1,value2]()
		{
			return value1 + value2;
		}
	);
	cout << sum_func() << endl;
	return 0;
}


//Прекрасно. Два теста пройдено. Но до этого момента мы просто принимали значения. А если мы хотим их редактировать?
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int volume_of_mixture = 0;
	cin >> volume_of_mixture;
	int volume_of_need = 0;
auto how_much_volume_need([volume_of_mixture, &volume_of_need]() {
  volume_of_need = abs(1000 - volume_of_mixture);
});
	how_much_volume_need();
	cout << volume_of_need << endl;
	return 0;
}

//Ура! Модуль прошел все тесты и теперь он готов к реальным задачам.
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int size_of_records = 0;
	cin >> size_of_records;
	vector<int> num_record(size_of_records);
	for_each(num_record.begin(), num_record.end(),
		[](int& _val) {
			cin >> _val;
		}
	);
	int x, y;
	cin >> x >> y;
	for_each(num_record.begin(), num_record.end(),
		[x, y](int& _val) {
			if (_val > x && _val < y)
				cout << _val << " ";
		}
	);
	return 0;
}
