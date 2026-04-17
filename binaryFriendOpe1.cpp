#include<iostream>
using namespace std;
class Coord{
private:
    int x,y;
public:
    Coord(int a = 0,int b = 0){
        x = a;
        y = b;
    }
    friend Coord operator+(Coord &obj1,Coord &obj2);
    friend Coord operator-(Coord &obj1,Coord &obj2);
    void display(){
        cout <<"Abscissa : " << x <<endl;
        cout <<"Ordinate : " << y <<endl;
    }
};
Coord operator+(Coord &obj1,Coord &obj2){
    Coord temp;
    temp.x = obj1.x + obj2.x;
    temp.y = obj1.y + obj2.y;
    return temp;
}
Coord operator-(Coord &obj1,Coord &obj2){
    Coord temp;
    temp.x = obj1.x - obj2.x;
    temp.y = obj1.y - obj2.y;
    return temp;
}
int main(){
    Coord c1(2,3),c2(5,2),c3;
    c3 = c1 + c2;
    c3.display();
    c3 = c1 - c2;
    c3.display();
    return 0;
}