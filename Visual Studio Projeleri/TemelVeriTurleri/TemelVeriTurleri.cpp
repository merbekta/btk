#include <iostream>
#include <iomanip>
#include <string>
#include<windows.h>
#include<cwchar>

int main()
{

 
   
    //(Literal Constants)
   /* bool isActive { true };
    std::cout << "Hello WOrld!";*/

    //(Symbolic Constants)
    //const int x { 4 };
    // x=15;
    //const double pi { 3.14 };



    // kapalı tür dönüşümü
    //int a = 10;
    //a = 1.4;

    //std::cout << a;

    //parantez kullanım amaçlarından bir tanesi derleme zamanı hata yakalama
    // int abcdef{ 1.1 }; 
     

    //açık tür dönüşümü
   /* int a = 10;
    a = static_cast<int>(5.9);   
    std::cout << a;*/
    
    /*char ch{97};
    std::cout << static_cast<int>(ch);*/





    // true // doğru // evet // olumlu
    // false // yanlış // hayır // olumsuz
     

   /* bool a = true;

    std::cout << sizeof(a);*/ 

   /* auto d = 1.25;

    std::cout << d;*/

     

    /*wchar_t string1 = '😄';
 
    std::wcout << sizeof(string1);
    return 0;*/

     

    /*for (int i = 0; i < 255; i++) {
        char a = i;
        std::cout << a;
    }*/

   /* auto d = 1;
    std::cout << sizeof(d); */

   /* int a = 5;               
    int b(2);              
    int c{ 2 };         */    
 

    /*int a;

    std::cout << a;*/


   /* char d[] = "merhaba";

    std::cout << d;*/
      
     
 
   /* signed int s = -1;
    unsigned int u = 1 ;

    if (s < u) {
        std::cout << "Kucuk";
    }else {
        std::cout << "Kucuk Degil";
    }*/
 


 /*
    unsigned short x {65535}; 
    std::cout << "x degeri: " << x << '\n';

    x = 65536;  
    std::cout << "x yeni deger: " << x << '\n';

    x = 65537; 
    std::cout << "x son deger: " << x << '\n';*/
  

    /*unsigned int x{3};
    unsigned int y{ 5 };

    std::cout << x - y << '\n';*/
    

    
       /* 9.876500000000000000000000
        9.8765 x 10²⁴

        C++ gösterimi sıfırdan önceki haneler + 1.2e4 olarak gösterilir.
        Örn: 9.8765 x 10²⁴ c++ karşılığı 5.9736e24*/  
        
        /*std::cout << std::setprecision(9);
        std::cout << 9876543.21 << '\n';*/
   


        //double f{1.20000};
        //std::cout << std::setprecision(6);  
        //std::cout << f << '\n';


    //std::cout << std::setprecision(16);
    //std::cout << 9876543.21 << '\n';


   /* unsigned char d = 6;
    unsigned char a = 6;

    
    std::cout << a+d << '\n';*/
 
}
 