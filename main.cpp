#include <iostream>
//ESto es una modificacioón para  el GIT

using namespace std;

class T_Pc{
	private:
		string _name;
		string _marca;
		int _memo;
		int _hdd;
	public:
		T_Pc(string,string,int);
		T_Pc();
		void setPc(string);
		void print();		
};

T_Pc::T_Pc(string name,string marca,int memo){
	_name=name;
	_marca=marca;
	_memo=memo;
}
T_Pc::T_Pc(){
	_name="";
	_marca="";
	_memo=0;
}


void T_Pc::setPc(string name){
	_name=name;
/*	_marca=marca;
	_memo=memo;*/
}
void T_Pc::print(){
	cout<<"el nombre es"<<_name<<endl;

}

int main(int argc, char** argv) {
	
	T_Pc compu1;
	string n;
	cout<<"Nombre completo?"<<endl;
	getline(cin,n,'\n');
	compu1.setPc(n);
	compu1.print();
	cout<<"Nombre completo otra vez?"<<endl;
	cin>>n;
	cout<<" el nombre es: "<<n<<endl;
	
	return 0;
}
