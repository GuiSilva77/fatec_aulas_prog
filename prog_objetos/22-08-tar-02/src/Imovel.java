
public class Imovel {
	private long numero;
	private String endereco;
	private String cidade;
	private double aluguel;
	public long getNumero() {
		return numero;
	}
	public String getEndereco() {
		return endereco;
	}
	public String getCidade() {
		return cidade;
	}
	public double getAluguel() {
		return aluguel;
	}
	public void setNumero(long numero) {
		this.numero = numero;
	}
	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}
	public void setCidade(String cidade) {
		this.cidade = cidade;
	}
	public void setAluguel(double aluguel) {
		this.aluguel = aluguel;
	}
}
