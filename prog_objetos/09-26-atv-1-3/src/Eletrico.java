
public class Eletrico extends Analogico {
	private int potencia;
	private Digital[] componentes;

	public int getPotencia() {
		return potencia;
	}

	public Digital[] getComponentes() {
		return componentes;
	}

	public void setPotencia(int potencia) {
		this.potencia = potencia;
	}

	public void setComponentes(Digital[] componentes) {
		this.componentes = componentes;
	}
}
