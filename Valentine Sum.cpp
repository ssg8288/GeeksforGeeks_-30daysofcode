class Solution{

   public:
    
    unordered_map<Node*,Node*>um; // to store the parent of each node
    
    // it returns the refence to target node
    Node* storeparent(Node*root,int target)
    {
        Node*t; //for target node
        if (root==NULL)
          return t;
          
        um[root]=NULL; // parent of root is null
        
        //standard BFS implementation
        
        queue<Node*>q;
        
        q.push(root);
        
        while(!q.empty())
        {
            
          Node*p=q.front();
          
          if (p->data==target)
          {
              t=p;// here we have found our target node
          }
        
        if (p->right)// if right child exist
        {
            um[p->right]=p;// set parent of right chlid of p as p
            q.push(p->right);
            
        }
        if (p->left)
        {
            um[p->left]=p;// set parent of left chlid of p as p
            q.push(p->left);
        }
        
        q.pop();
        
        }
        return t;// return this target node
    }
    
    int sum_at_distK(Node* root, int target, int k)
    {
        
         //store parent of each node and get reference to target node
         Node*t=storeparent(root,target);
        
         if (t==NULL) // if target node is not present
           return 0;
         
         long long int sum=0; // sum of all the nodes upto level=k
         
         //BFS implementation
         
         queue<Node*>q;
         
         set<Node*>s;
         
         q.push(t);
         s.insert(t);
         //sum+=t->data;
         int level=0;
         
         while(!q.empty() and level<=k)
         {
             int size=q.size();
             
             for (int i=0;i<size;i++)
             {Node*f=q.front();
             sum+=f->data;
             
             if (f->right && s.find(f->right)==s.end() )
             {
                 q.push(f->right);
                 s.insert(f->right);
             }
             
             if (f->left && s.find(f->left)==s.end())
             {
                 q.push(f->left);
                  s.insert(f->left);
                
             }
             if (um[f] && s.find(um[f])==s.end())// for parent of f
             {
                 q.push(um[f]);
                  s.insert(um[f]);
                 //sum+=um[f]->data;
             }
             q.pop();
             }
             level++;// now we will move to next level
         }
         
         
         
         return sum;// sum of all the nodes till level k
         
    }



};
