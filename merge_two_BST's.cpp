void solve(Node *root, vector<int> &ans)
{
    if (!root)
        return;
    solve(root->left, ans);
    ans.push_back(root->data);
    solve(root->right, ans);
}
vector<int> merge(Node *root1, Node *root2)
{
    vector<int> ans;
    solve(root1, ans);
    solve(root2, ans);
    sort(begin(ans), end(ans));
    return ans;
}
