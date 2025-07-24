#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x,y;
    const double pi = 3.14;
    cout << "Enter the raidus of the circle";
    cin >> x;
    y = pi * pow(x,2);
    cout << "The radius of the circle: " << y;


    return 0;
}