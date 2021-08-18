# Metodo-Iterativo-Recursivo
Metodo Iterativo y Recursivo - Estructuras de datos y algortimos fundamentales - Tecnológico de Monterrey

📖 - ¿Qué es el metodo recursivo?
Toma en cuenta este caso de la función factorial 

0! = 1
1! = 1
2! = 2*1 = 2
3! = 3*2*1 = 6
4! = 4*3*2*1 = 24
n! = n*(n-1)*(n-2)*...*2*1

n!
📌 - Si n = o entonces es 1
📌 - Si n > 0 entonces n * (n-1) * (n-2) * ... 1

📝 - Ejemplo: 
  5! = 5 * 4 * 3 * 2 * 1 = 120

Para la forma recursiva (para valores no negativos de n) es de esta forma: 
n!
📌 - Si n = 0 entones es 1
📌 - Si n > 0 entonces n*(n-1)!

💻 - ¿Qué hay dentro de esta función?
int fact(int n){
  if (n == 0){
    return 1;
  }
  else{
    return n * fact(n-1);
  }

🤓 - El caso base es el caso en el que no se vuelve a llamar la misma función, de tal forma que se termina la recursión.
🤓 - Una función recursiva debe tener al menos un caso base. 


