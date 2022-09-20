#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    
    vector<int> nums = {2,7,11,15};
    vector<int> vec_set;

    int target = 9;

    map<int, int> set;
    map<int, int> set_2;
    for(int i = 0, n = nums.size(); i < n; i++){
        if(nums[i] < target){
            set[nums[i]] = i;
            set[nums[i]] = target - nums[i];
            vec_set.push_back(nums[i]);
        } 
        
        if(nums[i] == target) 
            cout << i << "<-equals";
    }
    
    for(int i = 0, n = set.size(); i < n; i++){
        cout << set[nums[set[i]]] << "  ";
    }
    return 0;
}