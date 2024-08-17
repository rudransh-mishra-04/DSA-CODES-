class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int>qq;
        while(!q.empty()){
            qq.push(q.front());
            q.pop();
            
        }
        while(!qq.empty()){
            q.push(qq.top());
            qq.pop();
        }
        return q;
    }
};
