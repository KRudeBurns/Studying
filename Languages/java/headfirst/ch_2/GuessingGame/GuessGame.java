public class GuessGame {
    //three instance variables for the 3 player objects
    Player p1, p2, p3;
    
    public void startGame() {
        
        //create player objects
        p1 = new Player();
        p2 = new Player();
        p3 = new Player();

        //create three variables that hold three players guesses
        int guessP1 = 0, guessP2 = 0, guessP3 = 0;  

        //holds true or false if based on player's answer
        boolean p1isRight = false, p2isRight = false, p3isRight = false;

        //make a target number that the players have to guess
        int targetNumber = (int) (Math.random() * 10);
        System.out.println("I am thinking of a number between 0 and 9 ...");

        while(true) {
            System.out.println("The number to guess is " + targetNumber);

            //call each players guess method
            p1.guess();
            p2.guess();
            p3.guess();

            //get each players guess
            guessP1 = p1.number;
            System.out.println("Player one guessed " + guessP1);
            
            guessP2 = p2.number;
            System.out.println("Player two guessed " + guessP2);
            
            guessP3 = p3.number;
            System.out.println("Player three guessed " + guessP3);

            //check each guess and affirm correctness of guess
            if (guessP1 == targetNumber) {
                p1isRight = true;
            }

            if (guessP2 == targetNumber) {
                p2isRight = true;
            }

            if (guessP3 == targetNumber) {
                p3isRight = true;
            }

            //if one or more players is right, 
            if(p1isRight || p2isRight || p3isRight) {
                System.out.println("Player one got it right? " + p1isRight);
                System.out.println("Player two got it right? " + p2isRight);
                System.out.println("Player three got it right? " + p3isRight);
                System.out.println("The game is over\n\n");
                break;
            }
            else {
                System.out.println("The players will how to try again\n\n");
            }
        } //end method


    }
}
