public class Player {
    
    private String name;
    private double money = 100.00;
    
    public void setName(String n){
        name = n;
    }
    public void setMoney(double m){
        money = m;
    }
    public String getName() {
        return name;
    }
    public double getMoney(){
        return money;
    }
    public void summary(){
        System.out.println("My name is " + getName() +"\nI have " + getMoney() + " dollars currently");
    }
}