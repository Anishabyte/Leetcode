class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    // Create a max heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Iterate through the array
    for (int num : nums) {
        // If the heap size is less than k, add the element
        if (minHeap.size() < k) {
            minHeap.push(num);
        } else {
            // If the current element is greater than the smallest element in the heap,
            // replace the smallest element with the current element
            if (num > minHeap.top()) {
                minHeap.pop();
                minHeap.push(num);
            }
        }
    }

    // The top of the heap contains the kth largest element
    return minHeap.top();
}
int main() {
    // Example usage
    std::vector<int> nums1 = {3, 2, 1, 5, 6, 4};
    int k1 = 2;
    std::cout << "Example 1: " << findKthLargest(nums1, k1) << std::endl;  // Output: 5

    std::vector<int> nums2 = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k2 = 4;
    std::cout << "Example 2: " << findKthLargest(nums2, k2) << std::endl;  // Output: 4

    return 0;
}
};
