//COEN 243, ASSIGNMENT 3, WEEK 8
//SOULEYMANE CAMARA, STUDENT ID: 40183807
//PROGRAM THAT COMPARES IF A STRING IS A PALINDROME

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void testPalindrome(bool, string, string, int); //Function prototyping

int main() {
    
    //Declaring variables
    int i;
    string sentence;
    string reverse = "";
    bool palindrome;
    
    cout << "Enter a string ";
    getline(cin, sentence);
    
    
    testPalindrome(palindrome, sentence, reverse, i); //Calling function
    
    return 0;
}

//Function that outputs the result of the palindrome test
void testPalindrome (bool palindrome, string sentence, string reverse, int i){
    
    
    for (i = sentence.length()-1; i >= 0; i--){ //iterating and showing the word in reverse
        
        reverse = reverse + sentence[i];
    }
    
     palindrome = true; //default
    
    for (i = 0; i < sentence.length(); i++){ //verify if condition is still true or if needs to change
        if (sentence[i] != reverse[i]){
            palindrome = false;
        }
    }
      
    if (palindrome) {
        cout << sentence << " is a palindrome !" << endl;
    }else
        cout << sentence << " is not a palindrome !" << endl;
    
    
}
