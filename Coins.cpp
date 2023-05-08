/*
    1814A Coins
*/

#include <iostream>
#include <vector>

using namespace std;
int main(){
    int num {};
    cin >> num;

    vector<vector<long long>> vec {};

    for(size_t i {0}; i < num; i++){
        long long a{}, b{};
        cin >> a >> b;
        vector<long long> vec2 {};
        vec2.push_back(a);
        vec2.push_back(b);
        vec.push_back(vec2);
    }

    for(vector<long long> vec1 : vec){
        if(vec1.at(0) % 2 == 0)
            cout << "YES" << endl;
        else if(vec1.at(0) % vec1.at(1) == 0)
            cout << "YES" << endl;
        else if(((vec1.at(0) - vec1.at(1)) % 2) == 0)
            cout << "YES" << endl;
        else  
            cout << "NO" << endl;
    }

    return 0;
}