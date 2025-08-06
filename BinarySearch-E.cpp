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

/*BS on Answers*/
/*Q1-Square root of n th number usig binary search*/
// int main() {
// int n;
// cin>>n;
// int low=0,high=n;
// int ans=1;
// while(low<=high)
// {
//     int mid=(low+high)/2;
//     if(mid*mid<=n)
//     {
//       ans=mid;
//       low=mid+1;
//     }
//     else
//     {
//         high=mid-1;
//     }
// }
// cout<<ans<<endl;
// return 0;
// }

/*Q2-Finding nth root of m*/
/*  int funN(int mid,int n)
  {
      long long ans=1;
      while(n>0)
      {
          if(n%2==1)
          {
              ans=ans*mid;
              n=n-1;
          }
          else
          {
              mid=mid*mid;
              n=n/2;
          }
      }
      return ans;
  }
    int nthRoot(int n, int m) {
        // Code here
        int low=1,high=m;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(funN(mid,n)==m)
            {
                return mid;
            }
            else if(funN(mid,n)<m)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }*/

/*Koko Eating bananas(875) BruteForce Approach*/
/*    int FindMaxele(const vector<int>& arr) {
        int maxy = INT_MIN;
        for (int val : arr) {
            maxy = max(maxy, val);
        }
        return maxy;
    }

    // Calculate how many hours are required at eating speed `k`
    long long CalculateK(const vector<int>& arr, int k) {
        long long total_time = 0;
        for (int bananas : arr) {
            total_time += ceil((double)bananas / k);
        }
        return total_time;
    }

    // Brute-force approach
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxele = FindMaxele(piles);
        for (int k = 1; k <= maxele; k++) {
            long long ReqTime = CalculateK(piles, k);
            if (ReqTime <= h) {
                return k;
            }
        }
        return -1; // should never hit this if h >= piles.size()
    }*/
/*Optimal Approach using Binary Search*/
    
    // int FindMaxele(const vector<int>& arr) {
    //     int maxy = INT_MIN;
    //     for (int val : arr) {
    //         maxy = max(maxy, val);
    //     }
    //     return maxy;
    // }

   
    // long long CalculateK(const vector<int>& arr, int k) {
    //     long long total_time = 0;
    //     for (int bananas : arr) {
    //         total_time += ceil((double)bananas / k);
    //     }
    //     return total_time;
    // }

   
    // int minEatingSpeed(vector<int>& piles, int h) {
    //     int low=1,high=FindMaxele(piles);
    //     int minK=0;
    //     while(low<=high)
    //     {
    //         int mid=(low+high)/2;
    //         long long AnsK=CalculateK(piles,mid);
    //         if(AnsK<=h)
    //         {
    //             minK=mid;
    //             high=mid-1;
    //         }
    //         else
    //         {
    //             low=mid+1;
    //         }
    //     }
    //     return minK;
    // }

/*1482. Minimum Number of Days to Make m Bouquets-Brute Force Approach*/
/*bool funCountDays(vector<int>& arr,int days,int m,int k)
    {
        int count=0,NoB=0;
        for(int i=0;i<arr.size();i++)
        {
           if(arr[i]<=days)
           {
            count++;
           }
           else{
             NoB+=(count/k);
             count=0;
           }
        }
        NoB+=(count/k);
        if(NoB==m)
        {
            return true;
        }
        else{
            return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int miny=INT_MAX,maxy=INT_MIN;
        for(int i=0;i<n;i++)
        {
            miny=min(miny,bloomDay[i]);
            maxy=max(maxy,bloomDay[i]);
        }
        long long v=m*k;
        if(n<v){return -1;}
        else
        {
            for(int i=miny;i<=maxy;i++)
            {
                if(funCountDays(bloomDay,i,m,k)==true)
                {
                    return i;
                }
            }
        }
        return 0;
    }*/

/*Optimal Approach*/
/*bool funCountDays(vector<int>& arr,int days,int m,int k)
    {
        int count=0,NoB=0;
        for(int i=0;i<arr.size();i++)
        {
           if(arr[i]<=days)
           {
            count++;
           }
           else{
             NoB+=(count/k);
             count=0;
           }
        }
        NoB+=(count/k);
        return NoB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int miny=INT_MAX,maxy=INT_MIN;
        for(int i=0;i<n;i++)
        {
            miny=min(miny,bloomDay[i]);
            maxy=max(maxy,bloomDay[i]);
        }
        long long v=1LL*m*k;
        int low=miny,high=maxy,res=-1;
        if(n<v){return -1;}
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(funCountDays(bloomDay,mid,m,k)==true)
            {
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }   */

/*1283. Find the Smallest Divisor Given a Threshold-BruteForce Approach*/
//   int CalculateSum(vector<int>&arr,int d)
//    {
//       int sum=0;
//       for(int i=0;i<arr.size();i++)
//       {
//         sum+=ceil(double(arr[i])/double(d));
//       }
//       return sum;
//    }
//     int smallestDivisor(vector<int>& nums, int threshold) {
//         int n=nums.size();
//         int maxy=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             maxy=max(maxy,nums[i]);
//         }
        
//         for(int i=1;i<=maxy;i++)
//         {
//            int sum=CalculateSum(nums,i);
//             if(sum<=threshold)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }


/*1283. Find the Smallest Divisor Given a Threshold-Optimal Approach(BS)*/
/* int CalculateSum(vector<int>&arr,int d)
   {
      int sum=0;
      for(int i=0;i<arr.size();i++)
      {
        sum+=ceil(double(arr[i])/double(d));
      }
      return sum;
   }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxy=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxy=max(maxy,nums[i]);
        }
        int low=1,high=maxy;
        int Mindiv=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int sum=CalculateSum(nums,mid);
            if(sum<=threshold)
            {
                Mindiv=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return Mindiv;
    }  */

/*1011. Capacity To Ship Packages Within D Days-BruteForce Approach*/
/*int calculateDays(vector<int>& arr, int w) {
    int sum = 0, days = 1; 
    for(int i = 0; i < arr.size(); i++) {
        if(sum + arr[i] > w) {
            days++;
            sum = 0;
        }
        sum += arr[i];
    }
    return days;
}

    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0,maxy=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=weights[i];
            maxy=max(maxy,weights[i]);
        }
        for(int i=maxy;i<=sum;i++)
        {
            int Mindays=calculateDays(weights,i);
            if(Mindays<=days)
            {
                return i;
            }
        }
        return -1;
    }*/
/*1011. Capacity To Ship Packages Within D Days-Optimal Approach*/
/*int calculateDays(vector<int>& arr, int w) {
    int sum = 0, days = 1; 
    for(int i = 0; i < arr.size(); i++) {
        if(sum + arr[i] > w) {
            days++;
            sum = 0;
        }
        sum += arr[i];
    }
    return days;
}

    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0,maxy=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=weights[i];
            maxy=max(maxy,weights[i]);
        }
        int low=maxy,high=sum;
        int MinCapacity;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int MinD=calculateDays(weights,mid);
            if(MinD<=days)
            {
                MinCapacity=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return MinCapacity;
    }*/


/*1539. Kth Missing Positive Number-BruteForce Approach*/
/* int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k){
                k++;
            }
            else
            {
                break;
            }
        }
        return k;
    }*/

/* 1539. Kth Missing Positive Number-Optimal approach using binary search method*/
/*    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int missingNo=arr[mid]-(mid+1);
            if(missingNo<k)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high+1+k;
    } */    