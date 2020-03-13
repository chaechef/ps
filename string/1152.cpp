#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int ltrim = 0;
    int count = 0;
    getline(cin, s);
    while(s.at(ltrim) == ' '){
        cout << ltrim << endl;
        ltrim++;
    }    
    
   
    for(string::iterator begin = s.begin() + ltrim; begin != s.end(); begin++){
        if(*begin == ' '){
            count ++;
        }
    }

    cout << count + 1 << endl;
}

