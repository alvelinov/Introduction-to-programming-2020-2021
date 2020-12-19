#include <iostream>
#include <cstring>

using namespace std;

// Малка добавка преди началото на упражнението
int ourStrlen(const char * str){
    int counter = 0;
    while (*str++){
        counter++;
    }

    return counter;
}

/*
    На стандартния вход ви се подават две думи. Ако имат общ знак, да се изведе хоризонтално първата дума, а втората вертикално,
    като двете се пресичат в общия си знак (първият срещнат такъв).
    Пример: hello world
    Изход:
      w
      o
      r
    hello
      d
*/

int main()
{
    char str[201];
    cin.getline(str, 200);

    char *word1, *word2;
    word1 = str;
    int i;
    for (i=0; *str; i++, ++word1){
        if (*word1 == ' '){
            *word1 = '\0';
            break;
        }
    }
    word2 = ++word1;
    word1 = str;

    int offset = -1; // Kолко трябва да отместим дума 2
    int posIn2 = -1; // Позицията, на която сме срещнали символа в дума 2
    for (i=0; word1[i]; i++){
        for (int j=0; word2[j]; j++){
            if (word1[i] == word2[j]){
                offset = i;
                posIn2 = j;
                break;
            }
        }
        if (offset >= 0)
            break;
    }

    if (offset < 0){
        cout << "The strings have no matching characters!" << endl;
    } else {
        for (i=0; word2[i]; i++){
            if (i == posIn2){
                cout << word1 << endl;
                continue;
            }
            for (int j=0; j<offset; j++)
                cout << " ";
            cout << word2[i] << endl;
        }
    }

    return 0;
}
