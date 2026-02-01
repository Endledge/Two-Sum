#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // This map stores:
        // number -> its index in the array
        unordered_map<int, int> indexMap;

        // Loop through each number in the array
        for (int currentIndex = 0; currentIndex < nums.size(); currentIndex++) {

            int currentNumber = nums[currentIndex];

            // The number we need to reach the target
            int neededNumber = target - currentNumber;

            // Check if the needed number already exists in the map
            if (indexMap.find(neededNumber) != indexMap.end()) {
                // Found the two indices
                return { indexMap[neededNumber], currentIndex };
            }

            // Store the current number with its index
            indexMap[currentNumber] = currentIndex;
        }

        // Problem guarantees one solution, so this line is just for safety
        return {};
    }
};