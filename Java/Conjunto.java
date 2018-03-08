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

		}else if(indice == tamanho){

			System.out.println("ERRO: Conjunto cheio.");

		}else{

			if (checkExistence(n)){
				System.out.println("ERRO: Elemento repetido!");

			}else{

				elementos[indice] = n;
				indice++;
			}
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
			int aux = elementos[i]; //Variável auxiliar representa cada elemente do primeiro conjunto a cada iteração.

			if (!C.checkExistence(aux)){
				return false;
			}
		}

		return true;
	}
}