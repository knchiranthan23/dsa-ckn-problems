#include<iostream>

/* If statment*/
// int main()
// {
//     int i;
//     std::cout<<"Enter i : ";
//     std::cin>>i;
//     if(i<15)
//     {
//         std::cout<<"i is less than 15"<<std::endl;
//     }
//     std::cout<<"Thank you"<<std::endl;
// return 0;    
// }

/* If else*/
// int main()
// {
//     int number;
//     std::cout<<"Enter the number : ";
//     std::cin>>number;
//     if(number % 2 == 0)
//     {
//         std::cout<<"Number is even"<<std::endl;
//     }
//     else
//     {
//         std::cout<<"Number is odd"<<std::endl;
//     }

/* Another example*/
// bool green;
// bool police_stop;

// std::cout<<"Enter the green signal :";
// std::cin>>green;

// std::cout<<"Enter the what does police do :";\
// std::cin>>police_stop;
// if(green && !police_stop)
// {
//     std::cout<<"Go"<<std::endl;
// }
// else{
//     std::cout<<"Stop"<<std::endl;
// }
// return 0;
// }

/* if-else-if*/
// int main()
// {
//     int age;
//     std::cout<<"Enter age : ";
//     std::cin>>age;
//     if(age<18)
//     {
//         std::cout<<"He/She is not eligable to vote"<<std::endl;
//     }
//     else if(18<=age && age<60)
//     {
//         std::cout<<"He/She is eligable to vote"<<std::endl;
//     }
//     else if(60<=age && age<=110)
//     {
//         std::cout<<"He/She is eligable to vote and is considered as older citzen of country"<<std::endl;
//     }
//     else
//     {
//         std::cout<<"Invalid data"<<std::endl;
//     }
//     return 0;
// }
using namespace std;


/*Switch statement*/
// int main()
// {
//     int day;
//     cout<<"Enter the day:";
//     cin>>day;
//     switch (day)
//     {
//     case 1:
//         cout<<"Monday";
//         break;
//     case 2:
//         cout<<"Tuesday";
//         break;
//     case 3:
//         cout<<"Wednesday";
//         break;    
//     default:
//         cout<<"Invalid";
//         break;
//     }
//    return 0; 
// }

/*Calculator*/
// #include<stdlib.h>
// int main()
// {
//     int a,b;
//     char choice;
//     char x;
//     while(1)
//     {
//         cout<<"Enter the any one(+,-,*,/) or \n Enter x to exit"<<endl;
//         cin>>choice;
//         if(choice == 'x')
//         {
//             exit(0);
//         }
//         cout<<"Enter a and b :";
//         cin>>a>>b;                 
//         switch(choice)
//           {
//             case '+':
//               cout<<a<<" + "<<b<<" is : "<<a+b<<endl;
//               break;
//             case '-':
//               cout<<a<<" - "<<b<<" is : "<<a-b<<endl;
//               break; 
//             case '*':
//               cout<<a<<" * "<<b<<" is : "<<a*b<<endl;
//               break;
//             case '/':
//               cout<<a<<" / "<<b<<" is : "<<a/b<<endl;
//               break; 
//             default:
//               cout<<"Invalid expression";
//               exit;                                 
//           }
        
//     }

// }

/* Loops*/

/* 1.For loops*/
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         cout<<i<<"\t";
//     }
//     return 0;
// }

/* 2.While loop*/
// int main()
// {
//     int i=1;
//     while(i<5)
//     {
//         cout<<"Hello chiru"<<"\n";
//         i++;
//     }
//   return 0;
// }

/* do while loops*/
// int main()
// {
//   int i;
//   cout<<"Enter i : ";
//   cin>>i;
//   do
//   {
//     cout<<i<<" : I love c++\n";
//     ++i;
//   } while (i<0);
// return 0;
// }

/* Arrays*/
// 1D array

/*int main()
{
  int n;
  cout<<"Enter the number n:";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements :";
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
     cout<<" ";
  }
  cout<<"Array elements are : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
return 0;
} */

// 2D array
/* int main()
{
  int arr[3][3];
  cout<<"Enter the array : ";
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
      cout<<" ";
    }
  }
  cout<<"\n Array is : \n";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
  return 0;
} */

/* Strings*/
// int main()
// {
//   string s = "chiranthan";
//   cout<<s[3]<<endl;
//   int len = s.size();
//   cout<<len<<endl;
//   cout<<s[len-1]<<endl;
//   s[len-1]='x';
//   cout<<s[len-1];
// }

/* Functions*/
// Non-Parameterized

// void Printname()
// {
//    cout<<"My name is chiru";
// }
// int main()
// {
//   Printname();
//   return 0;
// }

//Parameterized 
#include <stdio.h> 
/*void sqofn(int n)
{
  cout<<"The square of "<<n<<" is : "<<n*n;
}
int main()
{
  int number;
  cout<<"Enter the number: ";
  cin>>number;
  sqofn(number);
}*/

/*Pass by value and refernce*/
/*void add(int &n)    
{
   n = n + 10;
  cout<<"n is : "<<n<<endl;
}
int main()
{
  int n;
  cout<<"Enter n : ";
  cin>>n;
  add(n);
  cout<<"n in main function is : "<<n;
  return 0;
}*/

//using array
/*void change(int arr[])
{
  arr[2]= 23;
  cout<<"Array element in change function is : "<<arr[2]<<endl;
}
int main()
{
  int n;
  cout<<"Enter n : ";
  cin>>n;
  int arr[n];
  cout<<"Enter array element"<<endl;
  for(int i = 0;i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"Array element before change is :"<<arr[2]<<endl;
  change(arr);
  cout<<"Array element in main function is : "<<arr[2];
  return 0;
}*/

/* Pointers */

// int main()
// {
//   int var1=23;
//   int *ptr;
//   ptr = &var1;
//   cout<<"The value of variable is :"<<var1<<endl;
//   cout<<"The address of variable is :"<<ptr<<endl;
//   cout<<"The value of variable interms of pointer is :"<<*ptr<<endl;
//   cout<<"The address of pointer variable :"<<&ptr<<endl;

// char *txt="Chiranthan";
// cout<<"Enter the string : "<<txt<<endl;
// cout<<" Address of the string is : "<<*txt;
// return 0;
// }

/*Pass by reference with pointer variables*/
// void square(int *n)
// {
//   cout<<"Address of n in functions is : "<<n<<endl;
//   *n *= *n;
// }
// int main()
// {
//   int n1;
//   cout<<"Enter the value for n : ";
//   cin>>n1;
//   cout<<"Address of n1 in main function is : "<<&n1<<endl;
//   square(&n1);
//   cout<<"Square of n is : "<<n1<<endl;
//   cout<<"Reflected change in n is : "<<n1<<endl;
//   return 0;
// }

/*Array with pointers*/
// int main()
// {
//   int arr[]={22,3,44,6};
//   int *ptr;
//   ptr=arr;
//   cout<<"Address of each array element"<<endl;
//   for(int i=0;i<4;i++)
//   {
//     cout<<i<<" Element address is : "<<ptr+i<<endl;
//   }
//   cout<<"\n Value of each element in an array is \n";
//   for(int i=0;i<4;i++)
//   {
//     cout<<i<<" Element value is : "<<*(ptr+i)<<endl;
//   } 
//     return 0;
// } 