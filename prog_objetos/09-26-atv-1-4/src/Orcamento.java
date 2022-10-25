public class Orcamento {
	private long numero;
	private double desconto;
	private Peca[] pecas;
	private MaoDeObra maodeobra;

	public Orcamento() {
		maodeobra = new MaoDeObra();
		maodeobra.setCusto(20);

		pecas[0] = new Peca();
		pecas[0].setValor(30);
	}

	public double getTotal() {
		double valorPecas = 0;

		for (int i = 0; i < pecas.length; i++) {
			valorPecas += pecas[i].getValor();
		}

		return valorPecas + maodeobra.getCusto();

	}
}
