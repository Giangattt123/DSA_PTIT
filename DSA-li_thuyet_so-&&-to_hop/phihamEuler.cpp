// dem so luong cac snt cx nhau ko vuot qua n
// cong thuc phi ham euler
ll ph_euler(ll n){
	ll res = n;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			res -= res / i;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n > 1) res -= res / n;
	return res;
}
