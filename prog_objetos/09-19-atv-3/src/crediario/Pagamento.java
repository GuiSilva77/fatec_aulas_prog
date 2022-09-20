package crediario;

public class Pagamento {
	private long id;
	private String data;
	private double total;

	public long getId() {
		return id;
	}

	public String getData() {
		return data;
	}

	public double getTotal() {
		return total;
	}

	public void setId(long id) {
		this.id = id;
	}

	public void setData(String data) {
		this.data = data;
	}

	public void setTotal(double total) {
		this.total = total;
	}
}
