link:https://leetcode.com/problems/kth-largest-element-in-an-array/description/?utm_source=chatgpt.com

//bruteforce::

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];


    }
};


// slightly optimal:

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<
            int,
            vector<int>,
            greater<int>
        > minHeap;

        for (int num : nums) {
            minHeap.push(num);

            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        return minHeap.top();
    }
};





//Optimal::


class Solution {
public:

    int partition(vector<int>& nums, int low, int high) {

        int pivot = nums[high];
        int i = low;

        for (int j = low; j < high; j++) {

            if (nums[j] <= pivot) {
                swap(nums[i], nums[j]);
                i++;
            }
        }

        swap(nums[i], nums[high]);

        return i;
    }

    int findKthLargest(vector<int>& nums, int k) {

        int target = nums.size() - k;

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {

            int p = partition(nums, low, high);

            if (p == target)
                return nums[p];

            else if (p < target)
                low = p + 1;

            else
                high = p - 1;
        }

        return -1;
    }
};
