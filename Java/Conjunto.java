//San Diego - 08/03/2018 - 08:21.
//Classe Conjunto, representar u conjunto como uma classe Java.

class Conjunto{

	int indice;
	int tamanho;
	int[] elementos;

	//Construtor da Classe Conjunto
	Conjunto(int tamanho){

		this.tamanho = tamanho;
		elementos = new int[tamanho];
		indice = 0;
	}

	//Construtor de tamanho padrão.
	Conjunto(){

		this(10);
	}

	//Função responsável por guardar um elemento no Conjunto.
	void setElement(int n){

		if (indice == 0){

			elementos[indice] = n;
			indice++;
		}

		if (!checkExistence(n) && indice < tamanho){

			elementos[indice] = n;
			indice++;
		}
	}

	//Função resposável por verificar a existência de um conjunto;
	boolean checkExistence(int n){
		//Verifica a existencia um elemento no Conjunto.
		for (int i = 0; i < indice; i++) {
				
			if (n == elementos[i])
				return true;
		}

		return false;
	}

	//Função responsável por verificar se um conjunto é subconjunto de outro.
	boolean checkSubset(Conjunto C){
		//Verifica se para cada inteiro do primeiro conjunto o mesmo elemento
		//pertence ao segundo conjunto e rretorna um valor correspondente.
	

		for (int i = 0; i < indice; i++) {

			if (!C.checkExistence(elementos[i])){
				return false;
			}
		}

		return true;
	}

	//Função responsável pela união de dois conjuntos.
	Conjunto union(Conjunto C){

		int aux = 0;

		//Verifica quantos elementos repetidos os conjuntos tem.
		for (int i = 0; i < indice; i++) {
			if (C.checkExistence(elementos[i])) {
				aux ++;
			}
		}

		//Istancia um Conjunto Uniῶao de tamanho proporcional.
		Conjunto ConjUnion = new Conjunto(indice + C.indice - aux);

		//Adiciona os elementos dos conjuntos no ConjuntoUnião.
		for (int i = 0; i < indice; i++) {
			ConjUnion.setElement(elementos[i]);
		}

		for (int j = 0; j < C.indice; j++) {
			ConjUnion.setElement(C.elementos[j]);
		}

		return ConjUnion;
	}


}