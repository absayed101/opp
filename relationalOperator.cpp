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
    int operator==(const Coord &obj){
        return x == obj.x && y == obj.y;
    }
    int operator&&(const Coord &obj){
        return (x && obj.x) && (y && obj.y);
    }
};
int main(){
    Coord c1(2,5),c2(3,4),c3(2,5),c4(0,0);
    (c1 == c2) ? cout<<"c1 = c2\n" : cout <<"c1 != c2\n";
    (c1 == c3) ? cout<<"c1 = c3\n" : cout <<"c1 != c3\n";
    (c1 && c3) ? cout<<"c1 & c3 is true\n" : cout <<"c1 & c3 false\n";

    return 0;
}