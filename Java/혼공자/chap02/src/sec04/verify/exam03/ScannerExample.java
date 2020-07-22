package sec04.verify.exam03;

import java.util.Scanner;

public class ScannerExample {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String input;
		
		while(true) {
			System.out.println("input your message:");
			input = scanner.nextLine();
			System.out.println("input message: "+input);
			
			if(input.equals("q")) {
				break;
			}
		}
		
		System.out.println("end");
	}
}
