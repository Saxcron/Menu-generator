//Librerias

#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <stdio.h>

using namespace std;

//Estructura para el menú
struct Menu
{	string Sopa;
	string Ensalada;
	string Entrada;
	string PlatoFuerte;
	string Postre;
	//Apuntadores 
}normal, vegetariano; //Variables

//Funcion principal

int main()
{
	//Matriz para guardar datos de la variable normal para producir un menu diferente por día
	Menu normal[365] = {
		//Enero
		{"Crema de zanahoria", "Ensalada Caesar con pollo", "Papas cambrai", "Lasagna", "Fresas con crema" },
		{"Sopa de pollo con vegetales", "Ensalada de frutos rojos", "Sopa fria", "Hamburguesa con papas", "Pastel de chocolate" },
		{"Sopa de pasta", "Ensalada mexicana con pollo", "Carpaccio de res", "Arrachera con verduras", "Flan" },
		{"Crema de nuez", "Ensalada de pasta con atún y kale", "Pasta a la mantequilla", "Alambre de res", "Pay de limon" },
		{"Crema de champiñon", "Ensalada mediterranea", "Macarrones con queso", "Alambre de pollo", "Cheescake" },
		{"Sopa de letras", "Ensalada de verduras rostizadas con cacahuate", "Omelette", "Pizza", "Pay de limon" },
		{"Sopa de papa", "Ensalada griega con pasta", "Brocoli al vapor con queso", "Fajitas de pollo con salsa marinara", "Cheescake con zarzamora" },
		{"Sopa de tortilla", "Ensalada de atun y aceitunas", "Pan de ajo", "Pasta con albondigas", "Helado" },
		{"Sopa miso", "Ensalada citrica", "Pan relleno de queso", "Brochetas", "Helado" },
		{"Crema de calabaza con elote", "Ensalada oriental con aderezo de cilantro", "Cuernito de jamon", "Pescado a los citricos", "Helado" },
		{"Sopa de papa", "Ensalada de moras y berros con parmesano", "Rajas con crema", "Pollo con brocoli", "Pan de dulce" },
		{"Sopa de letras", "Ensalada de jicama y zanahoria rallada", "Ravioles rellenos de carne", "Albondigas suecas", "Flan" },
		{"Crema de champiñon", "Ensalada con fajitas de pollo y aderezo mil islas", "Huevos benedictinos", "Hamburguesa de pavo", "Gelatina" },
		{"Crema de elote", "Fruta mixta", "Chilaquiles", "Huarache de arrachera", "Pastel de cafe" },
		{"Caldo de res", "Ensalada de aguacate y atún", "Tamal", "Mole con pollo  arroz", "Churros" },
		{"Sopa de vegetales", "Ensalada de aguacate con pollo", "Huevos a la diabla", "Carnitas", "Barra de chocolate" },
		{"Sopa de municion", "Ensalada rusa", "Rajas con crema", "Alambre de pollo", "Helado" },
		{"Sopa de tortilla", "Ensalada mediterranea", "Pan de ajo", "Pescado asado", "Flan" },
		{"Sopa maruchan", "Ensalada Cesar con pollo", "Portobello con queso y pollo", "Fajitas de res", "Cheesecake con frambuesa" },
		{"Ramen", "Ensalada con arroz integral", "Yakimeshi", "Filete de atún con soya", "Mochi" },
		{"Caldo de camaron", "Ensalada de quinoa con camarón", "Sopa fria", "Pescado al mojo de ajo", "Arroz con leche" },
		{"Crema de zanahoria", "Ensalada de jicama rallada", "Pan relleno de queso", "Pollo rostizado", "Pay de manzana" },
		{"Sopa de papa", "Fruta mixta", "Sandwich de jamon", "Pechuga empanizada y espaguetti", "Fresas con crema" },
		{"Crema de calabaza con elote", "Ensalada de aguacate y atún", "Pure de papa", "Costillas a la BBQ", "Brownies" },
		{"Sopa miso", "Ensalada citrica", "Yakimeshi", "Sushi", "Pay de calabaza" },
		{"Sopa de tortilla", "Ensalada de quinoa con jugo de naranja", "Sweet potato fries", "Hamburguesa de pavo y avena", "Afoggato" },
		{"Sopa de letras", "Ensalada Caesar con pollo empanizado", "Tamal", "Mole verde con pollo y arroz", "Arroz con leche" },
		{"Sopa de pollo con vegetales", "Ensalada mediterranea", "Cuernito de jamon", "Filete de atún con soya", "Pay de manzana" },
		{"Crema de champiñon", "Ensalada de pepino, jicama y zanahoria", "Rajas con crema", "Espaguetti con albondigas", "Churros" },
		{"Crema de nuez", "Fruta mixta", "Papas a la francesa", "Papa al horno rellena de tocino", "Brownies" },
		{"Caldo de camaron", "Ensalada de quinoa con camarón", "Sopa fria", "Pescado al mojo de ajo", "Banana split" },
		//Febrero
		{"Sopa de pollo con vegetales", "Ensalada mediterranea", "Cuernito de jamon", "Filete de atún con soya", "Pay de manzana" },
		{"Crema de champiñon", "Ensalada de pepino, jicama y zanahoria", "Rajas con crema", "Espaguetti con albondigas", "Churros" },
		{"Crema de nuez", "Fruta mixta", "Papas a la francesa", "Papa al horno rellena de tocino", "Brownies" },
		{"Sopa maruchan", "Ensalada Cesar con pollo", "Portobello con queso y pollo", "Fajitas de res", "Cheesecake con frambuesa" },
		{"Ramen", "Ensalada con arroz integral", "Yakimeshi", "Filete de atún con soya", "Mochi" },
		{"Caldo de camaron", "Ensalada de quinoa con camarón", "Sopa fria", "Pescado al mojo de ajo", "Arroz con leche" },
		{"Crema de zanahoria", "Ensalada de jicama rallada", "Pan relleno de queso", "Pollo rostizado", "Pay de manzana" },
		{"Sopa de papa", "Fruta mixta", "Queso fundido con chorizo", "Pechuga empanizada y espaguetti", "Fresas con crema" },
		{"Sopa de pollo con vegetales", "Ensalada de frutos rojos", "Sopa fria", "Hamburguesa con papas", "Pastel de chocolate" },
		{"Sopa de pasta", "Ensalada mexicana con pollo", "Carpaccio de res", "Arrachera con verduras", "Flan" },
		{"Crema de nuez", "Ensalada de pasta con atún y kale", "Pasta a la mantequilla", "Alambre de res", "Pay de limon" },
		{"Crema de champiñon", "Ensalada mediterranea", "Macarrones con queso", "Alambre de pollo", "Cheescake" },
		{"Sopa de letras", "Ensalada de verduras rostizadas con cacahuate", "Omelette", "Pizza", "Pay de limon" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Marzo
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Abril
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Mayo
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Junio
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Julio
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
	};
	
	//Matriz para guardar datos de la variable vegetariano para producir un menu diferente por día
	Menu vegetariano[365] = {
		//Enero
		{"Crema de zanahoria", "Ensalada Caesar", "Papas cambrai", "Lasagna vegetariana", "Fresas con crema" },
		{"Sopa de vegetales", "Ensalada de espinaca", "Sopa fria", "Hamburguesa de lenteja con papas", "Pastel de chocolate" },
		{"Sopa de pasta", "Ensalada mexicana con champiñones", "Carpaccio de betabel", "Brocheta de verduras y queso", "Flan" },
		{"Crema de nuez", "Ensalada de pasta con  kale", "Pasta a la mantequilla", "Alambre de nopal", "Pay de limon" },
		{"Crema de champiñon", "Ensalada mediterranea", "Macarrones con queso", "Tostadas de tinga de zanahoria", "Cheescake" },
		{"Sopa de letras", "Ensalada de verduras rostizadas con cacahuate", "Omelette", "Pizza de quesos", "Pay de limon" },
		{"Sopa de papa", "Ensalada griega con pasta", "Brocoli al vapor con queso", "Chayote relleno de queso", "Cheescake con zarzamora" },
		{"Sopa de tortilla", "Ensalada de rucula y calabaza al horno", "Pan de ajo", "Pasta con verduras al vapor", "Helado" },
		{"Sopa miso", "Ensalada citrica", "Pan relleno de queso", "Pimientos rellenos", "Helado" },
		{"Crema de calabaza con elote", "Ensalada oriental con aderezo de cilantro", "Portobello con queso y brocoli", "Tortitas de espinaca en salsa", "Helado" },
		{"Sopa de papa", "Ensalada de moras y berros con parmesano", "Rajas con crema", "Tostadas de tinga de setas", "Pan de dulce" },
		{"Sopa de letras", "Ensalada de jicama y zanahoria rallada", "Ravioles rellenos de tomate", "Flor de calabaza rellena en salsa roja", "Flan" },
		{"Sopa de poro", "Ensalada con tofu y aderezo mil islas", "Huevos con cebollin", "Hamburguesa de garbanzo", "Gelatina" },
		{"Crema de elote", "Fruta mixta", "Chilaquiles", "Huarache de nopales", "Pastel de cafe" },
		{"Sopa de cebolla", "Ensalada de aguacate", "Tamal", "Mole con arroz", "Churros" },
		{"Sopa de vegetales", "Ensalada de kale, quinoa, frijoles y aguacate", "Huevos a la diabla", "Empanadas de platano macho", "Barra de chocolate" },
		{"Sopa de municion", "Ensalada de grabanzo", "Rajas con crema", "Pozole vegetariano", "Helado" },
		{"Sopa de tortilla", "Ensalada mediterranea", "Pan de ajo", "Verduras asadas", "Flan" },
		{"Sopa maruchan", "Ensalada de esparragos con queso feta", "Portobello con queso y champiñones", "Chiles rellenos de queso", "Cheesecake con frambuesa" },
		{"Ramen", "Ensalada con arroz integral", "Yakimeshi", "Sushi de pepino", "Mochi" },
		{"Sopa de hongos", "Ensalada de quinoa con camarón", "Sopa fria", "Aguachile vegetariano", "Arroz con leche" },
		{"Crema de zanahoria", "Ensalada de jicama rallada", "Pan relleno de queso", "Tacos de setas al pastor", "Pay de manzana" },
		{"Sopa de papa", "Fruta mixta", "Queso fundido con champiñones", "Pasta alfredo", "Fresas con crema" },
		{"Crema de calabaza con elote", "Ensalada de aguacate y atún", "Pure de papa", "Coliflor horneada", "Brownies" },
		{"Sopa miso", "Ensalada citrica", "Yakimeshi", "Omurice", "Pay de calabaza" },
		{"Sopa de tortilla", "Ensalada de quinoa con jugo de naranja", "Sweet potato fries", "Hamburguesa de avena", "Afoggato" },
		{"Sopa de letras", "Ensalada de calabaza", "Tamal", "Mole verde con arroz", "Arroz con leche" },
		{"Sopa de vegetales", "Ensalada mediterranea", "Cuernito de queso de cabra", "Emapanadas de platano macho", "Pay de manzana" },
		{"Crema de champiñon", "Ensalada de pepino, jicama y zanahoria", "Rajas con crema", "Hamburguesa de lentejas", "Churros" },
		{"Crema de nuez", "Fruta mixta", "Papas a la francesa", "Papa al horno rellena de queso", "Brownies" },
		//Febrero
		{"Crema de zanahoria", "Ensalada Caesar", "Papas cambrai", "Lasagna vegetariana", "Fresas con crema" },
		{"Sopa de vegetales", "Ensalada de espinaca", "Sopa fria", "Hamburguesa de lenteja con papas", "Pastel de chocolate" },
		{"Sopa de pasta", "Ensalada mexicana con champiñones", "Carpaccio de betabel", "Brocheta de verduras y queso", "Flan" },
		{"Crema de nuez", "Ensalada de pasta con  kale", "Pasta a la mantequilla", "Alambre de nopal", "Pay de limon" },
		{"Sopa de municion", "Ensalada de grabanzo", "Rajas con crema", "Pozole vegetariano", "Helado" },
		{"Sopa de tortilla", "Ensalada mediterranea", "Pan de ajo", "Verduras asadas", "Flan" },
		{"Sopa maruchan", "Ensalada de esparragos con queso feta", "Portobello con queso y champiñones", "Chiles rellenos de queso", "Cheesecake con frambuesa" },
		{"Crema de elote", "Fruta mixta", "Chilaquiles", "Flor de calabaza rellena en salsa roja", "Pastel de cafe" },
		{"Sopa de cebolla", "Ensalada de aguacate", "Tamal", "Mole con arroz", "Churros" },
		{"Sopa de vegetales", "Ensalada de kale, quinoa, frijoles y aguacate", "Huevos a la diabla", "Empanadas de platano macho", "Barra de chocolate" },
		{"Sopa de pasta", "Ensalada mexicana con champiñones", "Carpaccio de betabel", "Brocheta de verduras y queso", "Flan" },
		{"Crema de nuez", "Ensalada de pasta con  kale", "Pasta a la mantequilla", "Alambre de nopal", "Pay de limon" },
		{"Crema de champiñon", "Ensalada mediterranea", "Macarrones con queso", "Tostadas de tinga de zanahoria", "Cheescake" },
		{"Sopa de letras", "Ensalada de verduras rostizadas con cacahuate", "Omelette", "Pizza de quesos", "Pay de limon" },
		{"Sopa de papa", "Ensalada griega con pasta", "Brocoli al vapor con queso", "Chile poblano relleno de quinoa", "Cheescake con zarzamora" },
		{"Sopa de tortilla", "Ensalada de rucula y calabaza al horno", "Pan de ajo", "Pasta con verduras al vapor", "Helado" },
		{"Sopa miso", "Ensalada citrica", "Pan relleno de queso", "Pimientos rellenos", "Helado" },
		{"Crema de calabaza con elote", "Ensalada oriental con aderezo de cilantro", "Portobello con queso y brocoli", "Tortitas de espinaca en salsa", "Helado" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Marzo
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Abril
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Mayo
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Junio
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//Julio
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		
	};
	
	
//Funcion para obtener la fecha actual del sistema	
				  
	time_t now = time(0);
	
	tm *ltm = localtime(&now);


//Funcion para asignar un valor numerico a cada día, de acuerdo a la fecha obtenida anteriormente
	
    int dia = ltm->tm_mday;
    
    int* Tday = &dia;
    
//hoy = numero (1-365) = dia del año actual    
    
    int hoy = *Tday;
	
	
//Interfaz principal para menu de seleccion
//Funcion para escoger opciones

    int mainselect = 0;
 
    startover:
    do
    {
		//Algo de diseño
		cout << "\n ================= \n";
        cout << "\n     MENU   " << hoy << endl;
		cout << "\n ================= \n";
        cout << "\n Seleccione una opcion :\n";
        cout << "\n  1. Menu Normal\n";
        cout << "  2. Menu Vegetariano \n";
        cout << "  3. Salir \n\n"; 
        cout << " Su Opcion (1-3):";
        scanf("%d", &mainselect);
    }while((mainselect < 1) && (mainselect > 4));
 
 //Switches que producen las opciones del menu según su seleccion
 
    switch(mainselect)
    {	
		//opciones
		
		//opcion 1
        case 1:
            cout << "\n";
            cout << " Generando menu del dia... \n";
			cout << " Menu listo! \n";
			
			//Valor de i = n = dia del año
			for(int i = hoy; i < hoy+1; i++)
			{
			//Generando archivo
			ofstream myFile;
			
			myFile.open ("Menu_Del_Dia.txt");
			
			myFile << "\n============================== \n";
			myFile << "            MENU   ";
			myFile << "\n============================== \n\n";
			myFile << " Sopa: " << normal[i].Sopa << endl;
			myFile << " Ensalada: " << normal[i].Ensalada << endl;
			myFile << " Entrada: " << normal[i].Entrada << endl;
			myFile << " Plato Fuerte: " << normal[i].PlatoFuerte << endl;
			myFile << " Postre: " << normal[i].Postre << endl;
			myFile << "\n============================== \n\n\n";
			
			//Leer archivo generado dentro del programa
			string menuNormal;
			
			ifstream file ("Menu_Del_Dia.txt");
			
			while (getline(file,menuNormal))
			cout << menuNormal << endl;
			file.close();
			}
			
			//Regreso al menu de opciones una vez ejecutada la opcion seleccionada
			cout << "\n Regresando al menu principal. ";
			cout << "\n============================== \n\n\n";
				
            goto startover;
            
        //opcion 2    
        case 2:
            cout << "\n";
            cout << " Generando menu vegetariano... \n";
			cout << " Menu listo! \n";
            
            for(int i = hoy; i < hoy+1; i++)
			{
			ofstream myFile;
			
			myFile.open ("Menu_Vegetariano.txt");
			
			myFile << "\n============================== \n";
			myFile << "       MENU VEGETARIANO   ";
			myFile << "\n============================== \n\n";
			myFile << " Sopa: " << vegetariano[i].Sopa << endl;
			myFile << " Ensalada: " << vegetariano[i].Ensalada << endl;
			myFile << " Entrada: " << vegetariano[i].Entrada << endl;
			myFile << " Plato Fuerte: " << vegetariano[i].PlatoFuerte << endl;
			myFile << " Postre: " << vegetariano[i].Postre << endl;
			myFile << "\n============================== \n\n\n";
			
			string menuVeg;
			
			ifstream file ("Menu_Vegetariano.txt");
			
			while (getline(file,menuVeg))
			cout << menuVeg << endl;
			file.close();
			}
			
			cout << "\n Regresando al menu principal. ";
			cout << "\n============================== \n\n\n";	
			
            goto startover;
            
		//opcion 3 para cerrar el programa		
        case 3:
            cout << "Cerrando...\n";
            exit(0);
            return 0;
            
        //para regresar error si se selecciona fuera del rango establecido    
        default:
            cout << "Invalido \n";
            goto startover;
    }
     
return 0;
}

