package publicadora.editora;

import publicadora.Receita;

public class Revista {
	private String chave;
	private Receita receita;

	public String getChave() {
		return chave;
	}

	public Receita getReceita() {
		return receita;
	}

	public void setChave(String chave) {
		this.chave = chave;
	}

	public void setReceita(Receita receita) {
		this.receita = receita;
	}
}
