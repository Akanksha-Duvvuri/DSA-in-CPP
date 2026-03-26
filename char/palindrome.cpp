#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
//TC - O(n)
bool palindrome(char str[], int n){
    int st = 0, end = n-1;
    while(st < end){
        if(str[st++] != str[end--]){
            cout << "Not a valid palindrome" <<endl;
            return false;
        }
    }
    cout << "valid palindrome"<< endl;
    return true;
}

int main(){
    char word[50];

    cout << "enter a word: ";
    cin >> word;
    
    palindrome(word, strlen(word));
    return 0;
}