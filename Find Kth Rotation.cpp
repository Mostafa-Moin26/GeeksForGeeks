// Problem link ---->
https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation

// Solution ---->
    int findKRotation(vector<int> &arr) {
        // Code Here
        int low = 0, high = arr.size() - 1;
        int minEl = INT_MAX;
        int res = -1;
        
        while (low <= high) {
            
            int mid = low + (high - low) / 2;
            
            if (arr[low] <= arr[mid]) {
                
                if (arr[low] < minEl) {
                    minEl = arr[low];
                    res = low;
                }
                low = mid + 1;
            } else {
                
                if (arr[mid] < minEl) {
                    minEl = arr[mid];
                    res = mid;
                }
                high = mid - 1;
            }
        }
        return res;
    }