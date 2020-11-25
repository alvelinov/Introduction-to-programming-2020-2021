#include <iostream>

using namespace std;

/*
    Подават ви се елементите на 3х3 матрица, ред по ред. Изведете дали е магически квадрат.
*/

int main()
{
    int arr[3][3];

    for (int i=0; i<3; i++){
        for (int k=0; k<3; k++){
            cin >> arr[i][k];
        }
    }

    int sum = 0, tmp = 0;

    for (int i=0; i<3; i++){
        sum += arr[i][i];
        tmp += arr[i][2-i];
    }
    if (tmp != sum){
        cout << "Not magic!\n";
        return 0;
    }

    for (int i=0; i<3; i++){
        int tmp2 = 0;
        tmp = 0;
        for (int k=0; k<3; k++){
            tmp += arr[i][k];
            tmp2 += arr[k][i];
        }
        if(tmp != sum || tmp2 != sum){
            cout << "Not magic!\n";
            return 0;
        }
    }

    cout << "It's magic!" << endl;

    return 0;
}
