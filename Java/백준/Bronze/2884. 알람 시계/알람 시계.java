import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		int a = s.nextInt();
		int b = s.nextInt();
		
		if (b < 45) {
            a--; 
            b = b + 60 - 45;
        } else {
            b = b - 45;
        }

        if (a < 0) {
            a = 23;
        }
		
		System.out.println(a+" "+b);
		
		s.close();
	}
	

}