/*1.	Para el departamento de facturación:
A.	Ingresar tres precios de productos y mostrar la suma de los mismos.
B.	Ingresar tres precios de productos y mostrar el promedio de los mismos.
C.	ingresar tres precios de productos  y mostrar precio final (más IVA 21%).
*/
function Sumar () 
{
    var p1
    var p2 
    var p3
    var suma
    var promedio
    var pf
    p1=parseInt(document.getElementById("PrecioUno").value);
    p2=parseInt(document.getElementById("PrecioDos").value);
    p3=parseInt(document.getElementById("PrecioTres").value);
    suma=p1+p2+p3;
    alert(suma);
}
function Promedio () 
{
    p1=parseInt(document.getElementById("PrecioUno").value);
    p2=parseInt(document.getElementById("PrecioDos").value);
    p3=parseInt(document.getElementById("PrecioTres").value);
    promedio=(p1+p2+p3)/3;
    alert(promedio);
}
function PrecioFinal () 
{
    p1=parseInt(document.getElementById("PrecioUno").value);
    p2=parseInt(document.getElementById("PrecioDos").value);
    p3=parseInt(document.getElementById("PrecioTres").value);
    suma=p1+p2+p3;
    pf=suma+(21/100*suma);
    alert(pf);
}