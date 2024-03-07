#include <iostream>
using namespace std;

typedef struct Word_ {
    string w;
    int count;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }
        for(find=i=0;i<last_word;i++){
            if(data[i].w == input)
            {
                data[i].count++;
                find = 1;    
            }
        }
        if(find == 0){
            data[last_word].w = input;
            data[last_word].count = 1;
            ++last_word;
        }

        if(last_word == 20) break;
    }

    cout << "Output:" << endl;
    
    for(i=0;i<last_word;i++){
        cout << data[i].w << " = " << data[i].count << endl;
    }
    

    return 0;
}