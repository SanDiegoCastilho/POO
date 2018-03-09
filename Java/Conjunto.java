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

		//Verifica se existe espaço no conjunto e se nῶao tem elementos repetidos para inserir.
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

	//Função responsável pela intersecçῶao de dois conjuntos.
	Conjunto inter(Conjunto C){
		//Inicializa um vetor que guardará os valores comuns aos conjuntos.
		//e uma variável que auxilia na contagem e armazenagem do tamanho dos conjuntos.
		int[] NRepetidos = new int[C.indice];
		int aux = 0;

		//Verifica quantos e quais os elementos comuns aos conjuntos.
		for (int i = 0; i < indice; i++) {
			if (C.checkExistence(elementos[i])){

				NRepetidos[aux] = elementos[i];
				aux++;
			}
		}

		//Istancia ConjInter.
		Conjunto ConjInter = new Conjunto(aux);

		//Preenche o ConjInter com os valores comuns aos dois conjunntos.
		for (int i = 0; i < ConjInter.tamanho; i++) {

			ConjInter.setElement(NRepetidos[i]);
		}

		return ConjInter;
	}
}