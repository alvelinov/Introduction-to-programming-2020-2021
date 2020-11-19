#include <iostream>

using namespace std;

/*
    Напишете функция, която връща броя на нулите в двоичното представяне на подаденото ѝ естествено число.
    Не броим водещите нули, т.е. в числото 0...000110101 броим две нули.
    Примерни входове:      2, 10, 255, 1024
    Съответните им изходи: 1,  2,   0,   10
*/

int countZeros(unsigned n){
    int cnt = 0;
    while(n){
        if( !(n & 1) )
            cnt++;
        n >>= 1;
    }

    return cnt;
}

int main()
{
    unsigned num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "It has " << countZeros(num) << " zeros" << endl;
    return 0;
}
