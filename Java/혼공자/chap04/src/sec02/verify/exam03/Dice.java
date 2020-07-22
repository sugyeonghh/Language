package sec02.verify.exam03;

public class Dice {
	
	public static void main(String[] args) {
		
		while(true) {
			
			int dice1 = (int)(Math.random()*6)+1;
			int dice2 = (int)(Math.random()*6)+1;
			
			System.out.print("("+dice1+", "+dice2+") ");
			
			if(dice1+dice2 == 5)
				break;
			
		}
	}
	
}
