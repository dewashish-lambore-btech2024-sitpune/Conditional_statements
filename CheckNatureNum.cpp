#include<iostream>
using namespace std;

string checkSign(int num) {
    if(num > 0) return "positive";
    else if(num < 0) return "negative";
    else return "zero";
}

int main(){
    int x, y;
    
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;
    
    cout << "\nResults:" << endl;
    cout << "x (" << x << ") is " << checkSign(x) << endl;
    cout << "y (" << y << ") is " << checkSign(y) << endl;
    
    return 0;
}
