function mostrar()
{
	var precio
	var descuento
	var d
precio = parseInt(prompt("ingrese el precio"));
descuento= parseInt(prompt("ingrese el descuento"));
d=descuento*100/precio
document.getElementById("elPrecioFinal").value=d
}
