#include<bits/stdc++.h>
using namespace std;

//Mang a: Mang dung de sinh to hop, a[i] = x thi phan tu tai vi tri x-1 cua m?ng s duoc loi ra
//VD: 1 3 5 --> Loi s0 s3 s4

int n, a[100], ok;//ok: con sinh duoc

void kt(){ //khoi tao cau hinh dau tien
	for(int i=0;i<n;i++){
		a[i] = 0;
	}
}

void sinh(){
	int i=n - 1;//xet tu bit cuoi cung
	while(i>=0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==-1){//da den xau cuoi
	    ok=0;//
	} else {
		a[i]=1;
	}
}

int main(){
	cin>>n; 
	vector<string>v;
	for(int i = 0;i<n;i++){
		string s; cin>>s;
		v.push_back(s);
	}
	kt();
	ok = 1;
	set<string>sstr;
	while(ok==1){
		string s = "";
		for(int i = 0;i<n;i++){
			if(a[i]) s+=v[i];
		}
		if(s!="")sstr.insert(s);
		sinh();
	}
	for(string x: sstr) cout<<x<<endl;
}
