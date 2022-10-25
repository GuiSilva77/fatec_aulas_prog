
public class Imovel {
	private String endereco;
	private Locatario morador;
	private Proposta[] propostas;

	public String getEndereco() {
		return endereco;
	}

	public Locatario getMorador() {
		return morador;
	}

	public Proposta[] getPropostas() {
		return propostas;
	}

	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}

	public void setMorador(Locatario morador) {
		this.morador = morador;
	}

	public void setPropostas(Proposta[] propostas) {
		this.propostas = propostas;
	}
}
