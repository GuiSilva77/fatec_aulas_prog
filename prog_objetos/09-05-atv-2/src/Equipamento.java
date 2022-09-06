
public class Equipamento {
	private long codigo;
	private String descricao;
	private double preco;
	private Peca peca;

	public long getCodigo() {
		return codigo;
	}

	public String getDescricao() {
		return descricao;
	}

	public double getPreco() {
		return preco;
	}

	public Peca getPeca() {
		return peca;
	}

	public void setCodigo(long codigo) {
		this.codigo = codigo;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public void setPreco(double preco) {
		this.preco = preco;
	}

	public void setPeca(Peca peca) {
		this.peca = peca;
	}
}
