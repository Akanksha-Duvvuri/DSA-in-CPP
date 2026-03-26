#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void rev(char word[], int n){
    for(int i=0; i<n/2; i++){
        char temp = word[i];
        word[i] = word[n-1-i];
        word[n-1-i] = temp;
    }
}


//TC - O(n)
void reverse(char word[], int n){
    int st = 0, end = n-1;
    while(st < end){
        swap(word[st], word[end]);
        st++;
        end--;
    }
}

int main(){
    char word[] = "hello";

    // rev(word, strlen(word));
    // cout << word << endl;
    
    reverse(word, strlen(word));
    cout << word << endl;
    return 0;
}