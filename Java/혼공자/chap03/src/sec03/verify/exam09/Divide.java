package sec03.verify.exam09;

import java.util.Scanner;

public class Divide {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String num1;
		String num2;
		double result;
		
		System.out.println("입력받은 두 값을 나눈 결과를 출력하는 프로그램");
		System.out.println("두 값을 입력하세요");
		
		System.out.println("첫 번째 수:");
		num1 = scanner.next();
		System.out.println("두 번째 수:");
		num2 = scanner.next();
		
		
		if(num2.equals("0")||num2.equals("0.0")) {
			System.out.println("결과: 무한대");
		}else {
			result = Double.parseDouble(num1)/Double.parseDouble(num2);
			System.out.println("결과: "+result);			
		}
		
	}
}
