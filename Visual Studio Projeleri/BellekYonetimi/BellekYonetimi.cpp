#include <iostream>
 
class Silah {
    public: 
        int* d = nullptr;

        Silah(int a) {
            this->d = new int;
            *this->d = a;

            std::cout << "Olustu";
        }

        ~Silah() { 
            delete d;
            std::cout << "Silindi";
        }

        int* get() {
            return this->d;
        }
};


int main()
{ 
   

    {
        std::shared_ptr<Silah> ptr = std::make_shared<Silah>(10);
        ptr->get(); 
    }
   

 

   /* Silah* silah = new Silah(10);

    int* test = silah->get();

    delete silah;

    std::cout << *test;*/
     

    //std::cout << ptr.use_count();
      

}