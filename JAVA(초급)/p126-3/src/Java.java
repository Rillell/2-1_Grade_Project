import java.util.Scanner;
import java.util.InputMismatchException;
public class Java {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("정수를 입력하세요>>");
		
		try {
			int num = scanner.nextInt();
			if(num%2 == 0)
				System.out.println("짝수");
			else
				System.out.println("홀수");
		}
		catch(InputMismatchException e) {
			System.out.println("수를 입력하지 않아 프로그램 종료합니다.");			
		}
		finally {
			scanner.close();
		}
					
	}

}
