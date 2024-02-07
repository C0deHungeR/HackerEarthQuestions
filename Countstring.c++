#include<iostream>
#include<string>
using namespace std;

int count(string str , char k ){
    int count = 0 ;
    for(int i = 0 ; str[i] !='\0' ; i++){
        if(str[i] == k){
            count++ ;
        }
    }
    cout<<count<<endl;
    return  0 ; 

}

int main(){

    int T ;
    cin>>T ;
    for(int i = 1 ; i <= T ; i++){
        string s ;
        char k ;
        cin>>s>>k ;
        count(s,k);

    }
    
    return 0 ;
}