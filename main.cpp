#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int encryptLogic(string originalWord, string encryptedOriginalWord) {
    int shift = int(encryptedOriginalWord[0]) - int(originalWord[0]);
    return shift;
}

string encryptWord(int shift, string newWordToEncrypt) {
    string encryptedNewWord;
    
    for(long unsigned int i=0; i < newWordToEncrypt.length() ; i++) {
        int updatedShift;
        char letter = (( newWordToEncrypt.at(i) - 'A' + shift + 26) % 26) + 'A';
        
        encryptedNewWord = encryptedNewWord + letter;
    }
    return encryptedNewWord;
}

int main() {
    string originalWord;
    string encryptedOriginalWord;
    string newWordToEncrypt;
    
    cin >> originalWord >> encryptedOriginalWord >> newWordToEncrypt;
    
    int shift = encryptLogic(originalWord, encryptedOriginalWord);
    string encryptedNewWord = encryptWord(shift, newWordToEncrypt);
    
    cout << encryptedNewWord << endl;
    return 0;
}
