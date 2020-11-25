#include <iostream>

using namespace std;

/*
    Напишете програма, която прочита цяло число n, 0 < n <= 100. След това прочита n числа и ги записва в масив.
    Напишете функция, която проверява дали масивът е трион. Трион е масив, в който елементите се редуват по размер.
    Ако втория е по-голям от първия, то третия трябва да е по-малък от втория, после четвъртия да е по-голям от третия и т.н.
    Пример: 
    [3 12 8 9 3 22 15 48 4] е трион
    [3 12 8 7 3 22 15 48 4] не е трион
*/

bool isTrion(const int arr[], const int &sz){
    int len = sz-1;
    for (int i=1; i<len; i++){
        if (!(arr[i-1] < arr[i] && arr[i] > arr[i+1] || arr[i-1] > arr[i] && arr[i] < arr[i+1])){
            return false;
        }
    }
    
    return true;
}

int main()
{
    int n, arr[100];
    
    cin >> n;
    
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    if (isTrion(arr, n))
        cout << "Trion" << endl;
    else
        cout << "Not trion" << endl;
    
    return 0;
}
