#include<bits/stdc++.h>
using namespace std;
// int main(){
//    pair<int,int>p={1,3};
//    cout<<p.first<<" "<<p.second;

//    pair<int,pair<int,int>>p={1,{3,4}};
//    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;

//   pair<int ,int >arr[]={{1,2},{3,4},{5,6}};
//   cout<<arr[1].second<<endl;
//   cout<<arr[0].first;

// return 0;
// }

/* Vector one of the containers*/
//  int main(){
    // vector<int>v;
    // v.push_back(1);
    // v.emplace_back(23);
    // cout<<v[1]<<endl;

    // vector<int>v1{4,23,45,100};
    // vector<int>::iterator it=v1.begin();
    // cout<<*(it)<<endl;
    // cout<<v1.back()<<endl;
    // vector<int>::iterator it=v1.end();
    // cout<<*(it)<<endl;    
    // for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)
    // {
    //     cout<<*(it)<<" ";
    // }

    // auto
    // for(auto it=v1.begin();it!=v1.end();it++)
    // {
    //     cout<<*(it)<<" ";
    //  }

    //Delete an element
    // vector<int>v={23,4,32,55,6};
    // v.erase(v.begin()); //Delete starting element
    // v.erase(v.begin()+1,v.begin()+4);//delete the elements within range
    // for(auto it=v.begin();it!=v.end();it++)
    // { 
    //     cout<<*(it)<<" ";
    // }

    //Insert funcations
    // v.insert(v.begin()+1,2,69);
    // cout<<endl<<"This example is for insert function"<<endl;
    // for(auto it=v.begin();it!=v.end();it++)
    // { 
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // cout<<boolalpha;
    // cout<<v.empty();//To check wether vector is empty or not
//  }

/* List which is one of the containers aswell*/
// int main()
// {
//     list<int>ls{23,4};
//     ls.push_front(3);
//     ls.push_back(8);
//     for(auto it=ls.begin();it!=ls.end();it++)
//     {
//         cout<<*(it)<<" ";
//     }
//     cout<<endl;
//     ls.pop_back();
//     cout<<"Last elements is : "<<ls.back();
// }

/* deqeue is again one of the containers*/
// int main()
// {
//     deque<int>dq;
//     dq.push_back(23);
//     dq.push_front(33);
//     cout<<dq.front()<<endl;
//     cout<<dq.back()<<endl;
// }

/* Stack is anothe example of container*/
// int main()
// {
//     stack<int>st;
//     st.push(234);
//     st.push(44);
//     st.push(32);
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top();
// }

//Queue as well
/* Priority Queue*/
// int main()
// {
//     priority_queue<int>pq;
//     pq.push(23);
//     pq.push(45);
//     pq.push(3);
//     cout<<pq.top()<<endl;
//     // poping out topmost element
//     pq.pop();// 45 is removed
//     cout<<pq.top()<<endl;  
//     pq.pop();// 23 is removed
//     cout<<pq.top()<<endl;      
// }

/* Set*/
/*int main()
{
    set<int>st;
    st.insert(90);
    st.insert(66);
    st.insert(87);
    st.insert(87);
    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<st.count(66)<<endl;
    // st.erase(87);
    // cout<<st.count(87)<<endl;    
    auto ck=st.lower_bound(87);
    cout<<*(ck)<<endl;
    auto ck1=st.upper_bound(87);
    cout<<*(ck1)<<endl;  
    auto ck2=st.find(66);
    cout<<*(ck2);  
}*/

/* Map container*/
// int main()
// {
//     map<int,int>mp;
//     mp.insert({2,45});
//     mp[3]=40;
//     mp.insert({1,23});
//     for(auto it:mp)
//     {
//         cout<<it.first<<" "<<it.second<<endl;
//     }
//     mp.erase(1);
//     cout<<"After erasing"<<endl;
//     for(auto it:mp)
//     {
//         cout<<it.first<<" "<<it.second<<endl;
//     }   
//     auto it=mp.find(3);
// }    

// int main()
// {
    // string s;
    // cout<<"Enter the string : ";
    // cin>>s;
    // sort(s.begin(),s.end());
    // cout<<"Sorted string is : "<<s;
    // cout<<endl<<"Number of permuatations are :"<<endl;
    // do{
    //     cout<<s<<endl;
    // }while(next_permutation(s.begin(),s.end()));

//     int arr[5]={23,44,1,33,67};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int maxi=*max_element(arr,arr+n);
//     cout<<maxi;
// }
/* Basic Maths*/
// int main()
// {
//     int N,lastdig;
//     cout<<"Enter the value of N :";
//     cin>>N;
//     while (N>0)
//     {
//        lastdig=N%10;
//        cout<<lastdig<<endl;
//        N=N/10;
//     }
//     return 0;
// }
/*Reverse Number*/
// int main()
// {
//     int N,revnum=0,count;
//     cout<<"Enter N : ";
//     cin>>N;
//     while(N>0)
//     {
//        int lastdigit=N%10;
//        N=N/10;
//        revnum=(revnum*10)+lastdigit;
//     }
//     cout<<revnum;
// }

/*Palindrome*/
/*void Checkpalindrome(int N)
{
    int revnum=0;
    int N1=N;
    while(N>0)
    {
       int lastdigit=N%10;
       N=N/10;
       revnum=(revnum*10)+lastdigit;
    }  
    if(N1==revnum)
    {
        cout<<"True";
    } 
    else{
        cout<<"False"; 
    }
}
int main()
{
    int N;
    cout<<"Enter N : ";
    cin>>N;
    Checkpalindrome(N);
}*/

/* Amstrong problem*/
/*int check_digit(int n)
{
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	return count;
}
bool checkArmstrong(int n){
   int ld,sum=0;
   int temp=n;
   int countd=check_digit(n);
   while(n>0)
   {
	   ld=n%10;
	   sum=sum+pow(ld,countd);
	   n=n/10;
   }
   if(temp==sum)
     return true;
   else
     return false;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int res=checkArmstrong(n);
    cout<<res;
}*/

/* Divisors of number*/

// int main()
// {
//     int n;
//     cout<<"Enter n :";
//     cin>>n;
//     cout<<"The divisors of "<<n<<" are : "<<endl;
//     for(int i=1;i<=n;i++)
//     {
//         if((n%i)==0)
//         {
//             cout<<i<<" ";
//         }
//     }
    
    /* Another method is*/
//     vector<int>v;
//     for(int i=1;i*i<=n;i++)
//     {
//         if((n%i)==0){
//             v.push_back(i);
        
//             if((n/i)!=i)
//                v.push_back(n/i);
//         }
//     }
//     for(auto it=v.begin();it!=v.end();it++){ cout<<*(it)<<" ";} 
//     cout<<endl;   
//     sort(v.begin(),v.end());
//     for(auto it=v.begin();it!=v.end();it++){ cout<<*(it)<<" ";}
// }

/* Prime number check*/
/*int main()
{
    int n,count=0;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    }
    if(count==2)
    {
        cout<<n<<" is a prime number";
    }
    else 
        cout<<n<<" is not a prime number";
}*/

/* GCD or HCF*/
/*int main()
{
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    while(a>0 && b>0)
    {
        if(a>b)
          a=a%b;
        else 
          b=b%a;
    } 
    if(a==0){
        cout<<b;
    }
    else{
        cout<<a;
    }
    return 0;
}

/* First occurance of x in an array*/
/*int FirstOccurance(vector<int>& arr,int x)
{
    auto it=lower_bound(arr.begin(),arr.end(),x);
    if(it!=arr.end() && *(it)==x)
    {
        return distance(arr.begin(),it);
    }
    else
       return -1;
}
int main()
{
    vector<int> arr{1,4,4,4,4,9,9,10,11};
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    int index=FirstOccurance(arr,x);
    cout<<"First occurance of "<< x << " is at index "<<index;
}*/