
public class Arma {
	private int calibre;
	private double peso;
	private String identificacao;
	private Cano cano;
	private Cartucho cartucho;

	public int getCalibre() {
		return calibre;
	}

	public double getPeso() {
		return peso;
	}

	public String getIdentificacao() {
		return identificacao;
	}

	public Cano getCano() {
		return cano;
	}

	public Cartucho getCartucho() {
		return cartucho;
	}

	public void setCalibre(int calibre) {
		this.calibre = calibre;
	}

	public void setPeso(double peso) {
		this.peso = peso;
	}

	public void setIdentificacao(String identificacao) {
		this.identificacao = identificacao;
	}

	public void setCano(Cano cano) {
		this.cano = cano;
	}

	public void setCartucho(Cartucho cartucho) {
		this.cartucho = cartucho;
	}
}
