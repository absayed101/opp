//Postfix
#include <iostream>
using namespace std;
class Number {
private:
    int val;
public:
    Number(int v = 0){
        val = v;
    }
    Number operator++(int) { //always without &
        Number temp = *this; 
        val++;   
        return temp;
    }

    Number operator--(int) {
        Number temp = *this;
        val--;
        return temp;
    }
    void display(){ 
        cout << "Value: " << val << endl; 
    }
};
int main() {
    Number n(10);
    cout << "Original "; 
    n.display();
    Number old = n++; 
    cout << "After n++ "; 
    old.display(); 
    cout << "Current n "; 
    n.display();
    n--; 
    cout << "After n-- "; 
    n.display();

    return 0;
}
