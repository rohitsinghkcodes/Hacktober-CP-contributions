class Solution {
public:
    bool isValid(string s) {
        stack <char> stacky;
        int i=0;
        while(i<s.length())
        {
            stacky.push(s[i]);
            i++;
        }
        string temp="";
        temp+=stacky.top();
        stacky.pop();
        i=1;
        while(i<s.length())
        {

            if(stacky.top()=='(')
            {
                if(temp[temp.length()-1]==')')
                {
                    temp=temp.substr(0, temp.length()-1);
                }
                else{
                    temp+='(';
                }
            
            }
            else if(stacky.top()=='{')
            {
                if(temp[temp.length()-1]=='}')
                {
                    temp=temp.substr(0, temp.length()-1);
                }
                else{
                    temp+='{';
                }
            }
            else if(stacky.top()=='[')
            {
                if(temp[temp.length()-1]==']')
                {
                    temp=temp.substr(0, temp.length()-1);
                }
                else{
                    temp+='[';
                }
                
            }
            else{
                temp+=stacky.top();
            }
            i++;
            stacky.pop();
        }
     //   cout<<temp;
        if(temp.length()==0)
            return true;
        else
            return false;
    }
};





