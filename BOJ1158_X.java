package BOJ;

import java.util.Scanner;

public class Main1158 {
	public static void main(String[] args) {
		Queue queue = new Queue();

		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		int k = scan.nextInt();

		for (int i = 1; i <= n; i++) {
			queue.push(i);
		}
		System.out.print("<");
		while (n-- > 1) {
			for (int i = 1; i < k; i++) {
				queue.push(queue.pop());
			}
			System.out.print(queue.pop() + ", ");
		}
		System.out.print(queue.pop() + ">");
		scan.close();
	}
}

class Queue {
	int[] arr = new int[10000];
	int front = 0;
	int back = 0;

	void push(int n) {
		arr[back++] = n;
	}

	int pop() {
		int returns;
		if (back - front > 0)
			returns = arr[front++];
		else
			returns = -1;
		return returns;
	}

	int size() {
		int returns;
		returns = back - front;
		return returns;
	}

	int front() {
		int returns;
		if (back - front > 0)
			returns = arr[front];
		else
			returns = -1;
		return returns;
	}

	int back() {
		int returns;
		if (back - front > 0)
			returns = arr[back - 1];
		else
			returns = -1;
		return returns;
	}

	int empty() {
		int returns;
		if (back - front > 0)
			returns = 0;
		else
			returns = 1;
		return returns;
	}
}