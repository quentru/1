function mostrar()
{
    var importeUno;
    var importeDos;
    var importeTres;
    var importeCuatro;
    var suma;
    var descuento ;
    var mensaje;
    var mayor;
    importeUno=prompt("Ingrese un numero");
    importeDos=prompt("Ingrese un segundo numero");
    importeTres=prompt("Ingrese un tercer numero");
    importeCuatro=prompt("Ingrese un cuarto numero");

    importeUno=parseInt(importeUno);
    importeDos=parseInt(importeDos);
    importeTres=parseInt(importeTres);
    importeCuatro=parseInt(importeCuatro);

    if (importeUno>importeDos && importeUno>importeTres && importeUno>importeCuatro)
    {
      mayor=importeUno;
    }else
    {
        if( importeDos>importeTres && importeDos>importeCuatro){
            mayor=importeDos;
        }else
        {
            if( importeTres> importeCuatro){
                mayor=importeTres;
            }else
            {
                mayor=importeCuatro;
            }
        }

    }

 
   
    suma = importeCuatro + importeDos + importeTres + importeUno;

    if (suma>100){
        descuento =90;
       
    }else{
        if(suma>50){           
            descuento = 95;
        }else{
            descuento=115;          
        }
    }
    precioFinal = suma-suma *descuento/100;
    alert("el mayor es"+mayor +"y el importe a pagar es:"+ precioFinal);


}
