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
    friend Number operator++(Number &obj,int); //always without &

    friend Number operator--(Number &obj,int);
    void display(){ 
        cout << "Value: " << val << endl; 
    }
};
Number operator++(Number &obj,int){
    Number temp = obj;
    obj.val++;
    return temp;
}
Number operator--(Number &obj,int){
    Number temp = obj;
    obj.val--;
    return temp;
}
int main() {
    Number n(10);
    cout << "Original  : "; 
    n.display();
    Number old = n++; 
    cout << "After n++ : "; 
    old.display(); 
    cout << "Current n : "; 
    n.display();
    n--; 
    cout << "After n-- : "; 
    n.display();

    return 0;
}
