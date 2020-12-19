#include <iostream>

using namespace std;

/*
    Да се намери максималният елемент във втората половина на масив от цели числа, които са от интервала [-2999; 2999].
    За целта да се състави подходяща функция.
*/

int maxInSecond(int *arr, int sz){
    int maxEl = -3000;

    for (int i=0; i<sz; i++){
        if (maxEl < *(arr + i)){
            maxEl = *(arr + i);
        }
    }

    return maxEl;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int maxEl;
    if (n%2 == 0)
        maxEl = maxInSecond(&arr[n/2], n/2);
    else
        maxEl = maxInSecond(&arr[n/2], (n/2 + 1));

    cout << maxEl << endl;

    delete [] arr;

    return 0;
}
