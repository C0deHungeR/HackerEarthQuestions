#include <iostream>
#include <vector>
using namespace std;
 
// defining macro 
#define Modulo 1000000007  //  modulo value

int main() {
    int N = 0;             // number of elements in array
    cin >> N;

    vector<long long> data(N);
    for (int i = 0; i < N; i++)
        cin >> data[i];

    long long int answer = 1;

    for (int i = 0; i < N; i++) {
        
        answer = (answer * data[i]) % Modulo;
    }

    cout << answer;

    return 0;
}
