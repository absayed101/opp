#include<iostream>
using namespace std;
class Complex{
private:
    int real,imag;
public:
    Complex(int r = 0,int i = 0){
        real = r;
        imag = i;
    }
    Complex operator+(Complex const &obj){
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    Complex operator-(Complex const &obj){
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }
    void showComplex(){
        cout << real << " + i" << imag << endl;
    }
};
int main(){
    Complex c1(2,4),c2(4,3),c3(6,9),c4;
    c4 = c1 + c2;
    c4.showComplex();
    c4 = c3 - c1;
    c4.showComplex();
    return 0;
}
