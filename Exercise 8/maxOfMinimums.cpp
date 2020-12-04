#include <iostream>

using namespace std;

/*
    Въвеждат се естествени числа в двумерен масив 4х4. Програмата да извежда като резултат максималната стойност от
    всички минимални стойности в отделните редове.
    Вход:
    8 80 15 89
    90 70 57 40
    25 40 41 91
    55 55 24 32

    Изход: 40
*/

int main()
{
    unsigned arr[4][4];

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    unsigned maxMin = 0;

    for (int i=0; i<4; i++){
        unsigned currMin = -1;
        for (int j=0; j<4; j++){
            if (currMin > arr[i][j])
                currMin = arr[i][j];
        }

        if (currMin > maxMin)
            maxMin = currMin;
    }

    cout << maxMin << endl;

    return 0;
}
