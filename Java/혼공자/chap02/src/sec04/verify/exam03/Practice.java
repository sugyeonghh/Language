package sec04.verify.exam03;

import java.util.Scanner;

public class Practice {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("[필수 정보 입력]");
		System.out.print("1. 이름: ");
		String name = scanner.nextLine();
		System.out.print("2. 주민번호 앞 6자리: ");
		String info = scanner.nextLine();
		System.out.print("3. 전화번호: ");
		String tel1 = scanner.next();
		String tel2 = scanner.next();
		String tel3 = scanner.next();
		
		
		System.out.println("[입력한 내용]");
		System.out.println(name+"\n"+info+"\n"+tel1+"-"+tel2+"-"+tel3);
	
	}
}
