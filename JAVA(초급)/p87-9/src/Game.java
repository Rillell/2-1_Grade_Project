import java.util.Scanner;
public class Game {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("1 ~ 99사이의 정수를 입력하세요>>");
		int num = scanner.nextInt();
		int first = num/10;
		int second = num%10;
		
		if((first == 3) || (first == 6) || (first == 9))
			if((second == 3) || (second == 6) || (second == 9))
				System.out.println("박수짝짝");
			else System.out.println("박수짝");
		else if((second == 3) || (second == 6) || (second == 9))
			System.out.println("박수짝");				
		else System.out.println("박수없음");
		
		scanner.close();
			
			
			

	}

}
