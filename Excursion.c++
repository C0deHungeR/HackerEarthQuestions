#include <iostream>

using namespace std;

int main() {

    int T ;
    cin>>T ;
    for(int i = 1 ; i <= T ; i++){
        int N , M , K ;
        cin>>N>>M>>K ;
        // room for boys 
        int Broom = 0 ;
        if(N % K == 0){
            Broom = N / K ;
        }
        else{
            if(N % K <= K){
                Broom = N/K + 1 ;
            }
        }

        int Groom = 0 ;
        if(M % K == 0){
            Groom = M / K ;
        }
        else{
            if(M % K <= K){
                Groom = M/K + 1 ;
            }
        }
        cout<<Broom+Groom<<endl;

    }
    return 0;
}