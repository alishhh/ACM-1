class MinStack {
public:
    stack<int> fr;
    stack<int> sc;
    
    void push(int x) {
	    fr.push(x);
	    if (sc.empty() || x <= getMin()) sc.push(x);
    }
    
    void pop() {
	    if (fr.top() == getMin()) sc.pop();
	    fr.pop();
    }
    
    int top() {
	    return fr.top();
    }
    
    int getMin() {
	    return sc.top();
    }
};
