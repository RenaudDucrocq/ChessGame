package Chest.Plateau;

import java.util.HashSet;

//Init de la classe
public class Plateau {
    //Liste d'abscisses
    private static final char[] validLetters = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    //Liste d'ordonnées
    private static final char[] validNumbers = {'1', '2', '3', '4', '5', '6', '7', '8'};
    //Liste de cases
    private HashSet<Case> cases = new HashSet<>();

    //Initialisation des cases du plateau
    public Plateau() {
        for (int indexLetter = 0; indexLetter < 8; indexLetter++) {
            for (int indexNumber = 0; indexNumber < 8; indexNumber++) {
                String coordonnee = Character.toString(validLetters[indexLetter]);
                coordonnee = coordonnee + Character.toString(validNumbers[indexNumber]);
                cases.add(new Case(new Coordonnee(coordonnee)));
            }
        }
    }

    public static char[] getValidLetters() {
        return validLetters;
    }

    public static char[] getValidNumbers() {
        return validNumbers;
    }

    public Case getCase(Coordonnee coordonnee) {
        for (Case c :
                cases) {
            if (c.getCoordonnee() == coordonnee){
                return c;
            }
        }
        System.out.println("Erreur plateau.getCase");
        return null;
    }

    //Vérification de l'état d'une Case
    public boolean isEmptyCase(Coordonnee c1) {
        Case case1 = getCase(c1);
        return case1.isEmpty();
    }
}
