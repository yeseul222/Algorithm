package BOJ;

import java.util.Scanner;
import java.util.Stack;

public class Main1874 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		int[] arr = new int[n];

		Stack<Integer> stack = new Stack<Integer>();

		for (int i = 0; i < n; i++) {
			arr[i] = scan.nextInt();
		}

		String[] str = new String[2 * n];
		int stackInput = 1;
		int i = 0;
		int j = 0;
		while (i <= n - 1) {
			if (stack.isEmpty()) {
				stack.push(stackInput++);
				str[j++] = "+";
			} else {
				if (stack.peek() > arr[i]) {
					break;
				} else {
					if (stack.peek() == arr[i]) {
						stack.pop();
						i++;
						str[j++] = "-";
					} else {
						stack.push(stackInput++);
						str[j++] = "+";
					}
				}
			}
		}
		if (i == n) {
			for (int k = 0; k < j; k++) {
				System.out.println(str[k]);
			}
		} else {
			System.out.println("NO");
		}
		scan.close();
	}
}
