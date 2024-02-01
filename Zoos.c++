#include <iostream>
#include<string>
using namespace std;


int main() {
	
	string word ;     // declaration of string 

	cin>>word;			// input for word

	int countZ = 0;				// to count number of z

	int countO = 0;				// to count number of o


	for(int i = 0 ; word[i] != '\0' ; i++){
		if(word[i] == 'z' ||word[i] == 'z' ){

			countZ++;			// Increse count of z by 1 if z is found

		}
		else{

			countO++;			// Increse count of o by 1 if 0 is found

		}
	}

	// condition for yes or no
	if(countO == 2*countZ){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}