import java.util.Scanner;
public class Height {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("몇 층인지 입력하세요>>");
		int height = scanner.nextInt();
		
		System.out.println(height*5 + "m 입니다.");
		
		scanner.close();

	}

}
