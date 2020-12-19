#include <iostream>

using namespace std;

/*
    Да се състави функция, която сортира първата половина на масив във възходящ ред, а втората му половина – в низходящ.
*/

void weirdSort(int * const arr, int sz){
    int limit1 = sz/2;
    for (int i=0; i<=limit1; i++){
        for(int k=i+1; k<=limit1; k++){
            if (arr[i] > arr[k]){
                int tmp = arr[i];
                arr[i] = arr[k];
                arr[k] = tmp;
            }
        }
    }

    for (int i=limit1 + 1; i<sz; i++){
        for(int k=i + 1; k<sz; k++){
            if (arr[i] < arr[k]){
                int tmp = arr[i];
                arr[i] = arr[k];
                arr[k] = tmp;
            }
        }
    }

    for (int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }

}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    weirdSort(arr, n);

    return 0;
}
