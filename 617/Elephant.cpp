/*
  617A -Elephant
*/

#include <iostream>
using namespace std;
int main(){

    int num {};
    cin >> num;
    cout << ((num % 5) ? (num / 5 + 1) : (num / 5));
    return 0;
}