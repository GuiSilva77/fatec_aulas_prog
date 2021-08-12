export default function Eq1(){
  section.innerHTML = 
    `
      <form id="formu">
        <input id="n1" type="number" placeholder="digite o valor de a">
        <input id="n2" type="number" placeholder="digite o valor de b">
        <input id="n3" type="number" placeholder="digite o valor de c">
        <button>Calcular</button>
      </form>

      <div id="result"></div>
    `

      formu.addEventListener("submit", (event) => {    
        event.preventDefault()
        let a = parseFloat(n1.value)
        let b = parseFloat(n2.value)
        let c = parseFloat(n3.value)

        let delta = (b * b) - (4 * a * c)

        if (delta < 0){
            result.innerHTML = `
            <ul>
                <li> O resultado é irreal. </li>
            </ul>
            `} else {

            let x1 = (-b + Math.sqrt(delta)) / (2 * a)
            let x2 = (-b - Math.sqrt(delta)) / (2 * a)
                
            result.innerHTML = `<ul><li>A raiz de X1 será ${x1} e X2 será ${x2}.</li></ul>`

        }
      })
}
