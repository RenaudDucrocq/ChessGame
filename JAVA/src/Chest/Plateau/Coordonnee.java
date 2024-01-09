package Chest.Plateau;

import java.util.Arrays;

//Init de la classe
public class Coordonnee {
    //Liste des abscisses possibles
    private static final char[] validLetters = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    //Liste des ordonnées possibles
    private static final char[] validNumbers = {'1', '2', '3', '4', '5', '6', '7', '8'};
    //Abscisse assignée
    private char letter;
    //Ordonnée assignée
    private char number;

    //Initialisation d'une coordonnée nécessite une chaine de caractère du type "A1"
    //Une lettre et un chiffre tous deux devant faire partie des coordonnées possibles
    public Coordonnee(String formated_coordonnee) {
        if (formated_coordonnee.length() == 2) {
            char letter = formated_coordonnee.charAt(0);
            char number = formated_coordonnee.charAt(1);
            if (Arrays.asList(validLetters).contains(letter)
                    && Arrays.asList(validNumbers).contains(number)) {
                this.letter = letter;
                this.number = number;
            }
        } else
            System.out.println("le format d'une coordonnée est du type A1");
    }

    //Récupération de l'abscisse
    public char getLetter() {
        return letter;
    }

    //Récupération de l'ordonnée
    public char getNumber() {
        return number;
    }
}
