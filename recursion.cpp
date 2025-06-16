#include<bits/stdc++.h>
using namespace std;

/* Recursion*/

/* Question 1*/
/*void print(int i,int n)
{
  if(i>n){
    return ;
  }
  cout<<i<<endl;
  print(i+1,n);
}
int main()
{
   int n;
   cout<<"Enter n : ";
   cin>>n;
   print(1,n);
}*/

/* Question 2*/
/*void print(int i,int n)
{
   if(i>n)
     return;
   cout<<i<<" ";
   print(i+1,n);
}
int main()
{
   int n;
   cout<<"Enter n : ";
   cin>>n;
   print(1,n);
}*/

/* Question 3*/
/*void print(int i,int n)
{
    if(n<i)
      return;
    cout<<n<<" ";
    print(i,n-1);
}
int main()
{
   int n;
   cout<<"Enter n : ";
   cin>>n;
   print(1,n);   
}*/

/*Question 4*/
// Backtracking
/*void print(int i,int n)
{
    if(n<i){
        return;
    }
    print(i,n-1);
    cout<<n<<" ";
}
int main()
{
   int n;
   cout<<"Enter n : ";
   cin>>n;
   print(1,n);    
}*/

/* Question 5*/
/*void print(int i,int n)
{
   if(i>n)
      return;
   print(i+1,n);
   cout<<i<<" ";
}
int main()
{
   int n;
   cout<<"Enter n : ";
   cin>>n;
   print(1,n);     
}*/

/* Sum of n numbers*/
/* Parmetertized way*/

/*void sumN(int i,int sum)
{
   if(i<1)
   {
      cout<<sum;
      return;
   }
   sumN(i-1,sum+i);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    sumN(n,0);
}

/* Functional */

/*int SumN(int n)
{
    if(n==0)
      return 0;
    else 
      return n+SumN(n-1);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<SumN(n);    
}*/

/* Factorial */
/*int f(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*f(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<f(n);      
}*/

/* Revsersing of an array*/
// Normal method
/*void revarr(int arr[],int st,int end)
{
    int temp;
  while(st<=end)
  {
     temp=arr[st];
     arr[st]=arr[end];
     arr[end]=temp;
     st++;
     end--;
  }
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<endl; 
    revarr(arr,0,n-1);
    cout<<"Reversed array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }  
    return 0; 
}*/

//Using recursion

/*void f(int i,int arr[],int n)
{
    if(i>=n/2)
    {
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    f(0,arr,n);  
    cout<<"Reversed array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }  
    return 0;       
}*/

/* Palindrome using recursion*/
/*int i=0;
bool ispalindrome(string s)
{
   if(i>=s.size()/2) return true;
   if(s[i]!=s[s.size()-i-1]) return false;
   i=i+1;
   return ispalindrome(s);
}
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    cout<<boolalpha;
    cout<<ispalindrome(s);
}*/

/* Subsequence or subset of an array*/
/*void PrintF(int ind,vector<int>&ds,int arr[],int n)
{
    if(ind == n){
        for(auto it:ds){
            cout<<it<<" ";
        }
      if(ds.size()==0){
       cout<<"{}";
      }
      cout<<endl;
      return;
    }
    ds.push_back(arr[ind]);
    PrintF(ind+1,ds,arr,n);
    ds.pop_back();
    PrintF(ind+1,ds,arr,n);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ds;
    PrintF(0,ds,arr,n);
}

/* Hashing */
//Number hashing
/* int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[101]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    cout<<"Enter the key :";
    int q;
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter the number :";
        cin>>num;
        cout<<"The number of time it occured "<<hash[num]<<endl;
    }
}*/

//Character hashing
 /* int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    //pre storing
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']++; //for 256 hash[s[i]]
    }
    cout<<"Enter the key : ";
    int q;
    cin>>q;
    while(q--){
        char ch;
        cout<<"Enter the character :";
        cin>>ch;
        cout<<"The number of times the character occured "<<hash[ch-'a']<<endl; //for 256 hash[ch]
    }
return 0;    
}*/

/*Number hashing using map*/

/*int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    //iteration of map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<"Enter the key :";
    int q;
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter the number : ";
        cin>>num;
        cout<<"The number of time it occured "<<mpp[num]<<endl;
    }        
}*/

/*GFG*/
// int evendiv(int n)
// {
//     int newn=n;
//     int count=0;
//     while(n>0)
//     {
//         int ld=n%10;
//         n=n/10;
//         if(ld != 0 && newn % ld == 0)
//         {
//             count++;
//         } 
//     }
//     return count;
// }
// int main()
// {
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     cout<<evendiv(num);
// }