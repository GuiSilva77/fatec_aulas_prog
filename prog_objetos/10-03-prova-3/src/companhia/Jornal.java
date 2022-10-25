package companhia;

import publicadora.Receita;

public class Jornal {
	private String conteudo;
	private String[] conteudos;
	private Receita receita;

	public Receita getReceita() {
		return receita;
	}

	public void setReceita(Receita receita) {
		this.receita = receita;
	}

	public String getConteudo() {
		return conteudo;
	}

	public String[] getConteudos() {
		return conteudos;
	}

	public void setConteudo(String conteudo) {
		this.conteudo = conteudo;
	}

	public void setConteudos(String[] conteudos) {
		this.conteudos = conteudos;
	}
}
