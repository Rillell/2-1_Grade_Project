import java.util.Scanner;
public class Rectangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("�� (x,y)�� ��ǥ�� �Է��ϼ���>>");
		int x = scanner.nextInt();
		int y = scanner.nextInt();
		
		if((x > 50)&&(x <100)&&(y > 50)&&(y < 100))
			System.out.println("��(" + x + "," + y + ")�� (50, 50)�� (100,100)�� �簢�� ���� �ֽ��ϴ�.");			
		else
			System.out.println("��(" + x + "," + y + ")�� (50, 50)�� (100,100)�� �簢�� ���� �����ϴ�.");
			
		scanner.close();	

	}

}
