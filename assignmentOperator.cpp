#include<iostream>
using namespace std;
class Marks{
private:
    int english;
    int math;
public:
    Marks(int e = 0,int m = 0){
        english = e;
        math = m;
    }
    Marks& operator=(Marks &m){ //No copy
        if(this != &m){ //avoid self-assignment
            english = m.english;
            math = m.math;
        }
        return m;
    }
    void display(){
        cout << "English : " << english << endl;
        cout << "Math : " << math << endl;
    }
};
int main(){
    Marks m1 (20,19),m2(12,4);
    m1.display();
    m2.display();
    m1 = m2;
    m1.display();
    return 0;

}