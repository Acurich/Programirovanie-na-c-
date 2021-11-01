//Считать 5 чисел из текстового файла input.txt и найти максимальное значение среди них.
//Записать в файл output.txt те же пять, где каждое число равно разности максимального значения и изначальных чисел
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    fstream input, outuput;
    input.open("input.txt", std::ios::in);
    outuput.open("output.txt",std::ios::out);

    vector<int> input_arr(5);
    for (auto &num : input_arr)
        input >> num;

    int max_element = *std::max_element(input_arr.begin(), input_arr.end());

    for (auto &num : input_arr)
        outuput << max_element - num << " ";

    return 0;
} 
