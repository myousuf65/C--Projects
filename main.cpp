//
//  main.cpp
//  Lec1
//
//  Created by Yousuf Muhammad on 20/1/2022.
//

#include <iostream>
using namespace std;
//--------------------------------------------------
int DAD(int a,int b){
return a + b;
}

int addition(){
    int int1;
    int int2;
    
    cout<<""<< endl;
    string instruction1 = "Please Enter your first integer: " ;
    cout<< instruction1<< endl;
    cin >>int1;
    
    string instruction2 = "Please input the second integer: " ;
    cout<< instruction2 <<endl;
    cin >> int2;
    
    int sum = DAD(int1, int2);
    cout<< "The sum is " <<sum << endl;;
    cout<< ""<< endl ;
    cout<< ""<< endl ;
    return 0;
    }
//--------------------------------------------------
int SAB(int a,int b){
return a - b;
}

int subtraction(){
    int int1;
    int int2;
    
    cout<<""<< endl;
    string instruction1 = "Please Enter your first integer: " ;
    cout<< instruction1<< endl;
    cin >>int1;
    
    string instruction2 = "Please input the second integer: " ;
    cout<< instruction2 <<endl;
    cin >> int2;
    
    int difference = SAB(int1, int2);
    cout<< "The difference is " <<difference << endl;;
    cout<< ""<< endl ;
    cout<< ""<< endl ;
    return 0;
    }
//--------------------------------------------------
int GAB(int a,int b){
return a / b;
}

int division(){
    int int1;
    int int2;
    
    cout<<""<< endl;
    string instruction1 = "Please Enter your first integer: " ;
    cout<< instruction1<< endl;
    cin >>int1;
    
    string instruction2 = "Please input the second integer: " ;
    cout<< instruction2 <<endl;
    cin >> int2;
    
    int quotient = GAB(int1, int2);
    cout<< "The quotient is " << quotient << endl;;
    cout<< ""<< endl ;
    cout<< ""<< endl ;
    return 0;
    }
//--------------------------------------------------
int NAB(int a,int b){
return a * b;
}

int multiplication(){
    int int1;
    int int2;
    
    cout<<""<< endl;
    string instruction1 = "Please Enter your first integer: " ;
    cout<< instruction1<< endl;
    cin >>int1;
    
    string instruction2 = "Please input the second integer: " ;
    cout<< instruction2 <<endl;
    cin >> int2;
    
    int product = NAB(int1, int2);
    cout<< "The product is " << product << endl;;
    cout<< ""<< endl ;
    cout<< ""<< endl ;
    return 0;
    }
//--------------------------------------------------
int main() {
    
    bool k = true;
    
    while (k){
        cout<< "Please select one of the following option"<< endl;
        cout<< "[1]Summation" << endl;
        cout<< "[2]Deduction" << endl;
        cout<< "[3]Division" << endl;
        cout<< "[4]Multiplication" << endl;
        cout<< "[5]Exit" <<endl;
        
        int input;
        cout<< "Please Enter your input: " ;
        cin >>input;
        
        switch (input) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                division();
                break;
            case 4:
                multiplication();
                break;
            case 5:
                k = false;
            default:
                break;
        }
    }
        return 0;
    
}
