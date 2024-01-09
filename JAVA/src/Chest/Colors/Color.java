package Chest.Colors;

//Init de la classe abstraite
public abstract class Color {
    //Les variables communes à toutes les couleurs
    protected static final String[] validColors = {"BLACK", "WHITE"};
    protected String color;

    public String getColor() {
        return color;
    }
}
