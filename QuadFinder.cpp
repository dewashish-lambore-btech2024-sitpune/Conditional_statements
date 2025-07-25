#include<iostream>
using namespace std;

int main(){
    double x, y;
    
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;
    
    if(x == 0 && y == 0){
        cout << "Point is at Origin" << endl;
    }
    else if(x == 0){
        cout << "Point lies on Y-axis" << endl;
    }
    else if(y == 0){
        cout << "Point lies on X-axis" << endl;
    }
    else if(x > 0 && y > 0){
        cout << "1st Quadrant" << endl;
    }
    else if(x < 0 && y > 0){
        cout << "2nd Quadrant" << endl;
    }
    else if(x < 0 && y < 0){
        cout << "3rd Quadrant" << endl;
    }
    else{
        cout << "4th Quadrant" << endl;
    }
    
    return 0;
}
