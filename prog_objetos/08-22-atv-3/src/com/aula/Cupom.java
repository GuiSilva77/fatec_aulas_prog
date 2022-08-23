package com.aula;

public class Cupom {
	private long numero;
	private String data;
	private long total;
	private double imposto;
	
	public void setNumero(long numero) {
		this.numero = numero;
	}
	
	public void setData(String data)	{
		this.data  = data;
	}
	
	public void setTotal(long total) {
		this.total = total;
	}
	
	public void setImposto(double imposto) {
		this.imposto = imposto;
	}
	
	public long getNumero() {
		return numero;
	}
	
	public String getData() {
		return data;
	}
	
	public long getTotal() {
		return total;
	}
	
	public double getImposto() {
		return imposto;
	}
}
