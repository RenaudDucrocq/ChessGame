package Chest.Plateau;

import Chest.Player.Player;

//Init de la classe
public class Case {
    //Coordonnees de la case
    private Coordonnee coordonnee;
    //variable d'état de la case
    private Player[] player = new Player[1];

    //La construction d'une case nécessite des coordonnées et initialise l'état comme vide
    public Case(Coordonnee coordonnee) {
        this.coordonnee = coordonnee;
        this.player[0] = null;
    }

    //Changement de l'état
    public void setPlayer(Player player) {
        this.player[0] = player;
    }

    //Récupération de l'état
    public Player getPlayer() {
        return player[0];
    }

    //Vérifie que la case est vide
    public boolean isEmpty() {
        return this.player[0] == null;
    }

    public Coordonnee getCoordonnee() {
        return coordonnee;
    }
}
