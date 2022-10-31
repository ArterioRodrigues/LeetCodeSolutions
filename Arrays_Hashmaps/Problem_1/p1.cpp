#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    
    vector<int> nums = {2,7,11,15};
    int target = 9;

    map<int, bool > set;
    vector<int, bool> trash;
    vector<int> sum;

    for(int i = 0, n = nums.size(); i < n; i++){
        if(nums[i] < target)
            set[nums[i]] = {i, true};
        
    }

    for(int i = 0, n = nums.size(); i < n; i++){
        
        cout << "1";
    }
    
    for(int i = 0; i < sum.size(); i++)
        cout << sum[i] << "  " ;
    return 0;
}