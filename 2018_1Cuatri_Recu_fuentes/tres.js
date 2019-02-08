
function mostrar()
{
	var precio
	var descuento
	var d
	var pcd
	var iva
	var pi
	var pt
precio = parseInt(prompt("ingrese el precio"));
descuento= parseInt(prompt("ingrese el descuento"));
d=descuento*100/precio
pcd=precio-d
iva=16*100/precio
pi= precio-iva
pt= pcd +iva
alert("su descuento es "+d+" total a pagar con descuento "+pcd+" el precio sin el IVA "+pi);
document.getElementById("elPrecioFinal").value=pt
}

