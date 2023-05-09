#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    size_t a{};
    vector <string> vec {};
    
    cin >> a;

    for(size_t i = 0; i < a; i++){
        string new_string {};
        cin >> new_string;
        vec.push_back(new_string);
    }

    for(string str : vec){
        
        int c_location = {};
        for(size_t i = 0; i < str.length() - 2 ; i++){
            if(str.at(0) == 'R' && isdigit(str.at(1)) && str.at(i+2) == 'C')
                c_location = i+2;
        }
        
        //int b = str.length();
        int b = c_location;
        if(c_location != 0){
            int c = 0;
            for(size_t i= b + 1; i < str.length(); i++){
                c = c * 10 + static_cast<int>(str.at(i) - '0');
            }
            
            string s{};
            while(c != 0){ 
                if(c % 26 == 0){
                    s = 'Z' + s;
                    c = c / 26 - 1;            
                }
                else{
                    s = char(c % 26 + 'A' - 1) + s;
                    c = c / 26;
                }
            }
            cout << s;

            for(size_t i = 1; i < b; i++){
                cout << str.at(i);
            }
            cout << endl;
        }
        else{
            int num_location{};
            while(isalpha(str.at(num_location))){
                num_location ++;
            }
            cout << 'R' ;
            for (size_t i = num_location; i < str.length(); i++)
                cout <<str.at(i);
            cout << 'C';
            int c {};
            for(size_t i = 0; i < num_location; i++){
                c = c * 26 + (str.at(i) - 'A' + 1) ;
            }
            //c = c + (str.at(num_location - 1) - 'A' + 1);
            cout << to_string(c) << endl; 
        }
    }

}