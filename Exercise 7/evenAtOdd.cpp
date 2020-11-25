#include <iostream>

using namespace std;

/*
    Да се състави програма, чрез която се въвеждат n, 0 < n <= 100 естествени двуцифрени числа в едномерен масив.
    Програмата да изведе всички нечетни числа, намиращи се на четна позиция.
*/

void print(unsigned arr[], const int sz){
    for (int i=0; i<sz; i++){
        if ((i%2 == 0) && (arr[i] % 2 == 1)){
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int n;
    unsigned arr[100];

    cout << "enter n: \n";
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    print(arr, n);

    return 0;
}
