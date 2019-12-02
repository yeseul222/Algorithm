package BOJ;

import java.util.Scanner;
import java.util.Stack;

public class Main10828_STL {
	public static void main(String[] args) {
		Stack<Integer> stack = new Stack<Integer>();

		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		scan.nextLine();
		
		while (n-- > 0) {
			String line = scan.nextLine();
			String[] s = line.split(" ");
			String cmd = s[0];
			
			if (cmd.equals("push")) {
				stack.push(Integer.parseInt(s[1]));
			} else if (cmd.equals("pop")) {
				if (stack.empty())
					System.out.println(-1);
				else
					System.out.println(stack.pop());
			} else if (cmd.equals("size")) {
				System.out.println(stack.size());
			} else if (cmd.equals("empty")) {
				if (stack.empty())
					System.out.println(1);
				else
					System.out.println(0);
			} else if (cmd.equals("top")) {
				if (stack.empty())
					System.out.println(-1);
				else
					System.out.println(stack.peek());
			}
		}
		scan.close();
	}
}
