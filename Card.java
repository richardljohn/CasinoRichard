public class Card { 
    Card(int face, int value, int suit, int color){
        this.face = face;
        this.value = value;
        this.suit = suit;
        this.color = color;
    }
    
    public Card[] deck = new Card[52];
    public static final String[] FACES = {
        null, "Ace", "2", "3", "4", "5", "6", "7",
        "8", "9", "10", "Jack", "Queen", "King"
    };
    
     public static final int[] VALUES = {
        0, 13, 2, 3, 4, 5, 6, 7,
        8, 9, 10, 11, 12, 13
    };

    public static final String[] SUITS = {
        "Clubs", "Diamonds", "Hearts", "Spades"
    };
    
    public static final String[] COLORS = {
        "Black", "Red"
    };
    
    public void fillDeck(){
        int index = 0;
        int color = 0;
        for (int suit = 0; suit <= 3; suit++) {
            if((suit == 1) || (suit == 2)){
                color = 1;
            }
            for (int rank = 1; rank <= 13; rank++) {
                deck[index] = new Card(rank, suit);
                index++;
            }
        }
    };
    
    public void setColor(String c){
        color = c;
    }
    
    public void setFace(String f){
        face = f;
    }
    
    public void setSuit(String s){
        suit = s;
    }
    
    public void setValue(int v){
        value = v;
    }
    
    public String getColor(){
        return color;
    }
    
    public String getFace(){
        return face;
    }
    
    public String getSuit(){
        return suit;
    }
    
    public int getValue(){
        return value;
    }
    
    public void display(){
        System.out.println(getFace() + " of " + getSuit() + " [" + getColor() + "]"); 
    }
    
    private int color;
    private int face;
    private int suit;
    private int value;
}
