class Tablero{
	private:
		int **matriz;
		int reina;
		void cargarTablero();
	public:
		Tablero(int);
		~Tablero();
		void Reinas();
		void mostrarTablero();
		void posXY(int,int);
		int obtenerElemento(int,int);
};

