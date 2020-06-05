#include <iostream>
#include <stack>
#include <time.h>
#include <list>
using namespace std;

void easy()
{
    std::list<double> myList{ 12.5,7,20.1,35,55,47.2,31 };
    cout << "Список вещественных чисел: ";
    for (double n : myList)
    {
       cout << n <<" ";
    }
    cout << endl;
    list<double>::iterator itr;
    
    for (list<double>::iterator i = myList.begin(); i != myList.end(); i++) {
        if (*i == 55) {
            itr = i;
            itr--;
        }
    }
    myList.erase(itr);//удаляем елемент перед 55
    cout << "Список вещественных чисел после удаления значения: ";
    for (double n : myList) {
        cout << n << " ";
    }
    cout << endl;
}

void medium()
{
    std::list<double> myList{ -12.5,-7,20.1,35,-55,47.2,31 };
    cout << "Список вещественных чисел: ";
    for (double n : myList)
    {
        cout << n << " ";
    }
    list<double>::iterator itr;
    for (list<double>::iterator i = myList.begin(); i != myList.end(); i++)
    {
        if (*i > 0) {
            itr = i;
            break;
        }
    }
    myList.insert(itr,*itr);
    cout << endl;
    cout << "Список вещественных чисел после дублирования первого положительного числа: ";
    for (double n : myList)
    {
        cout << n << " ";
    }
}

void hard()
{
    std::list<int> myList{ 3,20,5,45,24 };
    list<int>::iterator itr = myList.begin(); 
    cout << "Список вещественных чисел: ";
    for (int n : myList)
    {
        cout << n << " ";
    }

    for (list<int>::iterator i = myList.begin(); i != myList.end(); i++)
    {
        if (*i % 2 != 0) {
            itr = i;
            myList.insert(itr, *itr);
        }
    }
    cout << endl;
    cout << "Список вещественных чисел после дублирования нечетных чисел: ";
    for (double n : myList)
    {
        cout << n << " ";
    }
    cout << endl;
}


int main()
{
    setlocale(LC_ALL, "RU");

    easy();
    medium();
    hard();
}