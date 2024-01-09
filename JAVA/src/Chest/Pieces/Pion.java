package Chest.Pieces;

import Chest.Colors.Color;
import Chest.Plateau.Coordonnee;
import Chest.Plateau.Plateau;

public class Pion extends Piece {
    public Pion(Color color, Plateau plateau, String letter) {
        super(color, plateau);
        if (color.getColor().equals("BLACK")) {
            setCoordonnee(new Coordonnee(letter + "9"));
        }
        if (color.getColor().equals("WHITE")) {
            setCoordonnee(new Coordonnee(letter + "2"));
        } else {
            System.out.println("couleur BLACK or WHITE");
        }

    }
    //La vérification tourne comme suit (droite gauche haut bas diagonale DH GH DB GB
    @Override
    public void setValidMoves() {
        clearValidMoves();
        String letter;
        String number;
        if (getCoordonnee().get)
    }
}
