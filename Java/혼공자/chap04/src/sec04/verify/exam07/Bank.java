package sec04.verify.exam07;

import java.util.Scanner;

public class Bank {
	public static void main(String[] args) {
		boolean run = true;
		int balance = 0;
		Scanner scanner = new Scanner(System.in);
		
		while(run) {
			System.out.println("----------------------------------------");
			System.out.println("1. 예금 | 2. 출금 | 3. 잔고 | 4. 종료");
			System.out.println("----------------------------------------");
			System.out.println("선택> ");
			
			String select = scanner.nextLine();
			
			switch(select) {
			case "1":
				System.out.println("예금액> ");
				System.out.println("1회 입금 한도: 100만원");
				int input = Integer.parseInt(scanner.nextLine());
				if(input >= 1000000) {
					System.out.println("1회 입금 한도 초과");
					break;
				}else {
					balance += input;
					break;
				}
				
			case "2":
				System.out.println("출금액> ");
				int output = Integer.parseInt(scanner.nextLine());
				if(output > balance) {
					System.out.println("잔액 부족");
					break;
				}else {
					balance -= output;
					break;
				}
				
			case "3":
				System.out.println("잔고> "+balance);
				break;
				
			case "4":
				run = false;
				break;
			default:
				System.out.println("다시 입력하세요!");
			}
		}
		
		System.out.println("프로그램 종료");
	}
}
