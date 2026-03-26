#include<iostream>
#include<string>
using namespace std;

bool isEqual(string str1, string str2){
    if(str1.length() != str2.length()){
        cout << "The strings are not of equal length";
        return false;
    }
    char diffchar1 = '\0', diffchar2 = '\0';
    int diff = 0;

    for(int i = 0; i < str1.length(); i++){
        if(str1[i] != str2[i]){
            diff++;
            if(diff == 1){
                diffchar1 = str1[i];
                diffchar2 = str2[i];
            } else if(diff == 2){ //2 positions where strings differ. k and b
                if(str1[i] != diffchar2 || str2[i] != diffchar1){
                    cout << "not equal";
                    return false;
                }
            } else {
                cout << "not equal";
                return false; // more than 2 mismatches
            }
        }
    }
    if(diff == 1){
        cout << "false";
        return false;
    }

    cout << "true";
    return true;
}

int main(){
    string str1 = "bank";
    string str2 = "kanb";
    
    isEqual(str1, str2);
    return 0;
}