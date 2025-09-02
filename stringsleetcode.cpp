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

/*151. Reverse Words in a String*/
/*Approach 1*/
// string reverseWords(string s) {
//         vector<string>words;
//         string curw;
//         string res="";
//         for(char c:s)
//         {
//             if(c!=' ')
//             {
//                 curw.push_back(c);
//             }
//             else if(!curw.empty()){
//                words.push_back(curw);
//                curw="";
//             }
//         }
//         if(!curw.empty()) words.push_back(curw);
//         reverse(words.begin(),words.end());
//         for(int i=0;i<words.size();i++)
//         {
//             res.append(words[i]);
//             if(i<words.size()-1){
//                 res.append(" ");
//             }
//         }
//         return res;
//     }

/*Approach 2*/
/*reverse(s.begin(),s.end());
       string ans="";
       for(int i=0;i<s.length();i++)
       {
          string word="";
          while(i<s.length() && s[i]!=' ')
          {
            word+=s[i];
            i++;
          } 
          reverse(word.begin(),word.end());
          if(word.length()>0)
          {
            ans+=" "+word;
          }
       }
       return ans.substr(1);
    }*/

/*14. Longest Common Prefix approach 1*/
/*string longestCommonPrefix(vector<string>& strs) {
       string prefix=strs[0];
       for(int i=1;i<strs.size();i++)
       {
          int j=0;
         while(j<prefix.size() && j<strs[i].size() && prefix[j]==
         strs[i][j])
         {
            j++;
         }
         prefix=prefix.substr(0,j);

         if(prefix.empty()){return "";}
       }
       return prefix;
    }*/

/*Approach 2 sorting and comparing the first and last element*/
/*string longestCommonPrefix(vector<string>& strs) {
      int n=strs.size();
      sort(strs.begin(),strs.end());
      string first=strs[0];
      string last=strs[n-1];
      int i=0;
      while(i<first.size() && i<last.size() && first[i]==last[i])
      {
        i++;
      }
      return first.substr(0,i);
    }*/

/*796. Rotate String Approach-1*/
/*bool rotateString(string s, string goal) {
        int n=s.size(), m=goal.size();
        if(n!=m){return false;}
        for(int ror=1;ror<=n;ror++)
        {
           string res(n,' ');
           for(int i=ror;i<n;i++)
           {
             res[i-ror]=s[i];
           }
           for(int i=0;i<ror;i++)
           {
             res[n-ror+i]=s[i];
           }
           if(res==goal)
           {
             return true;
           }
        }
        return false;
    }*/
   /*Approach-2 optimal solution*/
/*bool rotateString(string s, string goal) {
       return  s.size()==goal.size() && (s+s).find(goal)!=-1;
    }*/