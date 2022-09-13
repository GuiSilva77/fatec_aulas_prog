
public class Componente extends Acessorio {
	private long numero;
	private long estoque;
	private Componente componente;
	private Peca peca;

	public Peca getPeca() {
		return peca;
	}

	public void setPeca(Peca peca) {
		this.peca = peca;
	}

	public long getNumero() {
		return numero;
	}

	public long getEstoque() {
		return estoque;
	}

	public Componente getComponente() {
		return componente;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

	public void setEstoque(long estoque) {
		this.estoque = estoque;
	}

	public void setComponente(Componente componente) {
		this.componente = componente;
	}
}
