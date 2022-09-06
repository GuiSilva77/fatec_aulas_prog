
public class Caminhao {
	private String placa;
	private int tara;
	private long km;
	private Carreta carreta;
	private Acessorio acessorio;

	public String getPlaca() {
		return placa;
	}

	public int getTara() {
		return tara;
	}

	public long getKm() {
		return km;
	}

	public Carreta getCarreta() {
		return carreta;
	}

	public Acessorio getAcessorio() {
		return acessorio;
	}

	public void setPlaca(String placa) {
		this.placa = placa;
	}

	public void setTara(int tara) {
		this.tara = tara;
	}

	public void setKm(long km) {
		this.km = km;
	}

	public void setCarreta(Carreta carreta) {
		this.carreta = carreta;
	}

	public void setAcessorio(Acessorio acessorio) {
		this.acessorio = acessorio;
	}
}
