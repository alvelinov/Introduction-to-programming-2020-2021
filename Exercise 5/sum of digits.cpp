#include <iostream>

using namespace std;

/*
    Напишете функция с аргументи num(цяло число) и sum, която записва в sum сборът от цифрите на num.
    Накрая ползвайте функцията с някакъв примерен вход. Изберете подходящи типове за аргументите и за функцията.
*/

void func(int num, int &sum){
    sum = 0;
    if (num < 0)
        num = -num;
    while (num){
        sum += num % 10;
        num /= 10;
    }
}

int main()
{
    int num, sum;
    cout << "Enter a number: ";
    cin >> num;

    func(num, sum);
    cout << "The sum of its digits is: " << sum << endl;
    
    return 0;
}
