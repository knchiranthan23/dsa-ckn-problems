#include<bits/stdc++.h>
using namespace std;

/* First and Last occurance*/

/*Brute force approach
      Tc~o(n2),Sc~o(1)*/
    // vector<int> searchRange(vector<int>& nums, int target) {
    //     int n=nums.size();
    //     int first=-1,last=-1;
    //     vector<int>ans;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(nums[i]==target)
    //         {
    //             if(first==-1){first=i;}     
    //             last=i;                     
    //         }
    //     }
    //     if(first==-1 && last==-1){return ans={-1,-1};}
    //     else return ans={first,last};
    // }

/*Better solution Tc~2*o(logn) Sc~o(1)*/  
    // vector<int> searchRange(vector<int>& nums, int target) {
    //     int n=nums.size();
    //     vector<int>ans;
    //     int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    //     int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
    //     if(lb==n || nums[lb]!=target)
    //     {
    //        return ans={-1,-1};
    //     }
    //     else return ans={lb,ub};
    // }  