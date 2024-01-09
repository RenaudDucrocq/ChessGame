package Chest.Pieces;

import Chest.Colors.Color;
import Chest.Moves.Move;
import Chest.Plateau.Coordonnee;
import Chest.Plateau.Plateau;

public class Roi extends Piece {

    public Roi(Color color, Plateau plateau) {
        super(color, plateau);
        if (color.getColor().equals("BLACK")) {
            setCoordonnee(new Coordonnee("E8"));
        }
        if (color.getColor().equals("WHITE")) {
            setCoordonnee(new Coordonnee("E1"));
        } else {
            System.out.println("couleur BLACK or WHITE");
        }

    }

    //La vérification tourne comme suit (droite gauche haut bas diagonale DH GH DB GB
    @Override
    public void setValidMoves() {
        clearValidMoves();
        char letter;
        char number;
        //Au centre
        if (getCoordonnee().getLetter() != 'A' && getCoordonnee().getLetter() != 'H' && getCoordonnee().getNumber() != '1' && getCoordonnee().getNumber() != '10') {
            for (int i = 0; i < 8; i++) {
                if (validLetters[i] == getCoordonnee().getLetter()) {
                    for (int j = 0; j < 8; j++) {
                        if (validNumbers[j] == getCoordonnee().getNumber()) {
                            //Droite
                            letter = validLetters[i + 1];
                            number = validNumbers[j];
                            SearchMoves(letter, number);
                            //Gauche
                            letter = validLetters[i - 1];
                            number = validNumbers[j];
                            SearchMoves(letter, number);
                            //Haut
                            letter = validLetters[i];
                            number = validNumbers[j + 1];
                            SearchMoves(letter, number);
                            //Bas
                            letter = validLetters[i];
                            number = validNumbers[j - 1];
                            SearchMoves(letter, number);
                            //Diagonale Haut Gauche
                            letter = validLetters[i - 1];
                            number = validNumbers[j + 1];
                            SearchMoves(letter, number);
                            //Diagonale Haut Droit
                            letter = validLetters[i + 1];
                            number = validNumbers[j + 1];
                            SearchMoves(letter, number);
                            //Diagonale Bas Droit
                            letter = validLetters[i + 1];
                            number = validNumbers[j - 1];
                            SearchMoves(letter, number);
                            //Diagonale Bas Gauche
                            letter = validLetters[i - 1];
                            number = validNumbers[j - 1];
                            SearchMoves(letter, number);
                        }
                    }//Parcours des nombres
                }
            }//Parcours des lettres
        }//Dans le centre du plateau
        else {
            if (getCoordonnee().getLetter() == )
        }
    }

    private void SearchMoves(char letter, char number) {
        String CouleurCible;
        if (getColor().equals("WHITE")) {
            CouleurCible = "BLACK";
        } else {
            CouleurCible = "WHITE";
        }
        String c;
        c = "" + letter + number;
        if (getPlateau().isEmptyCase(new Coordonnee(c))) {
            addValidMove(new Move(getCoordonnee(), new Coordonnee(c)));
        } else if (getPlateau().getCase(new Coordonnee(c)).getPlayer().getColor().equals(CouleurCible)) {
            addValidAttaques(new Move(getCoordonnee(), new Coordonnee(c)));
        }
    }
}
