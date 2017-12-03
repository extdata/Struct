#include <iostream>
using std::cout;
using std::cin;

struct person
{
	char name[50];
	int age;
	float salary;
};
struct company
{
	char companyname[50];
	int companyage;
	char companylocation[50];
};

int main()
{
	person p1;
	
	cout << "Digite seu nome: ";
	cin.get( p1.name, 50 );
	cout << "\nDigite sua idade: ";
	cin >> p1.age;
	cout << "\nDigite seu salario: ";
	cin >> p1.salary;
	
	company c1;
	
	cout << "\n\nDigite o nome da empresa onde trabalha: ";
	cin.get( c1.companyname, 50 );
	cout << "\nDigite o tempo de atividade da empresa: ";
	cin >> c1.companyage;
	cout << "\nDigite a localiza" << char(135) << char(198) << "o da empresa: ";
	cin.get( c1.companylocation, 50 );
	
	cout << "\nExibidos suas informa" << char(135) << char(228) << "es!";
	cout << "\nNome: " << p1.name;
	cout << "\nIdade: " << p1.age;
	cout << "\nSal" << char(160) << "rio: " << p1.salary;
	
	cout << "\nExibindo as informa" << char(135) << char(228) << "es da empresa!";
	cout << "\nNome da empresa: " << c1.companyname;
	cout << "\nTempo de atividade da empresa: " << c1.companyage;
	cout << "\nLocaliza" << char(135) << char(198) <<"o da empresa: " << c1.companylocation;
	
	return 0;
}