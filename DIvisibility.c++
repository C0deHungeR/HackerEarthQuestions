#include<iostream>
using namespace std ;

int main(){
    int size ; // number of elements in array
    cin>>size;

     int * arr = new int[size]; // array declaration

      for(int i =0 ; i < size ; i++){

        cin>>arr[i];        // taking input of elements  in array

      }
       // to check last element of array

       int last = arr[size -1];
       
        int lastdigit = last % 10;  // to get the last digit
        

       // if the last digit is 0 then it the number formed by last digits of elements in array will be divisible by 10 
       if(lastdigit == 0){
        cout<<"Yes";
       }
       else{
        cout<<"No";
       }
       return 0 ;


}