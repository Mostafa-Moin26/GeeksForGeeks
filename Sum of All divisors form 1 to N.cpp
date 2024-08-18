//Problem Link ----->
https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
// Solution ----->
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
    long long totalSum = 0;
    
    for (int i = 1; i <= N; ++i) {
        
        totalSum += (N / i) * i;
    }
    
    return totalSum;
    }
};