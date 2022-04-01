#include <iostream>

template<typename T>
class Mat {
public:
	T a{};
	T b{};

	T tola() {
		return a + b;
	}
};


class Silah{};
class Mermi{};
 

template<typename T>
T* nesneYap(T* nesne) {
	return nesne;
}


int main()
{  
	Silah silah;
	std::cout<<nesneYap<Silah>(&silah);

	/*Mat<int> mat;
	mat.a = 10;
	mat.b = 20;
	std::cout<<mat.tola();

	Mat<float> mat1;
	mat1.a = 10.5;
	mat1.b = 20.9;
	std::cout << mat1.tola();*/


	//std::cout << max(1.1f,5.5f);
	//std::cout << max<int, float,double>(10,5.5f,5.698455);
}
 