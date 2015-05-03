class MinStack {
public:
    void push(int x) {
		s.push(x);
        if(sm.empty()||x<=sm.top())
			sm.push(x);
    }

    void pop() {
        int top = s.top();
		s.pop();
		if(top<=sm.top())
			sm.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return sm.top();
    }
private:
	stack<int> s;
	stack<int> sm;
};
