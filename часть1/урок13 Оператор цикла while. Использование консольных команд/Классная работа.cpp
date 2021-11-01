//Напишем простую программу, которая пытается быть дружелюбной. Программа должна выполнять три действия:
//Выводить в консоль вопрос "What do you love?"
//Считывать ответ
//Выводить "I love answer too", где answer - то, что ввел пользователь
#include <iostream>
#include <string>
using namespace std;
int main() {
  string pass;
  cout << "What do you love?" << endl;
  cin >> pass;
  cout << "I love " << pass <<" too" << endl;
  return 0;
}

//Напишем программу, которая поет песню "We are the champions" и хочет, чтобы вы подпевали.
//Программа должна работать следующим образом :
//Выводить в консоль вопрос "We are the champions, my ..."
//Считывать ответ
//Если ответ верный (friends), то программа выводит следующую строчку песни ("And we will keep on fighting till the end") и заканчивает работу
//Если ответ неверный, то программа выводит "no!" и считывает ответ снова
//Все сообщения программы выводятся на отдельной строке
#include <iostream>
#include <string>
using namespace std;
int main() {
  string pass;
  cout << "We are the champions, my ..." << endl;
  cin >> pass;
  while (pass != "friends") {
    cin >> pass;
    cout << "no!" << endl;
  }
  cout << "And we will keep on fighting till the end" << endl;
  return 0;
}

//Жадный программист пишет программу для заказа таблеток от жадности. Программа умеет считывать сколько нужно программисту таблеток от жадности, а потом начинает удваивать, упятерять и даже удесятерять это число до тех пор, пока не получит команду STOP.
//Ваша задача - реализовать эту программу.
//Программа должна работать следующим образом :
//Выводить в консоль сообщение "Insert number"
//Считывать ответ (целое положительное число не превышающее 1000)
//Считывать команды пользователя пока не получит команду "STOP"
//Выводить сообщение "Now number is x", где x - число, которое получилось выполнения всех команд
//Программа должна воспринимать 4 вида команд:
//x2  - удваивает текущее число
//x5 - увеличивает текущее число в 5 раз
//x10 - увеличивает текущее число в 10 раз
//STOP - останавливает считывание команд и выводит итоговое сообщение
//Все сообщения программы выводятся на отдельной строке
#include <iostream>
#include <string>
using namespace std;
int main() {
  string pass;
  long a, cnt;
  cout << "Insert number" << endl;
  cin >> a >> pass;
  cnt = a;
  while (pass != "STOP") {
    if (pass == "x2")
      cnt *= 2;
    else if (pass == "x5")
      cnt *= 5;
    else if (pass == "x10")
      cnt *= 10;
    cin >> pass;
  }
  cout << "Now number is " << cnt;
  return 0;
}
