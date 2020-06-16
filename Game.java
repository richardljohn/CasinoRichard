public class Game {

    boolean check(Player A){
        if(A.getMoney() > bet){
            return true;
        }
        return false;
    }
    
    void pay(Player A){
        double temp = A.getMoney();
        temp = temp + amount;
        A.setMoney(temp);
    }
    
    void setAmount(double A){
        amount = A;
    }
    
    double getAmount(){
        return amount;
    }
    
    void setBet(double b){
        bet = b;  
    }
    
    double getBet(){
        return bet; 
    }
        
    private double bet;
    private double amount; 
}
