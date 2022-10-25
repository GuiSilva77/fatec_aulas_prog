
public class Digital extends Aparelho {
	private int watts;
	private Analogico analogico;

	public int getWatts() {
		return watts;
	}

	public Analogico getAnalogico() {
		return analogico;
	}

	public void setWatts(int watts) {
		this.watts = watts;
	}

	public void setAnalogico(Analogico analogico) {
		this.analogico = analogico;
	}
}
