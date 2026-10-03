//#include <iostream>
//using namespace std;
//
//class Producto {
//private:
//	string nombre;
//	float precio;
//	int stock;
//public:
//	void Crearproducto(string n, float p, int s) {
//		n = nombre;
//		p = precio;
//		s = stock;
//	}
//
//	void ConsultarPrecio() {
//		cout << "Precio: " << precio << endl;
//	}
//
//	void CambiarPrecio(float p) {
//		p = precio;
//	}
//
//	void AñadirStock(int s) {
//		s = stock;
//	}
//
//	void VenderProducto(int s) {
//		s = stock--;
//		if (stock = 0) {
//			cout << "Producto agotado" << endl;
//		}
//	}
//};
//
//int main() {
//	Producto p1;
//	p1.Crearproducto("Camiseta", 20.5, 10);
//	p1.ConsultarPrecio();
//	p1.CambiarPrecio(25.0);
//	p1.ConsultarPrecio();
//	p1.AñadirStock(5);
//	p1.VenderProducto(3);
//	return 0;
//}