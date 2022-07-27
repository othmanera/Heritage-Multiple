#include <iostream>
#include<string>
using namespace std;

// classe point
class point{
    int abscisse;
    int ordonnee;

public:
//constructeur
point(int ab=0,int ord=0){
    abscisse=ab;
    ordonnee=ord;

}
//Affichage
void afficher(){
    cout <<"Abscisse: "<< abscisse<<endl;
    cout <<"Ordonnee: "<< ordonnee<<endl;
}
//changer les cordonnees
void change_coord(int x, int y){
     abscisse=x;
    ordonnee=y;

}

}; //fin de la classe point

//Classe figure
class figure{
    string couleur;
    int epaisseur;
public:
//constructeur
figure(string c="",int ep=0){
    couleur=c;
    epaisseur=ep;

}
//affichage
void afficher(){
    cout <<"Couleur: "<< couleur<<endl;
    cout <<"Epaisseur: "<< epaisseur<<endl;
}
//changer la couleur
void change_coord(string c){
    couleur=c;

}
//changer l'epaisseur
void change_coord(int ep){
    epaisseur=ep;

}

}; //Fin de la classe figure

//classe cercle 
class cercle : public point, public figure {
    string rayon;
public:
// constructeur 
cercle(int ab=0,int ord=0,string c="",int ep=0,string ray="" ):
point(ab,ord),figure(c,ep) {
    rayon=ray;

}

//affichage
void afficher(){
    point :: afficher();
    figure :: afficher();
    cout << "Rayon: "<< rayon <<endl;

}


}; //fin de la classe cercle

//classe cylindre
class cylindre : public cercle {
    int hauteur;
public:
//constructeur
cylindre(int ab=0 , int ord=0 , string c="", int ep=0 , string ray="", int h=0) : 
cercle(ab , ord , c , ep , ray){
    hauteur=h;
}
//affichage
void afficher(){
	cercle :: afficher();
	cout << hauteur<< endl;
}

//changer la hauteur
void changer_hauteur(int h){
    hauteur=h;
}

}; //fin de la classe cylindre

main(){
    point P;
    P.afficher();
    cout <<"---------------"<<endl;
    figure F;
    F.afficher();
    cout <<"---------------"<<endl;
	cercle Ce;
    Ce.afficher();
    cout <<"---------------"<<endl;
    cylindre C;
    C.afficher();
    cout <<"---------------"<<endl;
	
}
