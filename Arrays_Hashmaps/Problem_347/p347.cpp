#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){

	vector<int> nums = {1,1,1,2,2,3};
	int k = 2;
	
	map<int ,vector<int>> ans;
	int counter = 0;	
	int num = nums[0];


	sort(nums.begin(), nums.end());

	for(auto i : nums){
		if(num == i)
			counter++;
		else{
			ans[counter].push_back(num);
			num = i;
			counter = 1;
		}
	}
	
	ans[counter].push_back(num);			
	counter = 0;

	
	for(auto i = ans.rbegin(); i != ans.rend() and k > 0; i++){
		for(auto j : i->second)
			cout << j << "  ";
		cout << endl;
		k--;
	}

	return 0;
}
