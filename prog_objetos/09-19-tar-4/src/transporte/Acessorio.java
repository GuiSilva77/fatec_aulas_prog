package transporte;

public class Acessorio {
	private long codigo;
	private String nome;
	private double preco;

	public long getCodigo() {
		return codigo;
	}

	public String getNome() {
		return nome;
	}

	public double getPreco() {
		return preco;
	}

	public void setCodigo(long codigo) {
		this.codigo = codigo;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setPreco(double preco) {
		this.preco = preco;
	}

	@Override
	public String toString() {
		return "Acessorio [codigo=" + codigo + ", nome=" + nome + ", preco=" + preco + "]";
	}
}