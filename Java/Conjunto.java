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

		}else if(indice = tamanho){

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
}