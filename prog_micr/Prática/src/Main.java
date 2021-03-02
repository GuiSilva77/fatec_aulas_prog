import java.util.Scanner;
import javax.swing.JOptionPane;
public class Main{
    public static void main(String[] args){
    try (Scanner Scanner = new Scanner(System.in)) {
    
    String nome = JOptionPane.showInputDialog("Qual é o seu Nome?");
    int Age =  Integer.parseInt(JOptionPane.showInputDialog("Quantos anos você tem?"));
    JOptionPane.showMessageDialog(null, "Olá " + nome + " de " + Age + " anos.");
    
}
}
}