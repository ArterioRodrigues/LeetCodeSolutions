#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    string s = "anagram";
    string t = "nagaram";
    
    map <char, int> map_s;
    map <char, int> map_t;
    if(s.length() != t.length())
        cout << "false" << endl;
   
    for(int i = 0, n = s.length(); i < n; i++)
    {
        map_s[s[i]]++;
        map_t[t[i]]++;
    }

    for(int i = 0, n = map_s.size(); i < n; i++){
        if(map_s[i])
    }

}