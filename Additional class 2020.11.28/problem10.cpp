#include <iostream>

using namespace std;

/*
    Напишете функция, която връща броя на нулите в двоичното представяне на подаденото ѝ естествено число.
    Не броим водещите нули, т.е. в числото 0...000110101 броим две нули.
    Примерни входове:      2, 10, 255, 1024
    Съответните им изходи: 1,  2,   0,   10
*/

unsigned zerosCount(unsigned num){
    unsigned zeros = 0;
    const unsigned mask = 1;

    while (num) {
        if ((num & mask) == 0)
            zeros++;
        num >>= 1;
    }

    return zeros;
}

int main()
{
    unsigned num;
    cin >> num;

    unsigned zeros = zerosCount(num);
    cout << zeros << endl;

    return 0;
}
