//#include <iostream>
//using namespace std;
//
//class Persona {
//
//private:
//	string Nombre;
//	int Edad;
//
//public:
//	Persona(string n, int e) {
//		Nombre = n;
//		Edad = e;
//	}
//
//	void MostrarDatos() {		//Para printear los datos.
//		cout << "Nombre:" << Nombre << endl;
//		cout << "Edad:" << Edad << endl;
//	}
//
//	bool esMayorEdad(){			//Si es mayor de edad devuelve true
//		if (Edad >= 18) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//};
//
//int main() {
//	Persona p1("Eric", 18);		//Se definen los datos de las personas
//	Persona p2("Izan", 13);
//
//	cout << "Primera persona:" << endl;
//	p1.esMayorEdad();
//	if (p1.esMayorEdad()) {		//Si se cumple la función, se muestra en pantalla si es o no mayor de edad.
//		cout << "Es mayor de edad" << endl;
//	}
//	else {
//		cout << "Es menor de edad" << endl;
//	}
//
//	cout << endl;			//Equivale a printf("/n");
//
//	cout << "Segunda persona:" << endl;
//	p2.esMayorEdad();
//	if (p2.esMayorEdad()) {		
//		cout << "Es mayor de edad" << endl;
//	}
//	else {
//		cout << "Es menor de edad" << endl;
//	}
//
//	return 0;
//}