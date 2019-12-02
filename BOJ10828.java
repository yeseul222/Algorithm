package BOJ;

import java.util.Scanner;

public class Main10828 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		String cmd;
		int n;
		n = scan.nextInt();

		int[] arr = new int[n];

		int top = -1;

		while (n-- > 0) {
			cmd = scan.next();

			switch (cmd) {
			case "push":
				top++;
				arr[top] = scan.nextInt();
				break;
			case "pop":
				if (top >= 0) {
					System.out.println(arr[top]);
					top--;
				} else {
					top = -1;
					System.out.println(top);
				}
				break;
			case "size":
				System.out.println(top + 1);
				break;
			case "empty":
				if (top == -1)
					System.out.println(1);
				else
					System.out.println(0);
				break;
			case "top":
				if (top < 0)
					System.out.println(top);
				else
					System.out.println(arr[top]);
				break;
			}
		}
		scan.close();
	}
}
