#include <iostream>
#include <cmath>

using namespace std;
using std::cout;
using std::cin;

double power(double base, int exponent){
    int result = 1;
    
    for(int i=0;i<exponent;i++){
        result = result * base;

    }
    return result;
}

double div(double x, double y){
    int divis = x/y;
}

int sum(int x, int y){
    int sum = x+y;
}

int sub(int x, int y){
    int sub = x - y;
}

double squareroot(double x){
    double sq = sqrt(x);
}

int multiplication(int x, int y){
    int mult = x * y;
}

void printMULT(int x, int y){
    int myMult = x * y;
    cout << "The multiplication of " << x << " and " << y << " is ";
    cout << myMult;
}

void printSQRT(double x){
    double sqr = squareroot(x);
    cout << "The square root of " << x << " is " << sqr;
}

void printDiv(double x, double y){
    float division = div(x,y);
    cout << "The division of " << x << " and " << y << " is equal to ";
    cout << division;
}

void printSub(int x, int y){
    int subt = sub(x,y);
    cout << "The subtraction of " << x << " and " << y << " is equal to ";
    cout << subt;
}

void printSum(int x, int y){
    int su = sum(x,y);
    cout << "The sum of " << x << " and " << y << " is equal to ";
    cout << su;
}

void printPower(double base, int exponent){
    
    double myPower = power(base, exponent);
    cout << "The base as " << base << " and exponent as " << exponent << " is equal to ";
    cout << myPower;
}

int main(){
    
    double firstnum;
    int secondnum;
    
    cout << "Choose an number: ";
    cin >> firstnum;
    cout << "Choose another number (different): ";
    cin >> secondnum;
    
    if(firstnum==secondnum){
        cout << "Is the same! Ignoring...";
        cout << "\n";
        return 0;
    }
    cout << "\n";

    printPower(firstnum, secondnum);
    cout << "\n";
    printSum(firstnum, secondnum);
    cout << "\n";
    printSub(firstnum, secondnum);
    cout <<"\n";
    printDiv(firstnum, secondnum);
    cout << "\n";
    printSQRT(firstnum);
    cout << "\n";
    printSQRT(secondnum);
    cout << "\n";
    printMULT(firstnum, secondnum);
    return 0;
}
