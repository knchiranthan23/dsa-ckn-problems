/*1021. Remove Outermost Parentheses*/
/*Brute Force using Stack*/
/*string removeOuterParentheses(string s) {
        string res="";
        stack<char>st;
        for(char c:s)
        {
            if(c=='(')
            {
                if(!st.empty())
                {
                    res.push_back(c);
                }
                st.push(c);
            }
            else{
                st.pop();
                if(!st.empty())
                {
                    res.push_back(c);
                }
            }
        }
        return res;
    }*/
/*Optimal approach*/
// string removeOuterParentheses(string s) {
//         string res="";
//         int count=0;
//         for(char c:s)
//         { 
//            if(c=='(')
//            {
//              if(count>0){res.push_back(c);}
//              count++; 
//            }
//            else
//            {
//               count--;
//               if(count>0){res.push_back(c);}
//            }
//         }
//         return res;
//     }   