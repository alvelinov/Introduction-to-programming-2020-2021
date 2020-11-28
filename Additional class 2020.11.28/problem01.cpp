#include <iostream>

using namespace std;

/*
    Да се напише функция, която приема масив от реални числа и връща сумата на най-големия елемент,
    най-малкия елемент и средното аритметично на всички елементи. За вход да се подава число n, следвано от n на брой числа,
    които да се запишат в масива.
*/

double sumElements(double arr[], unsigned sz){
    double minEl = arr[0], maxEl = arr[0];
    double sum=arr[0];

    for (unsigned i=1; i<sz; i++){
        sum += arr[i];

        if (arr[i] > maxEl)
            maxEl = arr[i];

        if (arr[i] < minEl)
            minEl = arr[i];

    }

    return minEl + maxEl + (sum/sz);
}

int main()
{
    unsigned n;
    double arr[1000];

    do {
        cin >> n;
    } while (n > 1000);


    for (unsigned i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << sumElements(arr, n);

    return 0;
}
