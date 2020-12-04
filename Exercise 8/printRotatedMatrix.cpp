#include <iostream>

using namespace std;

/*
    Запълнете с естествени числа квадратна таблица с размери NxN, 3 <= N <= 10. Да се състави програма,
    чрез която се извеждат стойностите на елементите в масива обърнати на -90 градуса.
    Пример:
    1 2 3 4
    5 6 7 8
    9 10 11 12
    13 14 15 16

    Изход:
    13 9 5 1
    14 10 6 2
    15 11 7 3
    16 12 8 4
*/

int main()
{
    int n;
    unsigned arr[10][10];

    do {
        cout << "N = ";
        cin >> n;
    } while (n < 3 || n > 10);

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for (int j=0; j<n; j++){
        for (int i=n-1; i>=0; i--){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
