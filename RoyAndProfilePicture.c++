#include <iostream>

using namespace std;

int main() {

   int L ;
   cin>>L;

   int N ;
   cin>>N ;
   int W,H;

   for(int i = 1 ; i <= N ; i++){
    cin>>W>>H;

        if(W < L || H < L){

        cout<<"UPLOAD ANOTHER"<<endl;

        }

        else if( W == H){

        cout<<"ACCEPTED"<<endl;

        }

        else{

        cout<<"CROP IT"<<endl;

        }

    }

    return 0;
}