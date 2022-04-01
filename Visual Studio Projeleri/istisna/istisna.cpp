#include <iostream>
#include <string>


class Ex {
    private:
        std::string message;

    public:

        Ex(const std::string msg) : message(msg) {}

        std::string yaz() {
            return this->message;
        }
};


std::string hata(std::string error) {
    return error;
}


double bolme(int a,int b) { 
    if (b < 1) { 
        throw -1;
    }
      
    if (a<1) {   
        throw hata("merhaba 123"); 
    }

    return a / b;
}


int main()
{  
    try {
        std::cout << bolme(0, 3);
    }
    catch (int err) {
        std::cout << err << "Bir sayı 0'a bölünemez";
    }
    catch (bool) {
        std::cout << "Bir sayı 0'a bölünemez";
    }
    catch (Ex err) {
        std::cout << err.yaz();
    }
    catch (std::string err) {
        std::cout << err;
    }

    
}

