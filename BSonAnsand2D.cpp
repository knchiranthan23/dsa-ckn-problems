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
