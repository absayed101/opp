#include<iostream>
using namespace std;
class Complex{
private:
    int real,image;
public:
    Complex(int r = 0,int i = 0){
        real = r;
        image = i;
    }
    Complex operator+(Complex const &obj){
        Complex temp;
        temp.real = real + obj.real;
        temp.image = image + obj.image;
        return temp;
    }
    void showComplex(){
        cout << real << " + i" << image << endl;
    }
};
int main(){
    Complex c1(2,3),c2(4,1),c3;
    c3 = c1 + c2;
    c3.showComplex();
    return 0;
}