const form = document.getElementById("form");
const resultado = document.getElementById("resultado");
const valA = document.getElementById("valA");
const valB = document.getElementById("valB");
const opcao = document.getElementById("opcao");

function soma(a, b) {
  return a + b;
}
function sub(a, b) {
  return a - b;
}
function mul(a, b) {
  return a * b;
}
function divi(a, b) {
  return a / b;
}
function error(div, caixa) {
  div.innerHTML = `<p class="negative">Insira um valor válido.</p>`;
  caixa.className = "negative";
  caixa.focus();
  return;
}
function mostrar(resultado, div) {
  div.innerHTML = `<p>O valor da operação é de ${resultado}.</p>`;
}

form.addEventListener("submit", (event) => {
  event.preventDefault();

  let val1 = parseFloat(valA.value);
  let val2 = parseFloat(valB.value);

  if (isNaN(val1)) error(resultado, valA);
  else if (isNaN(val2)) error(resultado, valB);
  else {
    switch (opcao.value) {
      case "soma":
        mostrar(soma(val1, val2), resultado);
        break;
      case "sub":
        mostrar(sub(val1, val2), resultado);
        break;
      case "mul":
        mostrar(mul(val1, val2), resultado);
        break;
      case "divi":
        mostrar(divi(val1, val2), resultado);
        break;
      default:
        break;
    }
  }
});
