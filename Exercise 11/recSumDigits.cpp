#include <iostream>

using namespace std;

/*
    Да се напише рекурсивна функция, която намира сумата на цифрите в дадено естествено число.
*/

unsigned sumDigits(unsigned num)
{
    if(num <= 9)
        return num;
    return num % 10 + sumDigits(num / 10);
}

int main()
{
    unsigned num = 10;
    cout << sumDigits(num) << endl;
}
