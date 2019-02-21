function mostrar()
{
//tomo la edad
var mesDelAño = document.getElementById('mes').value;
alert (mesDelAño);
  switch(mesDelAño){
    case "Febrero":
    alert("tiene 28 dias, si es año bisiesto tiene 29");
    break;
    case "Abril":
    case "junio":
    case "Septiembre":
    case "Noviembre":
    alert("Tiene 30 dias");
    break;
    default:
    alert("tienen 31 dias");
  }




}//FIN DE LA FUNCIÓN
