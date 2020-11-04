//COEN 243, ASSIGNMENT 3, WEEK 8
//SOULEYMANE CAMARA, STUDENT ID: 40183807
//PROGRAM THAT COMPARES IF A STRING IS A PALINDROME

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void testPalindrome(bool, string);

int main() {
    int i;
    string sentence;
    string reverse = "";
    
    cout << "Enter a string ";
    getline(cin, sentence);
    
    
    for (i = 0; sentence[i]; i++) {
        
            cout << sentence[i];
        
    }
    
    for (i = sentence.length()-1; i >= 0; i--){
        
        reverse = reverse + sentence[i];
        cout << reverse << endl;
    }
    
    bool palindrome = true;
    
    for (i = 0; i < sentence.length(); i++){
        if (sentence[i] != reverse[i]){
            palindrome = false;
        }
    }
    
    testPalindrome(palindrome, sentence);
    
    return 0;
}

void testPalindrome (bool palindrome, string sentence){
    
      
    if (palindrome) {
        cout << sentence << " is a palindrome !" << endl;
    }else
        cout << sentence << " is not a palindrome !" << endl;
    
    
}
