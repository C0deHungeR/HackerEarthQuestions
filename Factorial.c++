#include <iostream>
using namespace std;

int main() {

    int N ;
    cin>>N;

    int fact = 1 ;

    for(int i = N ; i > 0 ; i--){
        fact = fact*i;
    }
    cout<<fact;
    
    return 0;
}