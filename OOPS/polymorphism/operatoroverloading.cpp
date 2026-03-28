#include<iostream>
#include<string>
using namespace std;

//SAME NAME OF THE OPERATOR, DIFFERENT USAGE 

class Complex {
    int real;
    int img;

public:
    Complex(int r, int i){
        real = r;
        img = i;
    }

    void show() {
        cout << real << " + " << img << "i" << endl;
    }

//operator overloading
    Complex operator + (Complex &c2) {
        int resReal = this->real + c2.real; //this points to c1
        int resImg = this->img + c2.img;
        Complex c3(resReal, resImg);
        return c3;
    }

    Complex operator - (Complex &c2) {
        int resReal = this->real - c2.real; //this points to c1
        int resImg = this->img - c2.img;
        Complex c4(resReal, resImg);
        return c4;
    }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);

    c1.show();
    c2.show();

    Complex c3 = c1 + c2;
    c3.show();

    Complex c4 = c1 - c2;
    c4.show();
    return 0;
}