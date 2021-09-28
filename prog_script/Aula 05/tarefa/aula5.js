var valor1 = prompt('Informe o valor1:');
var valor2 = prompt('Informe o valor2:');
var operacao = prompt('Insira a operador aritmético:');

if (isNaN(valor1)) {
	alert('O valor 1 informado não é um número válido!');
} else if (isNaN(valor2)) {
	alert('O valor 2 informado não é um número válido!');
}else{
	switch(operacao){
	case '+':
		alert(`O resultado da SOMA de ${valor1} e ${valor2} é ${parseFloat(valor1) + parseFloat(valor2)}.`);
		break;
	case '-':
		alert(`O resultado da SUBTRAÇÃO de ${valor1} e ${valor2} é ${parseFloat(valor1) - parseFloat(valor2)}.`);
		break;
	case '*':
		alert(`O resultado da MULTIPLICAÇÃO de ${valor1} e ${valor2} é ${parseFloat(valor1) * parseFloat(valor2)}.`);
		break;
	case '/':
		alert(`O resultado da DIVISÃO de ${valor1} e ${valor2} é ${parseFloat(valor1) / parseFloat(valor2)}.`);
		break;
	default:
		alert('O operador aritmético informado não é válido!');
		break;
	}
}