// Gerekli kütüphaneler vs. eklendi.
#include <iostream>
using namespace std;

int main()
{
	/* Gerekli tanımlamaları yaptım.
		n -> Sayısal değerin kaça kadar gitmesi gerektiği.
		row -> Satır sayısı.
		number -> Döngü içerisindeki ekrana bastırılan değer.
	*/
	int n, row;
	int number = 1;

	// Kullanıcıdan alınması gereken değerleri aldım.
	cout << "En son yazılacak sayısal değeri giriniz :" << endl;
	cin >> n;
	cout << "Kaç satır olucağını giriniz :";
	cin >> row;

	// Döngülerin ilkinin amacı satırı ikincisi ise sütunu dönmektir.
	for (int i = 1; i <= row; i++) {
		for (int j = 0; j < row; j++) {
			if (j >= (row - i) && number <= n) {
				cout << number;
				number++;
			}
			else if (number > n) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
/* Çıktıda normalde amacım sağ tarafa dayalı şekilde bir çıktı almak ancak
   9'dan sonra basamak sayısı 2 olduğu için iki sayılık yer kaplıyor ondan
   dolayı iki basamaklı sayıların geldiği sütunlar sağ doğru kaymaya başlıyor.*/