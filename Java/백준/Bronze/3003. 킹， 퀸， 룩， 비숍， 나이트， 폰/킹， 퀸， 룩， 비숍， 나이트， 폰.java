import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        
        int[] correct = {1, 1, 2, 2, 2, 8};
        int[] found = new int[6];
        for (int i = 0; i < 6; i++) {
            found[i] = s.nextInt();
        }

        for (int i = 0; i < 6; i++) {
            System.out.print((correct[i] - found[i]) + " ");
        }
        s.close();
    }
}
