import java.util.Scanner;
import java.io.*;

public class FileReaderEx {
	
	public static void readLine(String src) {
		String line;
		int lineNum = 1;
		
		try {
			Scanner fileScanner = new Scanner(new FileReader(src));
			while(fileScanner.hasNext()) {
				line = fileScanner.nextLine();
				System.out.printf("%2d: ", lineNum++);
				System.out.print(line);
				System.out.println();
			}		
			fileScanner.close();
		} catch (FileNotFoundException e) {	}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String src;
		
		System.out.print("텍스트 파일 이름을 입력하세요>>");
		src = sc.next();
		
		readLine(src);	
		sc.close();
	}
}



