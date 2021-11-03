import java.util.Scanner;
public class ScannerEX {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.print("두 정수를 입력하세요>>");
		
		Scanner scanner = new Scanner(System.in);
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		
		System.out.println(a + "+" + b + "은 " + (a+b));
		
	}

}
