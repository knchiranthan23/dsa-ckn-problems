#include<bits/stdc++.h>
using namespace std;

/* Selection Sort */
// void selection_sort(int arr[],int n){
//     int i,j;
//     for(i=0;i<=n-2;i++)
//     {
//         int min=i;
//         for(j=i;j<=n-1;j++){
//            if(arr[j]<arr[min]){
//                 min=j;
//            }           
//         }
//         int temp=arr[i];
//         arr[i]=arr[min];
//         arr[min]=temp;       
//     }
// }
/* Bubble Sort */
// void bubble_sort(int arr[],int n){
//     int i,j;
//     for(int i=n-1;i>=0;i--){
//         int didswap=0;
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//                 didswap++;
//             }
//         }
//         if(didswap==0) 
//            break;
//         cout<<"Runs"<<"\n";
//     }
// }
/* Insertion sort*/
/*void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}*/
/*Merge Sort*/
/*void merge(vector<int>& arr,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high)
    {
         if(arr[left]<=arr[right])
         {
            temp.push_back(arr[left]);
            left++;
         }
         else{
            temp.push_back(arr[right]);
            right++;
         }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }  
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }  
}
void ms(vector<int>& arr,int low,int high)
{
  int mid=(low+high)/2;
  if(low>=high)  return;
  ms(arr,low,mid);
  ms(arr,mid+1,high);
  merge(arr,low,mid,high);  
}*/

/*Quick Sort*/
int p(vector<int>& arr,int low,int high)
{
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j)
    {
        while (arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while (arr[j]>pivot && j>=low+1)
        {
            j--;
        } 
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }      
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int>& arr,int low,int high)
{
    if(low<high)
    {
        int pindx=p(arr,low,high);
        qs(arr,low,pindx-1);
        qs(arr,pindx+1,high);
    }
}
vector<int> quickSort(vector<int>& arr)
{
    qs(arr,0,arr.size()-1);
    return arr;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    arr=quickSort(arr);
    // ms(arr,0,n-1);
    // selection_sort(arr,n);
    //bubble_sort(arr,n);
    // insertion_sort(arr,n);
    cout<<"The sorted array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
}

