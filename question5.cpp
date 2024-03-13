//find difference between ASCII values of two characters
#include<iostream>
using namespace std ;
int main (){
    int  difference ;
    char a , b ;
    cout << "Enter first character : ";
    cin >> a;
    cout << "Enter second character : ";
    cin >> b;
    int a1 = (int)a;
    int b1 = (int)b;
    if (a1 >= b1){
        difference = a1 - b1;
    }
    else {
        difference = b1 - a1;
    }
    cout << "Difference is : " << difference;
}