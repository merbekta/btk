// Diziler.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream> 
 

void test(char dizi[],int size) { 
	std::cout << &dizi;

	/*for (int i = 0; i < 3;i++) {
		std::cout << dizi[i];
	}*/
}

 
int main()
{ 

	char a[]{"Omer"};
	test(a);

} 