#include <iostream>
using namespace std;
float Pow( float x, int y){

    float p = 1;
    int i ;
    for (i = 1; i <= y ; i++)
        p *= x;
    
    cout<<p;
    return p;
}
int main(){
    Pow(10,20);
}