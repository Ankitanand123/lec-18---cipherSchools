#include <iostream>
using namespace std;
// void Printhi(){
//     cout<<"Hi"<<endl;
//     return;
// }
// int sum(int a, int b){
//     int c = a+b;
//     cout<<"The value of c is: "<<c<<endl;
//     return c;
// }
void swap(int &a,int &b){
    int c;
    c = a;
    a = b;
    b = c;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    return;

}
void fun(int &a,int b){
     a = 9999;
     b = 999;

    cout<<"the values of fun are "<<a<<" "<<b<<endl;
}

int main(){
    // Printhi();
    int a,b;
    a = 4; 
    b= 60;
    // int c =100;

    // int d ;
    // d = sum(a,b);
    // cout<<"The sum is "<<d<<endl;
    // cout<<"The value of c is: "<<c;
    fun(a,b);
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    return 0;

}
