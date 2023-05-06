/*
 71A Way Too Long Words 800
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int num {};
    vector <string> str {};

    cin >> num;
    for(int i = 0; i < num; i++){
        string add_string;
        cin >> add_string;
        str.push_back(add_string);
    }

    for(string newstr : str){
        if(newstr.size() > 10)
            cout << newstr.at(0) << newstr.size() - 2 << newstr.at(newstr.size() - 1) << endl;
        else 
            cout << newstr <<endl;
    }

    return 0;
}