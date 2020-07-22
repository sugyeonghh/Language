package sec02.verify.exam02;

public class OneToTen {
	public static void main(String[] args) {
		int total = 0;
		
		for(int i=1;i<=100;i++) {
			if((i%3)==0) {
				total += i;
				System.out.print(i+"+");
			}
		}
		System.out.println("\n"+total);
	}
	
}
