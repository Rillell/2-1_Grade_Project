import java.util.Scanner;
import java.util.InputMismatchException;
public class Java {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("������ �Է��ϼ���>>");
		
		try {
			int num = scanner.nextInt();
			if(num%2 == 0)
				System.out.println("¦��");
			else
				System.out.println("Ȧ��");
		}
		catch(InputMismatchException e) {
			System.out.println("���� �Է����� �ʾ� ���α׷� �����մϴ�.");			
		}
		finally {
			scanner.close();
		}
					
	}

}
