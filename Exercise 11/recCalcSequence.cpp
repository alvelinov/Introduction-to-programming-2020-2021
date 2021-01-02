#include <iostream>

using namespace std;

/*
    Да се напише рекурсивна функция, която пресмята 1 + 1/2 + 1/3 + ... + 1/n.
*/

double sumSequence(int n)
{
    if(n == 1)
        return 1;
    return 1.0 / n + sumSequence(n - 1);
}

int main()
{
    cout << sumSequence(3) << endl;
}

