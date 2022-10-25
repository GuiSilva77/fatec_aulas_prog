package logistica.frota;

import logistica.entregas.Frete;

public class Caminhao extends Veiculo {
	private int eixos;
	private Frete frete;

	public int getEixos() {
		return eixos;
	}

	public Frete getFrete() {
		return frete;
	}

	public void setEixos(int eixos) {
		this.eixos = eixos;
	}

	public void setFrete(Frete frete) {
		this.frete = frete;
	}
}
