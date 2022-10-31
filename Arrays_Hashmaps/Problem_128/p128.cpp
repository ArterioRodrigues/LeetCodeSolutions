#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
	vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
	int counter = 1;
	int max = 0;
	std::unordered_set<int> n(nums.begin(), nums.end());
	
	for(auto i : n){
		if(!n.count(i-1))
		{
			counter = 1;
			while(n.count(i+counter)){
				counter++;
			}
			if(max < counter)
				max = counter;
		}
	}

	cout << max;
	return 0;
}
