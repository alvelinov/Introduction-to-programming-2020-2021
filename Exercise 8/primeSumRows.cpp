#include <iostream>

using namespace std;

/*
    Въвежда се число N, 3 <= N <= 10 и след това се попълва квадратна матрица с размери NxN. Да се изведат номерата на
    всички редове, в които сумата на елементите е просто число.
    Пример:
    N = 4
    1 1 1 2
    2 2 2 1
    1 0 0 4
    3 2 2 3

    Изход:
    0
    1
    2
*/

bool isPrime(const int &num){
    if (num == 0 || num == 1)
        return false;

    int limit = num / 2;
    for (int i=2; i<limit; i++){
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    do {
        cin >> n;
    } while (n < 3 || n > 10);

    int arr[10][10];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++){
        int sumRow = 0;

        for (int j=0; j<n; j++){
            sumRow += arr[i][j];
        }

        if (isPrime(sumRow)){
            cout << i << endl;
        }
    }

    return 0;
}
