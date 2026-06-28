// #include<bits/stdc++.h>
// using namespace std;

// string retrnDirection(int n,int m)
// {
//    if(n==m)
//    {
//     if((n%2)==0){
//         return "left";
//     }
//     else{return "up";}
//    }
//    else if(n<m)
//    {
//     if((n%2)==0)
//     {
//         return "left";
//     }
//     else{return "right";}
//    }
//    else{
//      if((n%2)==0)
//      {
//         return "down";
//      }
//      else{return "up";}
//    }
// }
// int main()
// {
//     int row,column;
//     cout<<"Enter row : ";
//     cin>>row;
//     cout<<"Enter column : ";
//     cin>>column;
//     string res=retrnDirection(row,column);
//     cout<<"Direction of "<<row<<" and "<<column<<": "<<res;
// }

/*ScoreBoard queries test assessment-HackerEarth*/
/*#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
   int testcase;
   cin>>testcase;
   while(testcase--)
   {
	 int n,q;
	 cin>>n>>q;
	 vector<int>playerRank(n);
	 unordered_map<int,int>mpp;
     for(int i=0;i<n;i++)
	 {
		cin>>playerRank[i];
		mpp[playerRank[i]]++;
	 }
	 while(q--)
	 {
		int l,r;
		cin>>l>>r;
		int old_value=playerRank[l-1];
		if(mpp[old_value]==1)
		{
			mpp.erase(old_value);
		}
		else{
			mpp[old_value]--;
		}
		playerRank[l-1]=r;
		mpp[r]++;
		cout<<mpp.size()+1<<endl;
	 }
   }
   return 0;
}*/