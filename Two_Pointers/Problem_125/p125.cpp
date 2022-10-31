#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
	string s = "A man, a plan, a canal: Panama";
    string new_s = "";
    

    for(auto c : s){
        if(isalpha(c) || isdigit(c))
            new_s += tolower(c);
    
    }

    for(int i = 0, n = new_s.length(); i < n/2; i++){
        if(new_s[i] != new_s[n-i-1])
            cout << "not a palamdrome";
        cout << new_s[i] << new_s[n-i-1] << endl;
    }

	return 0;
}
