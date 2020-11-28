#include <iostream>

using namespace std;

/*
  Въвеждат се n реални числа. Да се запишат в масив и да се изкарат в обратен ред (без да си разменят местата в самия масив).
*/

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

    for (int i = n-1; i >= 0; i--){
        cout << arr[i] << endl;
    }


    return 0;
}
