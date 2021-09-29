const form = document.getElementById("form");
const peso = document.getElementById("peso");
const altura = document.getElementById("altura");
const resultado = document.getElementById("resultado");

function error(div, caixa) {
  div.innerHTML = `<p>Insira um valor válido.</p>`;
  caixa.focus();
  return;
}

function calcIMC(peso, altura) {
  return peso / (altura * altura);
}

form.addEventListener("submit", (event) => {
  event.preventDefault();

  let pesoP = isNaN(peso.value)
    ? error(resultado, peso)
    : parseFloat(peso.value);
  let alturaP = isNaN(altura.value)
    ? error(resultado, altura)
    : parseFloat(altura.value);

  let imc = calcIMC(pesoP, alturaP);

  if (imc < 18.5) resultado.innerHTML = `Abaixo do peso.`;
  else if (imc < 24.9) resultado.innerHTML = `Peso normal.`;
  else if (imc < 29.9) resultado.innerHTML = `Sobrepeso.`;
  else if (imc < 34.9) resultado.innerHTML = `Obesidade grau I`;
  else if (imc < 39.9) resultado.innerHTML = `Obesidade grau II`;
  else if (imc >= 40) resultado.innerHTML = `Obesidade grau III ou mórbida.`;
});
