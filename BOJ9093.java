package BOJ;

import java.util.Scanner;
import java.util.Stack;

public class Main9093 {
	public static void main(String[] args) {
		Stack<Character> stack = new Stack<Character>();

		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		scan.nextLine();

		while (n-- > 0) {
			String str = scan.nextLine();
			int strLen = str.length();
			for (int i = 0; i < strLen; i++) {
				if (str.charAt(i) == ' ') {
					while (!stack.empty())
						System.out.print(stack.pop());
					System.out.print(' ');
				} else
					stack.add(str.charAt(i));

			}
			while (!stack.empty()) {
				System.out.print(stack.pop());
			}
			System.out.println();
		}
		scan.close();
	}
}
