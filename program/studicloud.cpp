#include <iostream>
using namespace std;
class cloud {
public:
  void cetak_harga();
  void hitung_diskon();
  void hitung_harga_total();
  void output();

private:
  int pilih, harga, harga_total;
  float diskon_wilayah, diskon_ramadhan;
};
//--------------------------------------------
void cloud::cetak_harga() {
  cout << "APLIKASI PENYEDIA LAYANAN CLOUD" << endl;
  cout << "1.Shared Hosting : 300 ribu" << endl;
  cout << "2.VPS Server : 930 ribu" << endl;
  cout << "3.Cloud Server : 5 juta" << endl;
  cout << "4.Domain Name : 280 ribu" << endl;
  cout <<"Masukkan layanan yang ingin dipilih : ";
  cin >> pilih;
  switch (pilih) {
  case 1:
    harga = 300000;
    break;
  case 2:
    harga = 930000;
    break;
  case 3:
    harga = 5000000;
    break;
  case 4:
    harga = 280000;
    break;
  }
}
//------------------------------------
void cloud::hitung_diskon() {
  cout << "Apakah diskon ramadhan berlaku?(1.yes/0.no)";
  cin >> pilih;
  if (pilih == 1) {
    diskon_ramadhan = 0.1 * harga;
  } else {
    diskon_ramadhan = 0;
  }
  cout << "Apakah anda berada di indonesia? (1.yes/0.no)";
  cin >> pilih;
  if (pilih == 1) {
    diskon_wilayah = 0.03 * harga;
  } else {
    diskon_wilayah = 0;
  }
}
//--------------------------------------------
void cloud::hitung_harga_total() {
  harga_total = 0;
  harga_total = harga - diskon_ramadhan - diskon_wilayah;
}
//--------------------------------------------
void cloud::output() {
  for (int i = 0; i <= 35; i++) {
    cout << "=";
  }
  cout<<endl;
  cout << " S T R U K  P E M B A Y A R A N " << endl;
  for (int i = 0; i <= 35; i++) {
    cout << "=";
  }
  cout<<endl;
  cout << "Harga           : " << harga << endl;
  cout << "Diskon Ramadhan : " << diskon_ramadhan << endl;
  cout << "Diskon Wilayah  : " << diskon_wilayah << endl;
  cout << "Harga Total     : " << harga_total << endl;
  for (int i = 0; i <= 35; i++) {
    cout << "=";
  }
  cout<<endl;
  cout << "Terimakasih Sudah Membeli" << endl;
}

int main() {
  cloud x;
  x.cetak_harga();
  x.hitung_diskon();
  x.hitung_harga_total();
  x.output();

  return 0;
}
