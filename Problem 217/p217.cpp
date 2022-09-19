#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main(){
    vector<int> nums = {1,2,3,1};
    map<int, bool> arr;

    for(int i = 0, n = nums.size(); i < n; i++){
            if( ! arr[nums[i]]){
                arr[nums[i]] = true;
                cout << nums[i] << " was inserted" << endl;
            
            } 
            else
                cout << nums[i] << " is in the array" << endl;
    }

    cout << "true";
}