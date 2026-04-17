#include<iostream>
using namespace std;
class Array{
private:
    int arr[5];
public:
    Array(){
        for (int i = 0;i < 5;i++){
            arr[i] = i + 2;
        }
    }
    int& operator[](int i){ //return by reference na dile ki hobe? 
        return arr[i];
    }
};
int main(){
    Array arr;
    cout << arr[2]<<endl;
    arr[2] = 5;
    cout << arr[2]<<endl;
    return 0;
}