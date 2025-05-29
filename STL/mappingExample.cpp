#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // Create a hash map to store the number and its index
    unordered_map<int, int> map;
    
    // Iterate through the array
    for (int i = 0; i < nums.size(); i++) {
        // Calculate the complement
        int complement = target - nums[i];
        
        // Check if the complement exists in the map
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        
        // Otherwise, add the current number and its index to the map
        map[nums[i]] = i;
    }
    
    // If no solution is found (shouldn't happen based on the problem description)
    throw runtime_error("No two sum solution");
}

int main() {
    // Example 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = twoSum(nums1, target1);
    cout << "Result: [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Example 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = twoSum(nums2, target2);
    cout << "Result: [" << result2[0] << ", " << result2[1] << "]" << endl;

    // Example 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = twoSum(nums3, target3);
    cout << "Result: [" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}
