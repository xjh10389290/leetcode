/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *root;

    map<int,UndirectedGraphNode *> mnode;
    map<int,int>mhash;
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if (node==NULL) return NULL;
        root=new UndirectedGraphNode(node->label);
        mnode[node->label]=root;
        clone(root,node);
        return root;
    }
    
    void clone(UndirectedGraphNode *curnode,UndirectedGraphNode *node)
    {
        mhash[curnode->label]=1;
        for (int i=0;i<node->neighbors.size();i++)
        {
            if (mnode[node->neighbors[i]->label]==NULL)
            {
                UndirectedGraphNode* tmp=new UndirectedGraphNode(node->neighbors[i]->label);
                mnode[node->neighbors[i]->label]=tmp;
                curnode->neighbors.push_back(tmp);
                
            }
            else
            {
                curnode->neighbors.push_back(mnode[node->neighbors[i]->label]);
            }
            
            if (mhash[node->neighbors[i]->label]==0)
            {
                mhash[node->neighbors[i]->label]=1;
                clone(mnode[node->neighbors[i]->label],node->neighbors[i]);
            }
        }
    }
};