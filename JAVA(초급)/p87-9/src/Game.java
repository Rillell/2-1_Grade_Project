import java.util.Scanner;
public class Game {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("1 ~ 99������ ������ �Է��ϼ���>>");
		int num = scanner.nextInt();
		int first = num/10;
		int second = num%10;
		
		if((first == 3) || (first == 6) || (first == 9))
			if((second == 3) || (second == 6) || (second == 9))
				System.out.println("�ڼ�¦¦");
			else System.out.println("�ڼ�¦");
		else if((second == 3) || (second == 6) || (second == 9))
			System.out.println("�ڼ�¦");				
		else System.out.println("�ڼ�����");
		
		scanner.close();
			
			
			

	}

}
