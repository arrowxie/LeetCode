Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, /. Each operand may be an integer or another expression.

Some examples:
  ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
  ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        int i,lopd,ropd,r=0;
        int length = tokens.size();
        stack<int> opd;
        for(i=0;i<length;i++)
        {
            if(tokens[i] == "+")
            {
                ropd = opd.top();
                opd.pop();
                lopd = opd.top();
                opd.pop();
                r = lopd+ropd;
                opd.push(r);
            }
            else if(tokens[i] == "-")
            {
                ropd = opd.top();
                opd.pop();
                lopd = opd.top();
                opd.pop();
                r = lopd-ropd;
                opd.push(r);
            }
            else if(tokens[i] == "*")
            {
                ropd = opd.top();
                opd.pop();
                lopd = opd.top();
                opd.pop();
                r = lopd*ropd;
                opd.push(r);
            }
            else if(tokens[i] == "/")
            {
                ropd = opd.top();
                opd.pop();
                lopd = opd.top();
                opd.pop();
                r = lopd/ropd;
                opd.push(r);
            }
            else
            {
                opd.push(atoi(tokens[i].c_str()));
            }
        }
        return opd.top();
    }
};
