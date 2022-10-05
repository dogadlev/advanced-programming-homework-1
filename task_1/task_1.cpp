/* task_1.cpp : Лямбда-функции.*/

#include <algorithm> /*use std::for_each()*/
#include <vector> /*use std::vector<>*/
#include <iostream>
#include <locale.h> /*use setlocale(); need to output russian letters in console*/

int main(int argc, char** argv)
{
    std::vector<int> numbers{4, 7, 9, 14, 12};
    
    setlocale(LC_ALL, "Russian");
    
    std::cout << "Входные данные: ";
    std::for_each(numbers.begin(), numbers.end(), [](const int num) { std::cout << num << " "; });
    std::cout << std::endl;
    
    std::for_each(numbers.begin(), numbers.end(), [](int& num) { if (num % 2 != 0) num *= 3; });
    
    std::cout << "Выходные данные: ";
    std::for_each(numbers.begin(), numbers.end(), [](const int num) { std::cout << num << " "; });
    std::cout << std::endl;
    
    return 0;
}
