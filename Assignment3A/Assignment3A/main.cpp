//COEN 243, Assignment 3, week 8
//Souleymane Camara, 40183807
//Program that stores bonuses in an array and counts depending on the range

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    
    int counterA = 0, counterB = 0, counterC = 0, counterD = 0, counterE = 0, counterF = 0, counterG = 0, counterH = 0, counterI = 0;
    int employee, i;
    int salary, wage;
    int first = 1;
    
    cout << "How many employees is there ";
    cin >> employee;
    
    int bonus[employee];
    
    for (i = 0; i < employee; i++) {
       
        
        cout << "Enter the " << first << " salary:";
        cin >> salary;
        first++;
        
        
        wage = ((salary * 9) /100 ) + 200;
        
        if (wage >= 200 && wage <= 299){
            ++counterA;
            cout << " A" << endl;
        }
        if (wage >= 300 && wage <= 399){
            ++counterB;
            cout << " B" << endl;
        }
        if (wage >= 400 && wage <= 499){
            ++counterC;
            cout << " C" << endl;
        }
        if (wage >= 500 && wage <= 599){
            ++counterD;
            cout << " D" << endl;
        }
        if (wage >= 600 && wage <= 699){
            ++counterE;
            cout << " E" << endl;
        }
        if (wage >= 700 && wage <= 799){
            ++counterF;
            cout << " F" << endl;
        }
        if (wage >= 800 && wage <= 899){
            ++counterG;
            cout << " G" << endl;
        }
        if (wage >= 900 && wage <= 999){
            ++counterH;
            cout << " H" << endl;
        }
        if (wage >= 1000){
            ++counterI;
            cout << " I" << endl;
        }
        
        bonus[i] = wage;
        cout << wage << endl;
    }
        cout <<  "A." << setw(3) << counterA << endl;
        cout <<  "B." << setw(3) << counterB << endl;
        cout <<  "C." << setw(3) << counterC << endl;
        cout <<  "D." << setw(3) << counterD << endl;
        cout <<  "E." << setw(3) << counterE << endl;
        cout <<  "F." << setw(3) << counterF << endl;
        cout <<  "G." << setw(3) << counterG << endl;
        cout <<  "H." << setw(3) << counterH << endl;
        cout <<  "I." << setw(3) << counterI << endl;
    
    
    
    return 0;
}

