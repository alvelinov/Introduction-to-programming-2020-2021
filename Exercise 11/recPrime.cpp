#include <iostream>
#include <cmath>

using namespace std;

/*
    Да се напише рекурсивна функция, която проверява дали число е просто. Ако не е просто,
    да се изведат на екрана простите му множители (друга рекурсивна функция).
*/

bool isPrime(const int &num, int check)
{
    if(check == 1)
        return true;

    if(num%check == 0)
        return false;

    return isPrime(num, check-1);
}

bool isPrime(const int &num)
{
    return isPrime(num, sqrt(num));
}

int simpleMultipliers(int num)
{
    if(isPrime(num) || num == 1)
        return num;
    int limit = sqrt(num);
    for(int i = 2; i <= limit; i++)
    {
        if(isPrime(i) && num % i == 0)
        {
            cout << i << " ";
            return simpleMultipliers(num / i);
        }
    }
}
int main()
{
    int num;
    cin >> num;

    if (num <= 0){
        cout << "No non-positive numbers allowed!" << endl;
        return 0;
    }

    if (!isPrime(num))
        cout << simpleMultipliers(num) << endl;
    else if (num > 1)
        cout <<  num << " is prime" << endl;

    return 0;
}
