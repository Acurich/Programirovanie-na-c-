//Программа получает на ввод 10 строчек по 10 цифр - описание игрового поля "Морской бой".
//Правила заполнения следующие: 
//Если в ячейке 0, то эта ячейка пуста - на поле должно отображаться пробелом;
//1, если там находится корабль - на поле отображается символом "#";
//2, если там находится разбитый корабль - на поле отображается символом "+". 
//Введите состояние поля игры и выведите его на экран в формате, указанном в примерах. 
#include <iostream>
using namespace std;
int main() {
	const int size = 10;
	char field[size][size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			int inp;
			cin >> inp;
			switch (inp) {
			default: field[i][j] = ' ';
				break;
			case 0: field[i][j] = ' ';
				break;
			case 1: field[i][j] = '#';
				break;
			case 2: field[i][j] = '+';
				break;
			}
		}
	}
	cout << "  ";
	for (int ch = 0; ch < 10; ch++)
		cout <<  ch << " ";
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << i << " ";
		for (int j = 0; j < size; j++) {
			cout << field[i][j] << ' ';
		}
      cout << endl;
	}
	system("pause");

}

//К функционалу предыдущей задачи добавьте возможность выстрела.
//Теперь вам вводится состояние поля для игры и координаты выстрела. Вам необходимо вывести поле игры после произведенного выстрела.
//Добавьте новое отображение клетки этого поля: промах (код при вводе - 3), задается символом ".".
#include <iostream>
using namespace std;
int main() {
	const int size = 10;
	char field[size][size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			int inp;
			cin >> inp;
			switch (inp) {
			default: field[i][j] = ' ';
				break;
			case 0: field[i][j] = ' ';
				break;
			case 1: field[i][j] = '#';
				break;
			case 2: field[i][j] = '+';
				break;
			}
		}
	}
  int x, y;
  cin >> x >> y;
  if (field[x][y] == '#') field[x][y] = '+';
  else field[x][y] = '.';
	cout << "  ";
	for (int ch = 0; ch < 10; ch++)
		cout <<  ch << " ";
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << i << " ";
		for (int j = 0; j < size; j++) {
			cout << field[i][j] << ' ';
		}
      cout << endl;
	}
	system("pause");

}


//Как вы уже знаете, в действительности игрок не видит всё состояние поля противника, когда производит выстрел, а только видит свои попадания и промахи.
//Измените программу из предыдущей задачи таким образом, чтобы при выводе отображалось поле, которое видит выстреливший игрок. Т.е. без кораблей.
#include <iostream>
using namespace std;
int main() {
  const int size = 10;
  char field[size][size];
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      int inp;
      cin >> inp;
      switch (inp) {
        default:
          field[i][j] = ' ';
          break;
        case 0:
          field[i][j] = ' ';
          break;
        case 1:
          field[i][j] = '#';
          break;
        case 2:
          field[i][j] = '+';
          break;
        case 3: field[i][j] = '.';
          break;
      }
    }
  }
  int x, y;
  cin >> x >> y;
  if (field[x][y] == '#')
    field[x][y] = '+';
  else field[x][y] = '.';
  cout << "  ";
  for (int ch = 0; ch < 10; ch++) cout << ch << " ";
  cout << endl;
  for (int i = 0; i < size; i++) {
    cout << i << " ";
    for (int j = 0; j < size; j++) {
      if (field[i][j] == '#') field[i][j] = ' ';
      cout << field[i][j] << ' ';
    }
    cout << endl;
  }
}
