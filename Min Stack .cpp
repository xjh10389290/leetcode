class MinStack {
public:
    deque<int> s;
    deque<int> min;
    
    void push(int x) {
        if (s.size()==0)
        {
            s.push_back(x);
            min.push_back(x);
        }
        else
        {
            s.push_back(x);
            int minvalue=getMin();
            if (minvalue>=x) min.push_back(x);
            
        }
    }

    void pop() {
        if (top()==getMin()) min.pop_back();
        s.pop_back();
       
    }

    int top() {
        
       return s.back();
    }

    int getMin() {
         
        return min.back();
    }
};