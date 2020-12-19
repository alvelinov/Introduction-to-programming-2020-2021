#include <iostream>
#include <ctype.h>

using namespace std;

/*
    На стандартния вход ви се подава изречение до 200 символа. Преобразувайте го така, че първата буква да е главна,
    а всички останали да се редуват (малка, главна, малка, ...).
    Пример: This is a serious sentence.
    Изход:  ThIs Is A sErIoUs SeNtEnCe.
*/

int main()
{
    char str[201];
    cin.getline(str, 200);

    if (islower(*str)){
        *str = toupper(*str);
    }

    bool wasUpper = true;
    int cnt = 1;

    while (str[cnt] != '\0'){
        if ( !islower(str[cnt]) && !isupper(str[cnt]) ){
            cnt++;
            continue;
        }

        if (wasUpper){
            if ( isupper(str[cnt]) )
                str[cnt] = tolower(str[cnt]);

            wasUpper = false;
        } else {
            if( islower(str[cnt]) )
                str[cnt] = toupper(str[cnt]);

            wasUpper = true;
        }
        cnt++;
    }

    cout << str << endl;

    return 0;
}
