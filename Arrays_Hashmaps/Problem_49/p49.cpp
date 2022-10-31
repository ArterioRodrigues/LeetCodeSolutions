#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(){
	vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
	vector<string> s;
	map<string, vector<string>> ans;	

	for(auto i : strs){
	 	sort(i.begin(), i.end());
		s.push_back(i);
		ans[i];
	}
	
	for(int i = 0; i < s.size(); i++){
		ans[s[i]].push_back(strs[i]);
	}	

	for(auto i : ans){
		for(auto j : i.second)
			cout << j << "  " ;

		cout << endl;
	}
	return 0;
}
