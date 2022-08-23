package com.aula;

public class Produto {
	private long codigo;
	private String nome;
	private double preco;
	
	public void setCodigo(long codigo) {
		this.codigo = codigo;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public void setPreco(double preco) {
		this.preco = preco;
	}
	
	public long getCodigo() {
		return codigo;
	}
	
	public String getNome() {
		return nome;
	}
	
	public double getPreco() {
		return preco;
	}
}
