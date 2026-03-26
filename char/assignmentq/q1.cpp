#include<iostream>
#include<string>
using namespace std;

void vowel(string str){
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    cout << count << endl;
}

int main(){
    string str;

    cout << "enter a string: ";
    getline(cin, str);

    vowel(str);
    return 0;
}