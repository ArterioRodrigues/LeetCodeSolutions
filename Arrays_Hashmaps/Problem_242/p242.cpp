#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    string s = "anagram";
    string t = "nagaram";

    if(s.length() != t.length())
        cout << "false" << endl;
   
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for(int i = 0, n = t.length(); i < n; i++){
        if(s[i] != t[i])
            cout << "Not a anagram " << endl;
        else 
            cout << s[i] << " " << t[i] << endl;
    }

}