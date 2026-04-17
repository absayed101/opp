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
    Number& operator++() { //without & is OK but...
        ++val;
        return *this;
    }
    Number& operator--() {
        --val;
        return *this;
    }
    void display() { 
        cout << "Value: " << val << endl; 
    }
};
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