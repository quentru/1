/*2.	Para el departamento de Construcción:
A.	 mostrar la cantidad de alambre a comprar  si se ingresara el largo y el ancho de un terreno rectangular y se debe alambra con tres hilos de alambre.
B.	mostrar la cantidad de alambre a comprar  si se ingresara el radio  de un terreno circular y se debe alambra con tres hilos de alambre.
C.	Para hacer un contrapiso de 1m x 1m se necesitan 2 bolsas de cemento y 3 de cal, debemos mostrar cuantas bolsas se necesitan de cada uno para las medidas que nos ingresen.
*/

function Rectangulo ()
{
  var ldr
  var adr
  var pdr
  ldr=document.getElementById("Largo").value;
  adr=document.getElementById("Ancho").value;
  ldr=parseInt(ldr);
  adr=parseInt(adr);
  pdr=((ldr*adr)*2)*3;
  alert("la cantidad de alambre a comprar es de " +pdr+ " m");
}
function Circulo ()
{
  var rdt
  var resultado
  rdt=document.getElementById("Radio").value;
  rdt=parseInt(rdt);
  resultado = rdt*3;
  alert("la cantidad de alambre a utilizar es de " +resultado+ " m");
}
function Materiales ()
{
  var bdc
  var bda
  var perimetro
  var ldr
  var adr
  ldr=document.getElementById("Largo").value;
  adr=document.getElementById("Ancho").value;
  ldr=parseInt(ldr);
  adr=parseInt(adr);
  perimetro=ldr*adr;
  bdc=perimetro*3;
  bda=perimetro*2;
  alert("Se deben utilizar "+bdc+" bolsas de cal para el terreno y "+bda+ " bolsas de arena");
}
