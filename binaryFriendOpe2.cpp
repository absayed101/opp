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
    friend Coord operator+(int i,Coord &obj);
    friend Coord operator+(Coord &obj,int i);
    friend Coord operator-(int i,Coord &obj);
    friend Coord operator-(Coord &obj,int i);
    void display(){
        cout <<"Abscissa : " << x <<endl;
        cout <<"Ordinate : " << y <<endl;
    }
};
Coord operator+(int i,Coord &obj){
    Coord temp;
    temp.x = i + obj.x;
    temp.y = i + obj.y;
    return temp;
}
Coord operator+(Coord &obj,int i){
    Coord temp;
    temp.x =  obj.x + i;
    temp.y = obj.y + i;
    return temp;
}
Coord operator-(int i,Coord &obj){
    Coord temp;
    temp.x = i - obj.x;
    temp.y = i - obj.y;
    return temp;
}
Coord operator-(Coord &obj,int i){
    Coord temp;
    temp.x = obj.x - i;
    temp.y = obj.y - i;
    return temp;
}
int main(){
    Coord c1(2,3),c2(5,2),c3;
    c3 = 5 + c2;
    c3.display();
    c3 = c1 -99;
    c3.display();
    return 0;
}