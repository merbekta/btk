#include <iostream> 
#include <fstream> 
#include <string>

 

std::string selam(std::string mesaj) {
    return mesaj;
}

using func = std::string(*)(std::string);


void geriAra(func f) {
   std::string a =  f("Merhaba");
   std::cout << a;
}

int main()
{
   
     
    
}
 