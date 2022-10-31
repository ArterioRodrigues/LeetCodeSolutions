#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;


int main(){
	vector<int> nums = {1,2,3,4};
	vector<int> pre;
	vector<int> post;
	
	pre.push_back(nums[0]);
	post.push_back(nums[nums.size()-1]);

	for(int i = 1; i < nums.size(); i++){
		pre.push_back(nums[i] * pre[i-1]);	
		post.insert(post.begin() , nums[nums.size()-i-1] * post[0]); 
	}	

	for(auto i : pre)
		cout << i << "  ";
	cout << endl;

	for(auto j : post)
		cout << j << " ";
	cout << endl;

	for(int i = 0; i < nums.size(); i++){
		if(i == 0)
			nums[i] = post[i+1];
		else if(i == nums.size()-1)
			nums[i] = pre[i-1];
		else
			nums[i] = pre[i-1] * post[i+1];
		cout << nums[i] << "  ";
	}

	
}
