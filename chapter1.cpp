#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     std::cout <<"Hello World"<< std::endl;
//     std::cout <<"Number 1"<< std::endl;
//     std::cout <<"Number 2"<< std::endl;
//     return 0;
// }

// int addnumb(int a, int b){ //Function
//     int res= a+b;
//     return res;
// }
// int main(){
//     int firstnum = 23;
//     int secondnum = 17;
//     int sum= firstnum + secondnum;
//     std::cout<<"Sum:"<<sum<<std::endl;

//     sum=addnumb(45,90);
//     std::cout<<"Sum:"<<sum<<std::endl; 

//     std::cout<<"Sum:"<<addnumb(22,76)<<std::endl;    
//     return 0;   
// }

/* Input and Output*/
// int main()
// {
    // std::string Name;
    // int age;
    // std::cout<<"Enter your name:"<<std::endl;
    // std::cin>>Name;

    // std::cout<<"Enter your age:"<<std::endl;
    // std::cin>>age;

    // std::cout<<"Name is "<<Name<<" and age is "<<age<<std::endl;

    /* Inputing data with spaces*/
    // std::string Full_name;
    // std::cout<<"What is your full name:"<<std::endl;
    // std::getline(std::cin,Full_name);
    // std::cout<<"Your full name is "<<Full_name<<std::endl;
    // return 0;

// }

/* Function Overloading*/
// void add(int a,int b){
//     cout<<"Sum of int is : "<<(a+b)<<endl;
// }
// void add(double a,double b){
//     cout<<"Sum of double is : "<<(a+b);
// }
// int main()
// {
//     add(2,3);
//     add(2.5,5.6);
// }

/*3 Sum problem*/
//BF approach
    // vector<vector<int>> threeSum(vector<int>& nums) {
    //     vector<int>store;
    //     set<vector<int>>st;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=i+1;j<n;j++){
    //             for(int k=j+1;k<n;k++){
    //                 if(nums[i]+nums[j]+nums[k]==0){
    //                     store={nums[i],nums[j],nums[k]};
    //                     sort(store.begin(),store.end());
    //                     st.insert(store);
    //                 }
    //             }
    //         }
    //     }
    //   return vector<vector<int>>(st.begin(), st.end());
    
    // }

/*Better approach*/
/*    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            set<int>checknum;
            for(int j=i+1;j<n;j++){
                 int target=-(nums[i]+nums[j]);
                 if(checknum.find(target)!=checknum.end())
                 {
                    vector<int>temp={nums[i],nums[j],target};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                 }
                 checknum.insert(nums[j]);
                }
            }
        vector<vector<int>> ans(st.begin(), st.end()); 
        return ans;  
    }*/

/*Optimal solution*/
/*    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                   j++;
                }
                else if(sum>0){
                   k--;
                }
                else
                {
                   vector<int>storeTriplet={nums[i],nums[j],nums[k]};
                   ans.push_back(storeTriplet);
                   j++;
                   k--;
                   while (j < k && nums[j] == storeTriplet[1]) j++;
                   while (j < k && nums[k] == storeTriplet[2]) k--; 
                }
            }
        } 
        return ans;
    }*/