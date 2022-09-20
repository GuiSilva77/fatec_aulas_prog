
public class Contrato extends Documento {
	private String validade;
	private double valor;
	private Imovel imovel;

	public String getValidade() {
		return validade;
	}

	public double getValor() {
		return valor;
	}

	public Imovel getImovel() {
		return imovel;
	}

	public void setValidade(String validade) {
		this.validade = validade;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public void setImovel(Imovel imovel) {
		this.imovel = imovel;
	}
}
