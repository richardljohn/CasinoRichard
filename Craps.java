import java.util.Random;
import java.util.Scanner;

public class Craps extends Game{
    
    public int diceRoll(){
        Random dice = new Random();
        int die = 1 + dice.nextInt(6);
        return die; 
    }
    
    public void playCraps(Player A){
        int d1, d2, roll, point, wins = 0, losses = 0, newRoll;
        double count = 0, chances; 
        char repeat = 'Y';
        Scanner input = new Scanner(System.in);
        while (repeat == 'Y'){
            System.out.println("This is game " + count + 1.0 + ".");
            System.out.println("You currently have " + A.getMoney() + " dollars.");
            System.out.println("Enter how much would you like to bet: ");
            setBet(input.nextDouble());
            if(A.getMoney() <= 0){
                System.out.println("You have no money");
                break;
            }
            while(check(A) == false){
                System.out.println("You do not have enough money");
                System.out.println("Please enter another amount: ");
                setBet(input.nextDouble());
            }
            double temp;
            temp = A.getMoney();
            temp = temp - getBet();
            A.setMoney(temp);
            d1 = diceRoll();
            d2 = diceRoll();
            roll = d1 + d2; 
            System.out.println("You rolled a " + d1 + " and a " + d2 + ".\nYour roll is a " + roll + ".");
            if((roll == 7) || (roll == 11)){
                System.out.println("You win.");
                temp = temp + (getBet()*2);
                A.setMoney(temp);
                count++;
                wins++;
                System.out.println("Would you like to play again? (Enter Y for Yes. Enter N for No): ");
                repeat = input.next().charAt(0);
            }
            else if((roll == 2) || (roll == 3) || (roll == 12)) {
                System.out.println("You lose.");
                System.out.println("You currently have " + A.getMoney() + " dollars.");
                count++;
                losses++;
                System.out.println("Would you like to play again? (Enter Y for Yes. Enter N for No): ");
                repeat = input.next().charAt(0);
            }
            else if((roll == 4) || (roll == 5) || (roll == 6) || (roll == 8) || (roll == 9) || (roll == 10)){
                point = roll; 
                d1 = diceRoll();
                d2 = diceRoll();
                newRoll = d1 + d2; 
                System.out.println("You rolled a " + d1 + " and a " + d2 + ".\nYour roll is a " + newRoll + ".");
                if(newRoll == point) {
                    System.out.println("You win!");
                    temp = temp + (getBet()*2);
                    A.setMoney(temp);
                    System.out.println("You currently have " + A.getMoney() + " dollars.");
                    count++;
                    wins++;
                    System.out.println("Would you like to play again? (Enter Y for Yes. Enter N for No): ");
                    repeat = input.next().charAt(0);
                }
                else if (newRoll == 7){
                    System.out.println("You lose.");
                    System.out.println("You currently have " + A.getMoney() + " dollars.");
                    count++;
                    losses++;
                    System.out.println("Would you like to play again? (Enter Y for Yes. Enter N for No): ");
                    repeat = input.next().charAt(0);
                }
                else{
                    d1 = diceRoll();
                    d2 = diceRoll();
                    roll = d1 + d2; 
                    System.out.println("You rolled a " + d1 + " and a " + d2 + ".\nYour roll is a " + roll + ".");
                }
            }
            
        }
        input.close();
        chances = (wins / count);
        System.out.println("You played " + count + " games.");
        System.out.println("You won " + wins + " times.");
        System.out.println("You lost " + losses + " times.");
        System.out.println("Your win to lose ratio is " + chances * 100 + " percent." );
        System.out.println("Thank you for playing.");
    }
}