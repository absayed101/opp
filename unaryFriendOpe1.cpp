//Prifix
#include <iostream>
using namespace std;
class Number {
private:
    int val;
public:
    Number(int v = 0){
        val = v;
    }
    friend Number& operator++(Number &obj);
    friend Number& operator--(Number &obj);
    void display() { 
        cout << "Value: " << val << endl; 
    }
};
Number& operator++(Number &obj){
    obj.val++;
    return obj; 
}
Number& operator--(Number &obj){
    obj.val--;
    return obj; 
}
int main() {
    Number n(10);
    cout << "Original "; 
    n.display();
    ++n;
    cout << "After ++n "; 
    n.display();
    --n;
    cout << "After --n "; 
    n.display();
    return 0;
}