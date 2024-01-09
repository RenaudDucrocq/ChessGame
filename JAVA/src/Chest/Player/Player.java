package Chest.Player;

import Chest.Colors.Color;

public class Player {
    //Liste des abscisses possibles
    private static final char[] validLetters = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    //Liste des ordonnées possibles
    private static final char[] validNumbers = {'1', '2', '3', '4', '5', '6', '7', '8'};
    private Color color;

    public String getColor() {
        return color.getColor();
    }
}
