#include<iostream>
using namespace std;
class Arithmatic{
private:
    int x;
public:
    void input(){
        cout << "Enter  a number : ";
        cin >> x;
    }
    Arithmatic operator+(Arithmatic const &obj){
        Arithmatic A;
        A.x = x + obj.x;
        return A;
    }
    void print(){
        cout << "The sun of two numbers : " << x << endl;
    }
};
int main(){
    Arithmatic a,b,res;
    a.input();
    b.input();
    res = a + b;
    res.print();
    return 0;
}