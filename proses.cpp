void BiayaSKS::proses(){
  hitung(jumlah);
  bayar = (total*150000)-(150000*0.25);
};
void BiayaSKS::hitung(int n){
  if (n != 0){
		total += sks[n];
		hitung (n - 1);
  }
}