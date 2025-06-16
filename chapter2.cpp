#include<iostream>
/* Number system*/
// int main()
// {
//     int numb1 = 15;
//     int numb2 = 015;
//     int numb3 = 0x0c;
//     int numb4 = 0b00001101;

//     std::cout<<"number 1 is :"<<numb1<<std::endl;
//     std::cout<<"number 2 is :"<<numb2<<std::endl;
//     std::cout<<"number 3 is :"<<numb3<<std::endl;
//     std::cout<<"number 4 is :"<<numb4<<std::endl;
//     return 0;
// }

/* Integer number system*/
// int main()
// {
//     int val1=23;
//     int val2=-45;
//     std::cout<<"Value 1: "<<val1<<std::endl;
//     std::cout<<"Value 2: "<<val2<<std::endl;

//     std::cout<<"Size of value 1: "<<sizeof(val1)<<std::endl;
//     std::cout<<"Size of value 2: "<<sizeof(val2)<<std::endl;  

    // unsigned int val3=34;
   // unsigned int val4=-90; compile time error
    // std::cout<<"Value 3: "<<val3<<std::endl;
   // std::cout<<"Value 4: "<<val4<<std::endl;    
    // return 0;
// }

/*Fractional numbers*/
// int main()
// {
//     float numb1=23.556f;
//     double numb2=2355.55;
//     long double numb3=452211.3l;
//     std::cout<<"Number 1: "<<numb1<<std::endl;
//     std::cout<<"Number 2: "<<numb2<<std::endl;    
//     std::cout<<"Number 3: "<<numb3<<std::endl;
//     double numb4{192400023.0};
//     std::cout<<"Number 4: "<<numb4<<std::endl; 
//     double numb5=1.99e6;
//     std::cout<<"Number 5: "<<numb5<<std::endl; 
//     return 0;      
// }
//

// Infinity and NAN
// int main()
// {
//     double numb1=3.42;
//     double numb2=0;
//     double numb3=0;
//     double res1=numb1/numb2;
//     double res2=numb2/numb3;
//     std::cout<<numb1<<"/"<<numb2<<":"<<res1<<std::endl;//res1=inf
//     std::cout<<numb2<<"/"<<numb3<<":"<<res2<<std::endl;//res2=nan
//     return 0;
// }

/*Boolean values*/
// int main()
// {
//     bool red_light=true;
//     if(red_light){
//         std::cout<<"stop"<<std::endl;
//     }
//     else{
//         std::cout<<"go through"<<std::endl;
//     }
//     std::cout<<red_light<<std::endl;    
//     std::cout<<std::boolalpha;//converts res into human form
//     std::cout<<red_light<<std::endl;

// }

/* Char and text*/
// int main()
// {
//     char char1='c';
//     std::cout<<"character is: "<<char1<<std::endl;
//     char value=65;
//     std::cout<<value<<std::endl;
//     std::cout<<"int(value): "<<static_cast<int>(value)<<std::endl;    
//     return 0;
// }

/*Auto*/
// int main()
// {
    // auto var1=122.67l;
    // auto var2=425;
    // std::cout<<"Size of var 1: "<<sizeof(var1)<<std::endl;
    // std::cout<<"Size of  var2: "<<sizeof(var2)<<std::endl;

    //Auto type duction
    // auto var1{234u};
    // var1 = -25; // results in garbage value
    // std::cout<<"Variable is: "<<var1<<std::endl;

    // return 0;
// }