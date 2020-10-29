//
//  main.cpp
//  First
//
//  Created by Futiliter on 2020-10-27.
//

#include <iostream>

#include <iomanip>

using namespace std;

int main() {

int number,i;

int intermediate_values;

cout << "Please enter an odd number";

    cin >> number >> i;



if (number % 2 != 0){

    
for (intermediate_values = 1; intermediate_values <= number; intermediate_values+=2){

cout << setw(2) << intermediate_values;

           }

     }

}
