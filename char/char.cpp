#include<iostream>
#include<cstring>
using namespace std;

//diff ways of defining a char array
int main(){
    // char work[] = "code"; //storing a string literal inside a char array - and automatically, a null char also gets stored
    
    // char work[5] = "code";

    // char work[] = {'c', 'o', 'd', 'e', '\0'};

    char work[50] = {'c', 'o', 'd', 'e', '\0'};  //garbage values get stored in the rest of the values

    cout << strlen(work) << endl; //doesnt include null char
    cout << work << endl;
    return 0;
}