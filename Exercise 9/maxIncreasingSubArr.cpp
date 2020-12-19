#include <iostream>

using namespace std;

/*
    Да се съставят функция, която намира максималния възходящ под-масив на подаден на входа масив от естествени числа,
    и друга функция, която извежда под-масива.
*/

void print(const unsigned * const arr, unsigned sz){
    for (unsigned i=0; i<sz; i++){
        cout << *(arr + i) <<  " ";
    }
}

void findMaxSubArr(unsigned *arr, unsigned sz){
    unsigned startId = 0, maxStartId = 0;
    unsigned subCount = 1, maxSubSz = 0;

    for (unsigned i=1; i<sz; i++){
        if (arr[i-1] < arr[i]){
            subCount++;
        } else {
            if (subCount > maxSubSz){
                maxSubSz = subCount;
                maxStartId = startId;
            }
            subCount = 1;
            startId = i;
        }
    }
    if (subCount > maxSubSz){
        maxSubSz = subCount;
        maxStartId = startId;
    }

    print(&arr[maxStartId], maxSubSz);
}

int main()
{
    unsigned n;
    cin >> n;

    unsigned *arr = new unsigned[n];

    for (unsigned i=0; i<n; i++){
        cin >> *(arr + i);
    }

    findMaxSubArr(arr, n);

    delete [] arr;

    return 0;
}
