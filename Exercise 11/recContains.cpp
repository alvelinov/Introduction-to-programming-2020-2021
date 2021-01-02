#include <iostream>

using namespace std;

/*
    Да се напише рекурсивна функция, която проверява дали число се среща в масив.
*/

bool contains(int *a, int sz, const int &x)
{
    if(sz == 0)
        return false;

    return a[sz-1] == x || contains(a, sz - 1, x);
}

int main()
{
    int arr_size, num_to_find;
    cin >> arr_size >> num_to_find;

    int *arr = new(nothrow) int[arr_size];
    if (!arr){
        cout << "Error!" << endl;
        return -1;
    }

    for (int i=0; i<arr_size; i++){
        cin >> arr[i];
    }

    if (contains(arr, arr_size, num_to_find))
        cout << num_to_find << " is contained in the array" << endl;
    else
        cout << num_to_find << " is not contained in the array" << endl;

    delete [] arr;

    return 0;
}
