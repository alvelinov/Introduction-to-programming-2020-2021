#include <iostream>
#include <cstring>

using namespace std;

/*
    Да се състави програма, която прочита текст (до 511 символа) и извежда списък с думите в него, по една на ред, сортиран
    лексикографски. Приемаме, че думи са последователности от символи, разделени с по един space. Да се задели точно толкова
    памет за думите, колкото е необходима.
*/

int wordCount(char *text){
    int wordsNum = 1;

    while (*text){
        if (*text == ' ')
            wordsNum++;
        ++text;
    }

    return wordsNum;
}

char** tokenize(char *text){
    int wordsNum = wordCount(text);

    char **words = new(nothrow) char*[wordsNum];
    if (!words){
        cout << "Couldn't allocate memory!";
        return nullptr;
    }
    char *last = text;
    char *next = text;
    int wordCounter = 0;
    while(1){
        int currWordLen = 0;
        while (*next != ' ' && *next != '\0'){
            currWordLen++;
            ++next;
        }

        words[wordCounter] = new(nothrow) char[currWordLen+1];
        if (!words[wordCounter]){
            cout << "Couldn't allocate memory!";
            for (int i=0; i<wordCounter; i++){
                delete [] words[i];
            }
            delete [] words;
            return nullptr;
        }

        for (int i=0; i<currWordLen; i++){
            words[wordCounter][i] = *last;
            ++last;
        }

        words[wordCounter][currWordLen] = '\0';

        ++wordCounter;
        if (*next == '\0'){
            break;
        } else {
            ++last;
            ++next;
        }
    }

    return words;
}

int main()
{
    char text[512];
    cin.getline(text, 511);

    char **words = tokenize(text);
    if (!words){
        return -1;
    }

    int wordsNum = wordCount(text);

    // sorting
    for (int i=0; i < wordsNum-1; i++){
        for (int j=0; j < wordsNum-i-1; j++){
            if (strcmp(words[j], words[j+1]) > 0){
                char *tmp = words[j];
                words[j] = words[j+1];
                words[j+1] = tmp;
            }
        }
    }

    // printing
    for (int i=0; i<wordsNum; i++){
        cout << words[i] << endl;
    }

    for (int i=0; i<wordsNum; i++){
        delete [] words[i];
    }
    delete [] words;

	return 0;
}
