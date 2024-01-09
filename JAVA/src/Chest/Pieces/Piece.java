package Chest.Pieces;

import Chest.Colors.Color;
import Chest.Moves.Move;
import Chest.Plateau.Coordonnee;
import Chest.Plateau.Plateau;

import java.util.HashSet;

//Init de classe
public abstract class Piece {
    //Liste des abscisses possibles
    protected static final char[] validLetters = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    //Liste des ordonnées possibles
    protected static final char[] validNumbers = {'1', '2', '3', '4', '5', '6', '7', '8'};
    //couleur de la piece
    private Color color;
    //Coordonnées de la piece
    private Coordonnee coordonnee;
    //Etat de la piece
    private boolean isalive;
    //Liste de mouvements possibles sans attaque
    private HashSet<Move> validMoves = new HashSet<>();
    //Liste d'attaques possibles
    private HashSet<Move> validAttaques = new HashSet<>();
    //Le plateau occupé
    private Plateau plateau;

    //Initialisation de la pièce nécessite une couleur et le plateau occupé
    //Par défaut une pièce est en vie
    public Piece(Color color, Plateau plateau) {
        this.color = color;
        this.plateau = plateau;
        setIsalive(true);
    }

    //Récupération des coordonnées de la pièce
    public Coordonnee getCoordonnee() {
        return coordonnee;
    }

    //Initialisation des coordonnées
    public void setCoordonnee(Coordonnee coordonnee) {
        this.coordonnee = coordonnee;
    }

    //Changement de l'état d'une pièce
    //Dans certains cas une pièce peut revenir à la vie
    public void setIsalive(boolean isalive) {
        this.isalive = isalive;
    }

    //Récupération de l'état
    public boolean getIsalive() {
        return isalive;
    }

    //Récupération du plateau occupé
    public Plateau getPlateau() {
        return plateau;
    }

    public String getColor() {
        return color.getColor();
    }

    //Vérification de la validité du mouvement
    public boolean isValidMove(Move move) {
        return validMoves.contains(move);
    }

    //Changement de la liste des mouvements valides à chaque tour
    public abstract void setValidMoves();

    //Clear de la liste des mouvements
    public void clearValidMoves() {
        this.validMoves.clear();
        this.validAttaques.clear();
    }

    //Ajout dans la liste des mouvements valides
    public void addValidMove(Move validMove) {
        this.validMoves.add(validMove);
    }

    //Changement de la liste des attaques valides à chaque tour
    public void addValidAttaques(Move validAttaque) {
        this.validAttaques.add(validAttaque);
    }

    //Execution du mouvement grâce aux coordonnées de destination
    public void moveTo(Coordonnee destination) {
        setCoordonnee(destination);
    }

}
