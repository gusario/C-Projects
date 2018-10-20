#include <iostream>
#include "people.h"
using namespace std;

int main()
{
    human man1("Ivan", "Pupkin", "Petrovich", 1);
    cout<<"\n";
    man1.print();

    student man2("Petr", "Ivanov", "Andreevich", 1, 10976);
    cout<<"\n";
    man2.print();

    teacher man3("Anna", "Ivanova", "Petrovna", 0, 785.4);
    cout<<"\n";
    man3.print();

    professor man4("Oleg", "Popov", "Ivanovich", 1, 865.87, true);
    cout<<"\n";
    man4.print();

    PhDstudent man5("Maria", "Popkova", "Andreevna", 0, 876, 8779, 1);
    cout<<"\n";
    man5.print();

    PhDstudent man6;
    cout<<"\n";
    man6.print();

    human *man7;
    man7 = new student("Andrey", "Petrov", "Igorevich", 1, 10871);
    cout<<"\n";
    man7->print();

    return 0;
}
