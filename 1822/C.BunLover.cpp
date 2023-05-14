/*
    1822C Bun Lover
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num {};
    cin >> num;

    vector<long long> vec{};
    for(int i {0}; i < num; i++){
        long long elem;
        cin >> elem;
        vec.push_back(elem);
    }
    
    for(long long result: vec){
        cout << fixed ;
        cout.precision(0);
        if(result == 1)
            cout << 4 << endl;
        else if (result == 2)
            cout << 10 << endl;
        else
            cout << result * 4 + 2 + (3 +(result - 3) * 2 + 3) / 2 * (result - 2) << endl;
    }

    return 0;
}