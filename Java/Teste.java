class Teste{
	public static void main(String[] args){
		Conjunto C1 = new Conjunto(5);
		Conjunto C2 = new Conjunto(6);


		C1.setElement(1);
		C1.setElement(2);
		C1.setElement(3);
		C1.setElement(4);
		C1.setElement(5);

		C2.setElement(1);
		C2.setElement(2);
		C2.setElement(3);
		C2.setElement(4);
		C2.setElement(5);
		C2.setElement(6);

		if (C1.checkSubset(C2)) {
			System.out.println("Deus certo");
		}else{
			System.out.println("Deu errado");	
		}
	}
}