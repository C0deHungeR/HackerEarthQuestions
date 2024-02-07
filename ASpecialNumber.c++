#include <iostream>

using namespace std;
int findsum(int num){
    int digitsum = 0 ;
    for(int i = 1 ; num != 0 ; i++){
        digitsum += num % 10 ;
        num = num / 10 ;
    }
    return digitsum;
}

int main() {

   int T ;
   cin>>T ;
   for(int i = 1 ; i <= T ; i++){

    int a = 0 ;
    cin>>a;
    int sum = 0 ;
    for(int i = a ; ;i++){
        sum = findsum(i);
        if(sum % 4 == 0){
            cout<<i<<endl;
            break ;
        }
    }

   }
   return 0 ;
}