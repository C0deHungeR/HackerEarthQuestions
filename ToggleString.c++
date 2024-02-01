#include <iostream>
using namespace std;

void makeuppercase(char& ch){  // function to convert alphabet  in uppercase

    ch = ch - 32 ;

}

void makeLowercase(char& ch){  // function to convert alphabet  in lowercase

    ch = ch + 32 ;
    
}

int main() {

    string s ; // declaration of string 

    cin>>s ;  // input of string

    for(int i = 0 ; s[i] != '\0' ; i++){

        if(s[i]>='A' && s[i] <= 'Z'){  // condition to check wether the character is lowercase or uppercase alphabet

            makeLowercase(s[i]); // calling function
        }
        else{

            makeuppercase(s[i]);   // calling function
        }
    }

    // to print string

    cout<<s;


    return 0 ;
}

   