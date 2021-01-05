#include <iostream>

using namespace std;

/*
    Да се напише рекурсивна функция, която проверява дали едно число е палиндром.
*/

bool isPalindrome(long long num, long long factor){
    int leftMost, rightMost;
    if (num / 10 > 0){
        leftMost = num / factor;
        rightMost = num % 10;

        if (leftMost == rightMost){
            num %= factor;
            return isPalindrome(num / 10, factor / 100);
        } else {
            return false;
        }
    } else {
        return true;
    }
}

int main()
{
    cout << isPalindrome(1221, 1000) << endl;
    return 0;
}
