#include <iostream>
using namespace std;

	const double yuzustu = 0.2;
	const double yuzalti = 0.5;
	int kilometre;
    double ucretyuzustu, ucretyuzalti, toplamucret;
int main(){
	cout<<"///  FK TAKS CALC  \\"<<endl<<endl;
    cout<<"Kilometre girin = ";
	cin>>kilometre;
	cout<<endl;
	if(kilometre<=100){
	
	ucretyuzalti = kilometre*yuzalti;
	ucretyuzustu = 0;
	cout<<"Ucretiniz = "<<ucretyuzalti<<endl<<endl<<"Iyi Gunler Dileriz"<<endl<<endl<<"-----------------"<<endl;
	return main();
	}
	else{
	ucretyuzalti = 100*yuzalti;
	ucretyuzustu = (kilometre-100)*yuzustu;
	toplamucret = ucretyuzustu+ucretyuzalti;
	cout<<"Ucretiniz = "<<toplamucret<<endl<<endl<<"Iyi Gunler Dileriz"<<endl<<endl<<"-----------------"<<endl;
	return main();
}
}  
