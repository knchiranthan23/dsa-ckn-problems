/*4. Median of Two Sorted Arrays-BruteForce*/
/*double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
 {
    int n1=nums1.size(),n2=nums2.size();
    int i=0,j=0;
    int n=n1+n2;
    vector<int>arr;
    while(i<n1 && j<n2)
    {
       if(nums1[i]<=nums2[j]){
         arr.push_back(nums1[i]);
         i++;
       }
       else
       {
         arr.push_back(nums2[j]);
         j++;        
       }
    }  
    while(i<n1){arr.push_back(nums1[i++]);}
    while(j<n2){arr.push_back(nums2[j++]);}  
    if(n%2==1)
    {
        return arr[n/2];
    }
    else
    {
        return ((double)(arr[n/2])+
        (double)(arr[n/2-1]))/2.0;
    }
 } */

/*4. Median of Two Sorted Arrays-Optimal approach using Binary Search*/
/* double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
 {
    int n1=nums1.size(),n2=nums2.size();
    if(n1>n2){return findMedianSortedArrays(nums2,nums1);}
    int low=0,high=n1;
    int n=n1+n2;
    int left=(n1+n2+1)/2;
    while(low<=high)
    {
        int mid1=(low+high)/2;
        int mid2=left-mid1;
        int l1 = (mid1 > 0) ? nums1[mid1 - 1] : INT_MIN;
        int r1 = (mid1 < n1) ? nums1[mid1] : INT_MAX;
        int l2 = (mid2 > 0) ? nums2[mid2 - 1] : INT_MIN;
        int r2 = (mid2 < n2) ? nums2[mid2] : INT_MAX;
        if(l1<=r2 && l2<=r1)
        {

            if(n%2==1)
             return max(l1,l2);
            else 
             return (double(max(l1,l2)+min(r1,r2)))/2.0;
        }
        else if(l1>r2)
        {
            high=mid1-1;
        }
        else{
            low=mid1+1;
        }
    }
    return 0;
 }  */

/*Leetcode:- 74. Search a 2D Matrix*/
    /*BruteForce Approach*/
//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n=matrix.size(),m=matrix[0].size();
//         for(int i=0;i<n;i++)
//         {
//            for(int j=0;j<m;j++)
//            {
//             if(matrix[i][j]==target)
//             {
//               return true;
//             }
//            }
//         }
//         return false;
//     }

    /*Better Approach Using Binary Search O(n*log(m))*/
/*    int checkTarget(vector<int> arr, int k)
    {
       int low=0,high=arr.size()-1;
       while(low<=high)
       {
         int mid=(low+high)/2;
         if(arr[mid]==k)
         {
            return arr[mid];
         }
         else if(arr[mid]<k)
         {
            low=mid+1;
         }
         else{
            high=mid-1;
         }
       }
       return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
           if(checkTarget(matrix[i],target)==target)
           {
            return true;
           }
        }
        return false;
    }*/

/*Optimal Approach TC~O(log(n*m))*/
/*bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int low=0,high=n*m-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int row=mid/m;
            int col=mid%m;
            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }*/

/*Leetcode 240. Search a 2D Matrix II ~ TC()*/
/*    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int row=0,col=m-1;
        int mid;
        while(row<n && col>=0)
        {
           if(matrix[row][col]==target)
           {
            return true;
           }
           else if(matrix[row][col]<target)
           {
              row++;
           }
           else{
            col--;
           }
        }
        return false;
    }*/