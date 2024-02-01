#include <iostream>
using namespace std;

 //function to check palidome or not
bool ispalindrome(string s , int len){
    int start = 0 ;
    int end = len-1 ; 
    while(start <= end){
        if(s[start] != s[end]){
           return 0 ;
        }
        else{
            start++;
            end--;
        }
    }
    return 1 ;
}

int main() {

    string s ; // declaration sof string

    cin >> s ;  // input of string 
    
    int len = s.length();   //to find length of string 

    // if palidrome print yes otherwiae print no

    if(ispalindrome(s,len)){   // calling user defined function
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
   
    return 0;
}