int solve(vector<int> &arr, int k, int ind, vector<int> &dp)
{
    if (ind == arr.size() - 1)
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int mini = INT_MAX;
    for (int i = 1; i <= k && i + ind < arr.size(); i++)
    {
        int cost = abs(arr[i + ind] - arr[ind]) + solve(arr, k, ind + i, dp);
        mini = min(cost, mini);
    }
    return dp[ind] = mini;
}
int minimizeCost(int k, vector<int> &arr)
{
    int n = arr.size();
    vector<int> dp(n + 1, -1);
    return solve(arr, k, 0, dp);
}
