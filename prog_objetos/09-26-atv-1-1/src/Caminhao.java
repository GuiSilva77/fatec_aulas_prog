
public class Caminhao extends Veiculo {
	private int peso;
	private Carro[] carga;

	public int getPeso() {
		return peso;
	}

	public Carro[] getCarga() {
		return carga;
	}

	public void setPeso(int peso) {
		this.peso = peso;
	}

	public void setCarga(Carro[] carga) {
		this.carga = carga;
	}
}
