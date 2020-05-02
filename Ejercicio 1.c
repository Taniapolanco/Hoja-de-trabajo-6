#include <iostream>
#include <string>
using namespace std;
struct datos {
	int codigo;
	string nombre;
	string puesto;
	int departamento;
	float salario;
};
int main (){
	int n;
	int i;
	//string nombres [n];
	float total= 0.00;
	datos *registro;
	cout<<"¿Cuantos empleados ingresara? "<<endl;
	cin>>n;
	
	registro= new datos[n];
	for (i=0;i<n;i++){
		cout<<"Ingrese el codigo del empleado: "<<endl;
		cin>>registro[i].codigo;
		fflush(stdin);
		cout<<"Ingrese el nombre del empleado: "<<endl;
		getline (cin,registro[i].nombre);
		//cin>>nombres[i];
		fflush(stdin);
		cout<<"Ingrese el puesto que ocupa el empleado: "<<endl;
		cin>>registro[i].puesto;
		cout<<"Departamento al que pertenece el empleado, siendo 1.Gerencia 2.Administracion 3.Produccion"<<endl;
		cin>>registro[i].departamento;
		cout<<"Ingrese el salario del empleado: "<<endl;
		cin>>registro[i].salario;
		total += registro[i].salario;
		system("CLS");
	}
    if (registro[i].departamento>3){
    cout<<"Departamento erroneo";}
    
    
	cout <<"Total de la planilla es: "<<total<<endl;
	cout<<"Los empleados son: "<<endl;
	for (i=0;i<n;i++){
		cout<<registro[i].nombre<<endl;
	}
	
    delete[] registro;	
}
