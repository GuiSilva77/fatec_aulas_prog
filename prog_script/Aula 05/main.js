const button = document.getElementById("button");

button.addEventListener("click", (event)=>{
  event.preventDefault();

  div.innerHTML = `<p>Hello World!</p>`
})