import Eq1 from './eq2.js';//importação deve ser a primeira coisa no código

const form = document.getElementById("form");
const calc = document.getElementById("calc");

form.addEventListener("submit", (event)=>{
  event.preventDefault();

  if(calc.value === 'eq2')
  {
    Eq1();
  } else {
    section.innerHTML = `<p class="negative">insira um valor válido</p>`
    calc.className = 'negative'
    calc.focus()
    return
  }

})