#include <iostream>

int main()
{
    //ilk programım
    std::cout << "Merhaba Dünya!\n";
    return 0;
}


/*

1 Satır önişlemci yönergesi adı verilen özel bir satır türüdür.Bu önişlemci yönergesi,
konsoldan / konsoldan metin okumamıza ve yazmamıza izin veren C++ standart kitaplığının bir parçası olan iostream kitaplığının içeriğini kullanmak istediğimizi belirtir.
5. satırda std::cout kullanmak için bu satıra ihtiyacımız var.Bu satırı hariç tutmak, 5. satırda bir derleme hatasına neden olur, çünkü derleyici aksi halde std::cout'un ne olduğunu bilemez.


2. Satır boştur ve derleyici tarafından yok sayılır.Bu satır, yalnızca programı insanlar için daha okunabilir hale getirmeye yardımcı olmak için mevcuttur

3. Satır derleyiciye main adında bir fonksiyon yazacağımızı(tanımlayacağımızı) söyler.Yukarıda öğrendiğiniz gibi, her C++ programının bir ana işlevi olmalıdır, yoksa bağlantı kurulamaz.

4. ve 8. satırlar derleyiciye hangi satırların ana işlevin parçası olduğunu söyler . 4. satırdaki açılı ayraç ile 8. satırdaki kapanış kaşlı ayraç arasındaki her şey ana işlevin bir parçası olarak kabul edilir.
Buna fonksiyon gövdesi denir.

5. Satır bir açıklama satırıdır. Programcılar yazdıkları kodların ne işe yaradığını veya fonksiyonun hangi parametleri aldığı gibi açıklamaları yazmasına olanak tanır.
Bu satır derleyici tarafından derlenmez ve erleyici bu alanı görmezden gelir.

6. Satır, main işlevindeki ilk ifadedir ve programımızı çalıştırdığımızda yürütülecek ilk ifadedir.std::cout("karakter çıktısı" anlamına gelir) ve << operatör,
çıktısı alınacak konsola harf veya sayı göndermemize izin verir.Bu durumda, konsola çıkacak olan “Merhaba Dünya!” metnini gönderiyoruz.Bu ifade, programın görünür çıktısını oluşturur.

7. satır bir dönüş ifadesidir.Yürütülebilir bir program çalışmayı bitirdiğinde, program başarılı bir şekilde çalışıp çalışmadığını belirtmek için işletim sistemine bir değer gönderir.
Bu özel dönüş ifadesi, işletim sistemine 0 değerini döndürür, bu da "her şey yolunda gitti!" anlamına gelir.Bu, yürütülen programdaki son ifadedir.

*/