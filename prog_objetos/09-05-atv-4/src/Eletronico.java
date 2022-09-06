
public class Eletronico extends Equipamento {
	private String modelo;
	private long amper;
	private Analogico analogico;

	public String getModelo() {
		return modelo;
	}

	public long getAmper() {
		return amper;
	}

	public Analogico getAnalogico() {
		return analogico;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public void setAmper(long amper) {
		this.amper = amper;
	}

	public void setAnalogico(Analogico analogico) {
		this.analogico = analogico;
	}
}
