// Problem link --->
https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array

// Solution --->
    int findFloor(vector<int>& arr, int x) {
        // Your code here
        
        if (x < arr[0]) {
            return -1;
        }
        int ans = 0;
        
        int low = 0, high = arr.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] <= x) {
                ans = mid;
                low = mid + 1;
            } else {
               high = mid - 1;
            }
        }
        
        return ans;
        
    }