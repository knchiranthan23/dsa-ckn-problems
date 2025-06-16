#include<bits/stdc++.h>
using namespace std;

/*Finding the second largest element in a array*/
//Better approach
// int secondlargest(int arr[],int n)
// {
//     int largest=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     int sl=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>sl && arr[i]!=largest)
//         {
//             sl=arr[i];
//         }
//     }
//     return sl;   

//Optimal solution
// int secondlargest(int arr[],int n)
// {
//    int l=arr[0];
//    int sl=-1;
//    for(int i=1;i<n;i++){
//      if(arr[i]>l){
//         sl=l;
//         l=arr[i];
//      }
//      else if(arr[i]<l && arr[i]>sl){
//         sl=arr[i];
//      }
//    }
//    return sl;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the array size :";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<secondlargest(arr,n);
// }

/*Check if array is sorted*/
/*int Sortarray(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
   int n;
   cout<<"Enter n :";
   cin>>n;
   int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<(Sortarray(arr,n));
}*/

/* Left Rotation of the Array*/
// void LeftRotation1(int arr[],int n){
//     int temp=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
// }
// void LeftRotationD(int arr[],int n,int d){
//   d=d%n;
//   reverse(arr,arr+d);
//   reverse(arr+d,arr+n);
//   reverse(arr,arr+n);
// }
/*int main()
{
    int n,d;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cout<<"Enter the number of places to rotate : ";
     cin>>d;
    //  LeftRotation1(arr,n); 
    LeftRotationD(arr,n,d);
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }        
}*/
/* Right rotation by an array(Brute Force approach)*/

// void RightRotate(int arr[],int n,int d){
//     d=d%n;
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[n-1-i];
//     }
//     for(int i=n-1;i>=d;i--){
//         arr[i]=arr[i-d];
//     }
//     for(int i=0;i<d;i++){
//         arr[i]=temp[i];
//     }
// }
// int main()
// {
//     int n,d;
//     cout<<"Enter n :";
//     cin>>n;
//     int arr[n];
//      for(int i=0;i<n;i++)
//      {
//          cin>>arr[i];
//      }
//      cout<<"Enter the number of places to rotate : ";
//      cin>>d;     
//      RightRotate(arr,n,d);
//      for(int i=0;i<n;i++)
//      {
//          cout<<arr[i]<<" ";
//      }         
// }

/* Question 7*/

// void MoveZero(int arr[],int n)
// {
//    /*Brute Force approach*/ 
//    vector<int>temp;
//   for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//         temp.push_back(arr[i]);
//     }
//   }
//   for(int i=0;i<temp.size();i++)
//   {
//     arr[i]=temp[i];
//   }
//   for(int i=temp.size();i<n;i++){
//     arr[i]=0;
//   } 
// } 

/*void MoveZeroOptimal(int arr[],int n)
{
   int j=-1;
   for(int i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
    }
   }
   for(int i=j+1;i<n;i++){
      if(arr[i]!=0){
        swap(arr[j],arr[i]);
        j++;
      }
   }
}*/
// int main()
// {
// int n;
// cout<<"Enter n :";
// cin>>n;
// int arr[n];
//  for(int i=0;i<n;i++)
//  {
//      cin>>arr[i];
//  }
//   MoveZero(arr,n); 
//   MoveZeroOptimal(arr,n);
// for(int i=0;i<n;i++)
//  {
//      cout<<arr[i]<<" ";
//  }   
// }

/*Linear Search(Question-8)*/
/*int LinearS(int arr[],int n,int k)
{
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main()
{
int n,key;
cout<<"Enter n :";
cin>>n;
int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 cout<<"Enter the key :";
 cin>>key;
 int indx=LinearS(arr,n,key);
 cout<<"The index at which key is found is :"<<indx;
}*/

/*Question 9  Union Array*/
//Optimal Solution
/*vector<int> findUnion(vector<int> &a, vector<int> &b) {
    // Your code here
    // return vector with correct order of elements
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0;
    vector<int> uarr;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            if(uarr.size()==0 || uarr.back()!=a[i])
            {
                uarr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if(uarr.size()==0 || uarr.back()!=b[j])
            {
                uarr.push_back(b[j]);
            }  
            j++;
        }
    }
    while(j<n2)
    {
        if(uarr.size()==0 || uarr.back()!=b[j])
           {
              uarr.push_back(b[j]);
           }  
        j++;            
    }
    while(i<n1)
    {
        if(uarr.size()==0 || uarr.back()!=a[i])
          {
            uarr.push_back(a[i]);
          }
        i++;            
    }
     return uarr;
} */

/* Instersection of two sorted array*/
/*vector<int> intersection(vector<int>& a, vector<int>& b) {
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0;
    vector<int>ans;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else if(a[i]==b[j]){
          if(ans.size()==0 || ans.back()!=a[i]){
            ans.push_back(a[i]);
            }
            i++;
            j++; 
        }
    }
    return ans;
}*/

/*Missing number in range [0,n]-optimal solution using bit manupliation*/
/*int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
      xor1=xor1^(i+1);
      xor2=xor2^nums[i];
    }
    return xor1^xor2;
   
  case 2(1 to n(included))
      int missingNumber(vector<int>& arr) {
        // code here
    int n=arr.size();
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
      xor1=xor1^(i+1);
      xor2=xor2^arr[i];
    }
    xor1=xor1^(n+1);
    return xor1^xor2;
    }  
}*/

/*Maximum Consecutive Ones-optimal solution*/
/*int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt=0,maxi=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            cnt++;
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}*/

	
/*Longest subarray with given sum K(positives)*/
// Optimal Solution

/*int longestSubarray(vector<int>& arr, int k) {
    // code here
    int left=0,right=0;
    int n=arr.size();
    int maxlen=0;
    long long sum=arr[0];
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=arr[left];
            left++;
        }
        if(sum==k)
        {
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n)
         {
             sum+=arr[right];
         }
    }
    return maxlen;
}
int main()
{
    vector<int> arr={1,2,3,1,1,1,1,3,3};
    int k=6;
   int maxlen=longestSubarray(arr,k);
   cout<<"The longest subarray is : "<<maxlen;

}*/

/*Longest subarray with given sum K(positives and negatives)-optimal solution*/

/*int longestSubarray(vector<int>& arr, int k) {
    map<long long,int>PreSumMap;
    int maxlen=0;
    long long sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==k)
        {
            maxlen=max(maxlen,i+1);
        }
        long long rem=sum-k;
        if(PreSumMap.find(rem)!=PreSumMap.end())
        {
            int len=i-PreSumMap[rem];
            maxlen=max(maxlen,len);
        }
        if(PreSumMap.find(sum)==PreSumMap.end())
        {
            PreSumMap[sum]=i;
        }
    }
    return maxlen;
}*/

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
