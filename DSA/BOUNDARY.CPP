    void traverse_left(Node* root,vector<int>ans){
        if(root==NULL|| (root->left==NULL && root->right==NULL)){
            return;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            ans.push_back(temp->data);
            if(temp->left){
                q.push(temp->left);
            }
        }
    }
    
    void traverse_right(Node* root,vector<int>ans){
        if(root==NULL ||(root->left==NULL && root->right==NULL)){
            return;
        }
        queue<Node*>q;
        q.push(root);
        if(root->right){
            q.push(root->right);
        }
        
    }
    
    void traverse_leaf(Node* root,vector<int>ans){
        if(root==NULL){
            return;
        }
        queue<Node*>q;
        q.push(root);
        if(!q.empty()){
            Node* temp=q.front();
        if(temp->left==NULL && temp->right==NULL){
            ans.push_back(temp->data);
        }
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        
        }
    }
    
    
    
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
       if(root==NULL){
           return ans;
       }
       traverse_left(root->left,ans);
       traverse_leaf(root,ans);
       traverse_right(root->right,ans);
       return ans;
    }
