//Последовательность чисел назовем симметричной, если она одинаково читается как слева направо, так и справа налево. Например, следующие последовательности являются симметричными:
//1 2 3 4 5 4 3 2 1;
//1 2 1 2 2 1 2 1.
//Вашей программе будет дана последовательность чисел. Требуется определить, какое минимальное количество и каких чисел надо приписать в конец этой последовательности, чтобы она стала симметричной.
#include <iostream>

using namespace std;

int main() {
  int StartArrayLength;  //Длина входной последовательности
  int* StartArray;
  bool Error = 1;
  while (Error) {
    Error = 0;

    cin >> StartArrayLength;
    if (StartArrayLength < 1)  //Введена невозможная длина массива
    {
      Error = 1;
    }
    if (StartArrayLength ==
        1)  //Длина массива, для которой не имеет смысла искать ответ
    {
      Error = 1;
    }
    if (StartArrayLength ==
        2)  //Длина массива, для которой не имеет смысла искать ответ
    {
      Error = 1;
    }
  }
  StartArray = new int[StartArrayLength];
  for (int i = 0; i < StartArrayLength; i++) {
    cin >> StartArray[i];
  }
  //=================================================
  //===== Алгоритм поиска "чётной" последовательности
  //=================================================
  int HalfIndex, CurrentIndexA, CurrentIndexB, TempLength;
  //Делим массив "почти пополам"
  if (StartArrayLength % 2 == 0) {
    HalfIndex = StartArrayLength / 2 - 1;
  } else {
    HalfIndex = StartArrayLength / 2;
  }
  CurrentIndexA = HalfIndex;
  CurrentIndexB = HalfIndex + 1;
  TempLength = StartArrayLength - 1 - HalfIndex;
  for (int i = 0; i < TempLength; i++) {
    //Если симметричность соблюдена, смещаем индексы проверки
    if (StartArray[CurrentIndexA] == StartArray[CurrentIndexB]) {
      CurrentIndexA--;
      CurrentIndexB++;
    } else {
      //Иначе двигаем границу
      HalfIndex++;
      //И если последовательность закончилась, записываем в ответ всю
      //последовательность и завершаем цикл
      if (HalfIndex == StartArrayLength) {
        CurrentIndexA = StartArrayLength - 1;
        i = TempLength;
      } else {
        //Иначе начинаем всё сначала
        CurrentIndexA = HalfIndex;
        CurrentIndexB = HalfIndex + 1;
        TempLength = StartArrayLength - HalfIndex;
        i = 0;
      }
    }
  }
  //Запоминаем конец "чётного" "огрызка"
  int ArrayALength = CurrentIndexA;

  //===================================================
  //===== Алгоритм поиска "нечётной" последовательности
  //===================================================
  //Делим массив "почти пополам"
  if (StartArrayLength % 2 == 0) {
    HalfIndex = StartArrayLength / 2 - 2;
  } else {
    HalfIndex = StartArrayLength / 2 - 1;
  }
  CurrentIndexA = HalfIndex;
  CurrentIndexB = HalfIndex + 2;
  TempLength = StartArrayLength - 2 - HalfIndex;
  for (int i = 0; i < TempLength; i++) {
    if (StartArray[CurrentIndexA] == StartArray[CurrentIndexB]) {
      CurrentIndexA--;
      CurrentIndexB++;
    } else {
      HalfIndex++;
      if (HalfIndex == StartArrayLength - 1) {
        CurrentIndexA = StartArrayLength - 2;
        i = TempLength;
      } else {
        //Иначе начинаем всё сначала
        CurrentIndexA = HalfIndex;
        CurrentIndexB = HalfIndex + 2;
        TempLength = StartArrayLength - 1 - HalfIndex;
        i = 0;
      }
    }
  }
  //Запоминаем конец "нечётного" "огрызка"
  int ArrayBLength = CurrentIndexA;
  if (ArrayALength < ArrayBLength) {
    cout << ArrayALength + 1 << endl;
    for (int i = ArrayALength; i >= 0; i--) {
      cout << StartArray[i] << " ";
    }
  } else {
    cout << ArrayBLength + 1 << endl;
    for (int i = ArrayBLength; i >= 0; i--) {
      cout << StartArray[i] << " ";
    }
  }

  return 0;
}
