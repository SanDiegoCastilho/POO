class Teste{
	public static void main(String[] args){
		Conjunto C1 = new Conjunto(4);
		Conjunto C2 = new Conjunto(6);


		C1.setElement(9);
		C1.setElement(7);
		C1.setElement(8);
		C1.setElement(99);

		C2.setElement(14);
		C2.setElement(20);
		C2.setElement(4);
		C2.setElement(5);
		C2.setElement(9);
		C2.setElement(7);

		Conjunto C3 = C1.dif(C2);

		for (int i = 0; i < C3.indice; i++) {
			System.out.println(C3.elementos[i]);
		}
	}
}