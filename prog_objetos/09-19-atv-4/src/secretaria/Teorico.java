package secretaria;

import academico.Disciplina;

public class Teorico extends Disciplina {
	private long semanas;
	private int creditos;
	private String conteudo;

	public long getSemanas() {
		return semanas;
	}

	public int getCreditos() {
		return creditos;
	}

	public String getConteudo() {
		return conteudo;
	}

	public void setSemanas(long semanas) {
		this.semanas = semanas;
	}

	public void setCreditos(int creditos) {
		this.creditos = creditos;
	}

	public void setConteudo(String conteudo) {
		this.conteudo = conteudo;
	}
}
