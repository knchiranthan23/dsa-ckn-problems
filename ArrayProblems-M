/*Two sum Problem for variety-2(optimal)*/
// vector<int> twoSum(vector<int>& nums, int target) {
//     map<int,int>mpp;
//     int n=nums.size();
//     for(int i=0;i<n;i++)
//     {
//       int ele=nums[i];
//       int sub=target-ele;
//       if(mpp.find(sub)!=mpp.end())
//       {
//          return{mpp[sub],i};
//       }
//       mpp[ele]=i;
//     }
//     return {-1,-1}; 
//  }

/* Sort arrays of 0,1,2 using Dutch National Flag algo*/
/*void sortColors(vector<int>& nums) {
        int low=0,mid=0;
        int high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }      
    }*/

/* Print the largest sum of array of continous subarray*/ 
// int maxSubArray(vector<int>& nums) {
//     int maxi=INT_MIN;
//     int sum=0;
//     int n=nums.size();
//     for(int i=0;i<n;i++)
//     {
//       sum=sum+nums[i];
//       if(sum>maxi)
//       {
//         maxi=sum;
//       }
//       if(sum<0)
//       {
//         sum=0;
//       }  
//     }
//     if(maxi<0){maxi=0;}
//     return maxi;
// }   

/*Rearrange the array elements by sign(optimal approach)*/
/*    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posind=0,negind=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                ans[negind]=nums[i];
                negind+=2;
            }
            else
            {
                ans[posind]=nums[i];
                posind+=2;                
            }
        }
        return ans;
    }*/

/*Next Permutation optimal solution*/
/*void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>=ind;i--)
        {
            if(nums[i]>nums[ind])
            {
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
    }*/

/*Leader in Array*/
 /*Brute Force*/ 
//  vector<int> leaders(vector<int>& nums) {
//     vector<int>ans;
//     int n=nums.size();
//     for(int i=0;i<n;i++)
//     {
//         int leader=1;
//         for(int j=i+1;j<n;j++)
//         {
//             if(nums[j]>nums[i])
//             {
//                 leader=0;
//                 break;
//             }
//         }
//         if(leader==1){ans.push_back(nums[i]);}
//     }
//     return ans;
// }   

/*Optimal Solution*/
// vector<int> leaders(vector<int>& nums) {
//     vector<int>ans;
//     int n=nums.size();
//     int maxi=INT_MIN;
//     for(int i=n-1;i>=0;i--)
//     {
//         if(nums[i]>maxi)
//         {
//             ans.push_back(nums[i]);
//         }
//         maxi=max(maxi,nums[i]);
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
// }

/*Set zero matrix-better solution*/
// void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size(),m=matrix[0].size();
//         vector<int>row(n,0),col(m,0);
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     row[i]=1;
//                     col[j]=1;
//                 }
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(row[i]==1||col[j]==1)
//                 {
//                    matrix[i][j]=0;
//                 }
//             }
//         }        
//     }

/*Optimal solution*/
// void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size(),m=matrix[0].size();
//         bool rowz=false,colz=false;
//         for(int j=0;j<m;j++)
//         {
//             if(matrix[0][j]==0)
//             {
//                 rowz=true;
//                 break;
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(matrix[i][0]==0)
//             {
//                 colz=true;
//                 break;
//             }
//         }        
//         for(int i=1;i<n;i++)
//         {
//             for(int j=1;j<m;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                      matrix[i][0]=0;
//                      matrix[0][j]=0;     
//                 }
//             }
//         }
//         for(int i=1;i<n;i++)
//         {
//             for(int j=1;j<m;j++)
//             {
//                 if(matrix[i][0]==0||matrix[0][j]==0)
//                 {
//                    matrix[i][j]=0;
//                 }
//             }
//         }
//         if(rowz)
//         {
//            for(int j=0;j<m;j++)
//            {
//             matrix[0][j]=0;           
//            }        
//         }
//         if(colz)
//         {
//         for(int i=0;i<n;i++)
//          {
//             matrix[i][0]=0;
//           }            
//         }
//     } 

/*Spiral Matrix*/
    // vector<int> spiralOrder(vector<vector<int>>& matrix) {
    //     int n=matrix.size();
    //     int m=matrix[0].size();
    //     vector<int>ans;
    //     int left=0,right=m-1;
    //     int top=0,bottom=n-1;
    //     while(left<=right && top<=bottom)
    //     {
    //         for(int i=left;i<=right;i++)
    //         {
    //             ans.push_back(matrix[top][i]);
    //         }
    //         top++;
    //         for(int i=top;i<=bottom;i++)
    //         {
    //             ans.push_back(matrix[i][right]);
    //         }
    //         right--;
    //         if(top<=bottom){
    //         for(int i=right;i>=left;i--)
    //         {
    //             ans.push_back(matrix[bottom][i]);
    //         }
    //         bottom--;
    //         }
    //         if(left<=right){ 
    //         for(int i=bottom;i>=top;i--)
    //         {
    //             ans.push_back(matrix[i][left]);
    //         }
    //         left++;
    //         }  
    //     }
    //     return ans;
    // }

    /*Pascal triangle*/
//     vector<int>genarateRow(int n)
//   {
//     vector<int>ansrow;
//     long long ans=1;
//     ansrow.push_back(ans);
//     for(int i=1;i<n;i++)
//     {
//         ans=ans*(n-i);
//         ans=ans/i;
//         ansrow.push_back(ans);
//     }
//     return ansrow;
//   }
//   vector<vector<int>> generate(int numRows) {
//         vector<vector<int>>pascans;
//         int n=numRows;
//         for(int i=1;i<=n;i++)
//         {
//             pascans.push_back(genarateRow(i));
//         }
//         return pascans;
//     }