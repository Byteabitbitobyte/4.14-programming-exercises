#include <iostream>

using namespace std;


int main()
{

    int day, age, month;
    std::cout << "Enter your age followed by the month";
    cin >> age >> month;
    day = (age * 365) + (month * 30);
    std::cout << "Your Age in days:\n";
    cout << day;

}


