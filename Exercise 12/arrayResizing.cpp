#include <iostream>

using namespace std;

/*
    Да се напише функция за намаляване на размера на динамичен масив съдържащ n на брой цели числа и имащ капацитет capacity,
    където capacity и n са цели положителни числа като намаляването на размера на масива (capacity) да се извършва,
    когато броят на елементите в масива е по - малък от 25 % от капацитета му и друга функция, която увеличава два пъти
    размера (capacity) на динамичния масив.
*/

void decreaseCapacity(int *&arr, int &size, int &capacity){
    if (size < capacity/4){
        capacity /= 2;

        int *tmp = new(nothrow) int[capacity];
        if (!tmp){
            cout << "Couldn't make the array smaller!\n";
            return;
        }

        for (int i=0; i<size; i++){
            tmp[i] = arr[i];
        }

        delete [] arr;
        arr = tmp;
    }
}

void increaseCapacity(int *&arr, int &size, int &capacity){
    capacity *= 2;

    int *tmp = new(nothrow) int[capacity];
    if (!tmp){
        cout << "Couldn't make the array bigger!\n";
        return;
    }

    for (int i=0; i<size; i++){
        tmp[i] = arr[i];
    }

    delete [] arr;
    arr = tmp;
}

int main()
{
    int size = 1;
    int capacity = 8;
    int *arr = new(nothrow) int[capacity];
    if (!arr){
        cout << "Couldn't allocate the array!\n";
        return -1;
    }

    arr[0] = 3;

    increaseCapacity(arr, size, capacity);

    cout << " capacity = " << capacity << endl;

    delete [] arr;

    return 0;
}
