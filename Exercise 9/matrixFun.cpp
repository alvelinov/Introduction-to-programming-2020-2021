#include <iostream>

using namespace std;

/*
    Да се въведе от стандартния вход масив с размери NxN. Ако сумата на елементите в главния диагонал е четна, да се
    изведат индексите на всички редове, в които сумата на елементите е просто число. Ако сумата на елементите в обратния
    диагонал е нечетна, да се изведат индексите на всички колони, в които сумата на елементите е нечетно число.
*/

bool isPrime(int num){
    if (num == 0 || num == 1){
        return false;
    }
    if (num < 0)
       return false;

    int limit = num/2;
    for (int i=2; i<limit; i++){
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cout << "Number of rows and columns: ";
    cin >> n;

    int **matrix = new int*[n];
    for (int i=0; i<n; i++){
        matrix[i] = new int[n];
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }

    int sumMainDiag = 0;
    for (int i=0; i<n; i++){
        sumMainDiag += matrix[i][i];
    }

    if (sumMainDiag % 2 == 0){
        cout << "Ids of rows with a prime sum: ";
        for (int i=0; i<n; i++){
            int sum = 0;
            for (int j=0; j<n; j++){
                sum += matrix[i][j];
            }
            if (isPrime(sum)){
                cout << i << " ";
            }
        }
        cout << endl;
    }

    int sumSecondDiag = 0;
    for (int i=0; i<n; i++){
        sumSecondDiag += matrix[i][n-i-1];
    }

    if (sumSecondDiag % 2 == 1){
        cout << "Ids of columns with an odd sum: ";
        for (int i=0; i<n; i++){
            int sum = 0;
            for (int j=0; j<n; j++){
                sum += matrix[j][i];
            }
            if (sum % 2 == 1){
                cout << i << " ";
            }
        }
        cout << endl;
    }


    for (int i=0; i<n; i++){
        delete [] matrix[i];
    }
    delete [] matrix;

    return 0;
}
