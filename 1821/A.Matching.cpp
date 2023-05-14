/*
    1821A Matching
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int num {};
    vector<string> vec {};

    cin >> num;
    for(int i {0}; i < num; i++){
        string str;
        cin >> str;
        vec.push_back(str);
    }

    for(string str: vec){
        int sum {0};
        if(str.length() == 1 && str.at(0) == '0')
            sum = 0;
        else 
            sum = 1;

        if(str.at(0) == '?')
            sum = 9;
        
        if(str.length() > 1 && str.at(0) == '0')
                sum = 0;
        else{
            for(size_t i {1}; i < str.length(); i++){
                if(str.at(i) == '?' && sum == 0)
                    sum = 10;
                else if(str.at(i) == '?')
                        sum *= 10;
            }
        }
        cout << sum << endl;
    }

}