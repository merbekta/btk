 #include <iostream>

int main()
{ 


    int a = 0;
    int b = 0;
    char islem = '+';


    

    while(true){
        std::cout << "Birinci sayi" << std::endl;
        std::cin >> a;
        std::cout << "ikinici sayi" << std::endl;
        std::cin >> b;

        std::cout << "İslem giriniz" << std::endl;
        std::cin >> islem;
                    
        switch (islem) {
            case '+':
                std::cout << "Sonuc:" << a + b;
                break;
            case '-':
                std::cout << "Sonuc:" << a - b;
                break;
            case '*':
                std::cout << "Sonuc:" << a * b;
                break;
            case '/':
                try
                {
                    std::cout << "Sonuc:" << a / b; 
                    throw std::runtime_error("Something Bad happened here");
                }
                catch (std::exception const& e)
                {
                    std::cout << "Hata";
                }
                
                break;
            default:
                std::cout << "Bilinmeyen islem";
                break;
        }

    }
 

 

     
}