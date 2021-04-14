export function Section(){
        let a = Number(prompt("Valor de A:"))
        let b = Number(prompt("Valor de B:"))
        let c = Number(prompt("Valor de C:"))

        let delta = Math.pow(b, 2) - (4 * a * c)

        let x1 = (-b + Math.sqrt(delta)) / (2 * a)
        let x2 = (-b - Math.sqrt(delta)) / (2 * a)
        
        return x1, x2
}