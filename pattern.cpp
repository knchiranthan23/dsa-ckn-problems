#include<bits/stdc++.h>
using namespace std;

/*Question number 1*/
// int main()
// {
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			cout<<"*";
// 		}
// 		cout<<"\n";
// 	}
//     return 0;    
// }

/* Question number 2*/
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }    
//     return 0;
// }

/* Question number 3*/
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
//         cout<<"\n";
//     }    
//     return 0;
// }    

/* Question number 4*/
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }    
//     return 0;
// }  

/* Question number 5*/
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n;j>i;j--)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<"\n";
//     }    
//     return 0;
// }

/* Question number 6*/
/*int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        { 
            cout<<n-j+1 <<" ";  
        }
        cout<<"\n";
    }    
    return 0;
}*/

/* Question number 7*/
/*int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }  
        cout<<"\n";              
    }
}*/

/* Question number 8*/
/* int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-2*i-1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }  
        cout<<"\n";              
    }
}*/

/* Question number 9*/
/* int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }  
        cout<<"\n";              
    }
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-2*i-1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }  
        cout<<"\n";              
    }
}*/

/* Question number 10*/
// int main()
// {
//     int n;
//     cout<<"Enter number n : ";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i++)
//     {  
//        int stars=i;
//        if(i>n) stars=2*n-i;
//        for(int j=1;j<=stars;j++)
//        {
//         cout<<"*";
//        }
//        cout<<endl;
//     }
// }

/* Question number 11*/
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int start;
//     for(int i=0;i<n;i++)
//     {
//         if(i%2==0) start=1;
//         else start=0;
//         for(int j=0;j<=i;j++)
//         {
//             cout<<start;
//             start=1-start;
//         }
//         cout<<endl;
//     }
// }

/* Question number 12*/
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
//         //space
//         for(int j=1;j<2*n-2*i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=i;j>=1;j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

/* Question number 13*/
/*int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int c=1;
    for(int i=1;i<=n;i++)
    { 
        //int c=1; Pattern of my own example
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c=c+1;
        }
        cout<<endl;
    }
}*/

/* Question number 14*/
// int main()
// { 
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         char ch='A';
//         for(int j=0;j<=i;j++)
//         {
//             cout<<ch<<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
// }

/* Question number 15 */
// int main()
// { 
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         char ch='A';
//         for(int j=n-1;j>=i;j--)
//         {
//             cout<<ch<<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
// }

/* Question number 16*/
// int main()
// { 
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     char ch='A';
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<ch<<" ";
//         }
//         ch=ch+1;
//         cout<<endl;
//     }
// }

/* Question number 17*/
// int main()
// {
//     int n,i,j;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         //space 
//         for(j=0;j<n-i-1;j++)
//         {
//             cout<<" ";
//         } 
//         //alphabets
//         int breakpoint=(2*i+1)/2;
//         char ch='A';
//         for(j=0;j<2*i+1;j++)
//         {
//             cout<<ch;            
//             if(j<breakpoint) ch++;
//             else ch--;            
//         }
//         //space 
//         for(j=0;j<n-i-1;j++)
//         {
//             cout<<" ";
//         }         
//         cout<<endl;      
//     }
// }

// /* Question number 18*/
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         // for(char ch=('A'+n-1)-i;ch<=('A'+n-1);ch++)
//         // {
//         //     cout<<ch;
//         // }
//         for(char ch=('A'+n-1);ch>=('A'+n-1)-i;ch--)
//         {
//             cout<<ch; //another pattern
//         }
//         cout<<endl;
//     }
// }

/* Question number 19*/

/*Question number 19-A*/
/*int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //star
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=2*i-2;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }  
        cout<<endl;      
    }
}*/

/* Question number 19-B*/
/*int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;        
    }
}*/

//we have to combine question number 19-A and 19-B to get answer of 19
/*int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //star
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=2*i-2;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }  
        cout<<endl;      
    }
    //The Symmteric point
    for(int i=1;i<=n;i++)
    {
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;        
    }    
}*/

/* Question number 20*/
/*int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int star,space;
    for(int i=1;i<=2*n-1;i++)
    {
        //star
        if(i<=n) star=i;
        else star=2*n-i;
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        //space
        if(i<=n) space=2*(n-i);
        else space=2*(i-n);
         for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }  
        //star
        if(i<=n) star=i;
        else star=2*n-i;
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }  
        cout<<endl;           
    }
}*/

/* Question number 21*/
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(i==1||i==n||j==1||j==n)
//             {
//                 cout<<"*";
//             }  
//             else 
//             {
//                 cout<<" ";
//             }   
//         }
//         cout<<endl;
//     }   
// }

/* Question number 22*/
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=0;i<2*n-1;i++)
//     {
//         for(int j=0;j<2*n-1;j++)
//         {
//             int top=i;
//             int left=j;
//             int right=(2*n-2)-j;
//             int bottom=(2*n-2)-i;
//             cout<<(n-min(min(top,bottom),min(right,left)));
//         }
//         cout<<endl;
//     }
// }
