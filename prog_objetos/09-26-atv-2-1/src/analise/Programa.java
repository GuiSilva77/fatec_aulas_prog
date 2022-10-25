package analise;

import desenvolvimento.Funcao;
import desenvolvimento.Procedure;

public class Programa {
	private String nome;
	private Procedure[] procedures;
	private Funcao[] funcoes;

	public String getNome() {
		return nome;
	}

	public Procedure[] getProcedures() {
		return procedures;
	}

	public Funcao[] getFuncoes() {
		return funcoes;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setProcedures(Procedure[] procedures) {
		this.procedures = procedures;
	}

	public void setFuncoes(Funcao[] funcoes) {
		this.funcoes = funcoes;
	}
}
