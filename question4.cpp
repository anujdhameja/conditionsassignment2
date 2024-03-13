//volume of cylinder by taking height and radius as input 
#include<iostream>
using namespace std ;
int main (){
    int r , h ;
    cout << "Enter the radius of the cylinder : ";
    cin >> r;
    cout << "Enter the height  of the cylinder : ";
    cin >> h ;
    float volume , pi = (22 / 7.0);
    if (r<0  || h <0) {
        cout << "\nThe values cannot be negative.\n" ;
    } else {
        volume = pi * r * r * h  ;
    }
    cout << "Volume is : " << volume ;
}