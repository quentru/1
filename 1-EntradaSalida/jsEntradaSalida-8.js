/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y 
mostrar el resto entre el dividendo y el divisor.
ej.: "El resto es 0 ."*/
function SacarResto()
{
    var n1
    var n2
    var resultado
    var resto
    n1 =  parseInt(document.getElementById("numeroDividendo").value);
    n2 = parseInt(document.getElementById("numeroDivisor").value);
    resultado= n1 / n2;
    resto= n1 % n2;
    alert("el resultado es "+resultado+" y el resto es "+resto);
}
