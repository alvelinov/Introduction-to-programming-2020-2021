#include <iostream>

using namespace std;

/*
    Да се напише рекурсивна функция, която проверява дали число се съдържа в редицата на фибоначи.
*/

bool fibContains(int first, int second, const int &x)
{
    if(x <= first)
        return x == first;
    return fibContains(second, first+second, x);
}

bool fibContains(int &x)
{
    return fibContains(0, 1, x);
}

int main()
{
    int num;
    cin >> num;

    if(fibContains(num))
        cout << num << " is in the Fibonacci sequence" << endl;
    else
        cout << num << " is not in the Fibonacci sequence" << endl;
    return 0;
}
