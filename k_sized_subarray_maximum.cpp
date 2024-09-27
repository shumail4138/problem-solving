vector<int> max_of_subarrays(int k, vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    int i = 0;
    int j = 0;
    int maxi = -1;
    while (j < n)
    {
        if (arr[j] > maxi)
        {
            maxi = arr[j];
        }
        if (j - i + 1 == k)
        {
            ans.push_back(maxi);
            if (arr[i] == maxi)
            {
                maxi = -1;
                j = i;
            }
            i++;
        }
        if (j - i + 1 != k)
        {
            j++;
        }
    }
    return ans;
}
