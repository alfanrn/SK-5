#include <iostream>
using namespace std;
class BiayaSKS {
public :
void input();
void proses();
void output();
void masuk(int n);
void hitung(int n);
void keluar(int n);
private:
string nama, matkul[50];
int sks[50];
int jumlah, total=0, bayar, nim;
};
void BiayaSKS::input(){
  cout << "||============= APLIKASI BIAYA SKS ============||" << endl;
  cout << "\n\t Masukkan Nama: "; 
  cin >> nama;
  cout << "\t Masukkan NIM: "; 
  cin >> nim;
  cout <<"||                                              ||";
  cout << "\n Masukkan jumlah mata kuliah yang anda diambil : ";cin >> jumlah;
  masuk(jumlah);
  cout << "=================================================" << endl;
  cout <<"||                                              ||";
}
void BiayaSKS::masuk(int n){
  if (n != 0){
		cout << "\n Masukkan nama matkul : "; 
    cin >> matkul[n];
		cout << " Masukkan sks matkul : "; 
    cin >> sks[n];
    cout <<"||                                              ||"<<endl;
		masuk(n - 1);
  }
}
void BiayaSKS::proses(){
  hitung(jumlah);
  bayar = (total*150000)-(150000*0.25);
}
void BiayaSKS::hitung(int n){
  if (n != 0){
		total += sks[n];
		hitung (n - 1);
  }
}
void BiayaSKS::output(){
  cout << "\t Nama Mahasiswa\t: " << nama << endl;
  cout << "\t NIM Mahasiswa\t: " << nim <<endl;
  cout <<"||                                              ||"<<endl;
  cout << "\n\t\t\tMATA KULIAH YANG DIAMBIL \t" << endl;
  cout <<"||                                              ||"<<endl;
  keluar(jumlah);
  cout << "================================================" << endl;
  cout << " Total sks\t= " << total << " sks" << endl;
  cout << " Total biaya\t= Rp." << bayar << endl; 
  cout << "================================================" << endl;
}
void BiayaSKS::keluar(int n){
  if (n != 0){
      cout <<"\t\t" << matkul[n] << "\t -> \t" << sks[n] << " SKS" << endl;
      keluar(n - 1);
  }
}