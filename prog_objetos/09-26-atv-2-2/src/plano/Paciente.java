package plano;

import farmacia.Receita;

public class Paciente {
	private String nome;
	private Receita receita;

	public String getNome() {
		return nome;
	}

	public Receita getReceita() {
		return receita;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setReceita(Receita receita) {
		this.receita = receita;
	}
}
