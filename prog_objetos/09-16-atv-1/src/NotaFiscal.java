
public class NotaFiscal extends Documento {
	private double valor;
	private double icms;
	private Item item;

	public double getValor() {
		return valor;
	}

	public double getIcms() {
		return icms;
	}

	public Item getItem() {
		return item;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public void setIcms(double icms) {
		this.icms = icms;
	}

	public void setItem(Item item) {
		this.item = item;
	}
}
