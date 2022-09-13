
public class Peca {
	private long numero;
	private String nome;
	private String especificacao;
	private long estoque;

	public long getNumero() {
		return numero;
	}

	public String getNome() {
		return nome;
	}

	public String getEspecificacao() {
		return especificacao;
	}

	public long getEstoque() {
		return estoque;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setEspecificacao(String especificacao) {
		this.especificacao = especificacao;
	}

	public void setEstoque(long estoque) {
		this.estoque = estoque;
	}
}
