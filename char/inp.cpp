#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char word[30];

    // cout << "enter your word: ";  
    // cin >> word; //ignores all the words after the whitespace

    char sentence[50];

    cout << "enter a sentence: ";
    cin.getline(sentence, 50);

    cout << "Your sentence is: " << sentence << endl;
    cout << "length: " << strlen(sentence) << endl;

    return 0;
}