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
/*153. Find Minimum in Rotated Sorted Array*/ 
/*optimal TC~O(logn)*/
/*int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        int ans=INT_MAX;
        while(low<=high)
        {
           int mid=(low+high)/2;
           if(nums[low]<=nums[high])
           {
            ans=min(ans,nums[low]);
            break;
           }
           else if(nums[low]<=nums[mid])
           {
            ans=min(ans,nums[low]);
            low=mid+1;
           }
           else
           {
            ans=min(ans,nums[mid]);
            high=mid-1;
           }
        }
        return ans;   
    }*/ 

/*540. Single Element in a Sorted Array*/
//Brute Force Approach
/* int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1){return nums[0];}//exceptional case
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(nums[i]!=nums[i+1]){return nums[i];}
            }
            else if(i==(n-1))
            {
                if(nums[i]!=nums[i-1]){return nums[i];}
            }
            else
            {
               if(nums[i-1]!=nums[i] && nums[i]!=nums[i+1])
               {
                 return nums[i];
               }
            }
        }
        return -1;
    }*/

    /*Optimal Approach-Binary Search*/
    /*int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1){return nums[0];}//exceptional case
        if(nums[0]!=nums[1]){return nums[0];}
        if(nums[n-1]!=nums[n-2]){return nums[n-1];}
        int low=1,high=n-2;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }
            if(((mid%2)==1 && nums[mid]==nums[mid-1]) || 
            (mid%2)==0 && nums[mid]==nums[mid+1])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return -1;
    }*/

/*162.Find Peak Element-BT Approach*/
/*    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if((i==0 || nums[i-1]<nums[i]) && 
            (i==n-1 || nums[i]>nums[i+1]))
            {
                return i;
            }
        }
        return -1;
    }*/

/*162.Find Peak Element-Optimal Approach*/
/*    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if((mid==0 || nums[mid-1]<nums[mid]) 
            && (mid==n-1 || nums[mid]>nums[mid+1]))
            {
                return mid;
            }
            else if(mid>0 && nums[mid-1]>nums[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return -1;
    }*/