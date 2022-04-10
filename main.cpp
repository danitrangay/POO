#include<stdio.h>
#include<iostream>
#include<fstream>

using namespace std;

void escribir();

int main(){
	escribir();
	
	system("pause");
	return 0;
}

void escribir(){
	ofstream archivo;
	string nombre, apellido, direccion, codigo,telefono;
	archivo.open("prueba.txt",ios::out);
	if(archivo.fail()){
		cout<<"no existe";
		exit(1);
	}
	cout<<"digite el codigo: ";
	getline(cin,codigo);
	cout<<"digite el nombre: ";
	getline(cin,nombre);
	cout<<"digite el apellido: ";
	getline(cin,apellido);
	cout<<"digite el direccion: ";
	getline(cin,direccion);
	cout<<"digite el telefono: ";
	getline(cin,telefono);
	
	archivo<<codigo;
	archivo<<nombre;
	archivo<<apellido;
	archivo<<direccion;
	archivo<<telefono;
	archivo.close();
		
	
	
	
}
