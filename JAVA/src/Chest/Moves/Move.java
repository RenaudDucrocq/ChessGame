package Chest.Moves;

import Chest.Plateau.Coordonnee;

//Init de a classe
public class Move {
    //Coordonnées de départ
    private Coordonnee depart;
    //Coordonnées d'arrivée
    private Coordonnee arrive;

    //Initialisation du mouvement nécessite les coordonnées de départ et d'arrivée
    public Move(Coordonnee depart, Coordonnee arrive) {
        this.depart = depart;
        this.arrive = arrive;
    }


}
