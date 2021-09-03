import Eq1 from './eq2.js';//importação deve ser a primeira coisa no código

const form = document.getElementById("form");
const calc = document.getElementById("calc");
const nav = document.getElementById("nav");
form.addEventListener("submit", async (event)=>{
  event.preventDefault();

  if(calc.value === 'eq2')
  {
    nav.innerHTML = ``;
    Eq1();
  } else {
    section.innerHTML = `<p class="negative">insira um valor válido</p>`
    calc.className = 'negative'
    calc.focus();
    return;
  }

})