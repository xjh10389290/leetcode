class LRUCache{
public:
	struct node
	{
		int key,value;
		node(int k,int v){key=k;value=v;}
};
    list<node> nodelist;
    unordered_map<int,list<node>::iterator> nodemap;
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
		int value=-1;
        if (nodemap.find(key)!=nodemap.end())
{
	value=nodemap[key]->value;
	node tmp(nodemap[key]->key,nodemap[key]->value);
	nodelist.erase(nodemap[key]);
	
	nodelist.push_front(tmp);
	nodemap[key]=nodelist.begin();

}
return value;
    }
    
    void set(int key, int value) {
        if (nodemap.find(key)!=nodemap.end())
		{
			nodemap[key]->value=value;
			get(key);
			return ;
		}
		else
		{
			if (nodelist.size()==cap)
{
	nodemap.erase(nodelist.back().key);
	nodelist.pop_back();
	

}
node tmp(key,value);
nodelist.push_front(tmp);
nodemap[key]=nodelist.begin();
}
return ;
    }
};


