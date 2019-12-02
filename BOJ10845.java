package BOJ;

import java.util.Scanner;

public class Main10845 {
	public static void main(String[] args) {
		Queue queue = new Queue();

		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		scan.nextLine();

		while (n-- > 0) {
			String cmd;
			cmd = scan.next();
			
			switch(cmd) {
			case "push":
				queue.push(scan.nextInt());
				break;
			case "pop":
				queue.pop();
				break;
			case "size":
				queue.size();
				break;
			case "empty":
				queue.empty();
				break;
			case "front":
				queue.front();
				break;
			case "back":
				queue.back();
				break;
			}
		}
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
		System.out.println(returns);
		return returns;
	}

	int size() {
		int returns;
		returns = back - front;
		System.out.println(returns);
		return returns;
	}

	int front() {
		int returns;
		if (back - front > 0)
			returns = arr[front];
		else
			returns = -1;
		System.out.println(returns);
		return returns;
	}

	int back() {
		int returns;
		if (back - front > 0)
			returns = arr[back - 1];
		else
			returns = -1;
		System.out.println(returns);
		return returns;
	}

	int empty() {
		int returns;
		if (back - front > 0)
			returns = 0;
		else
			returns = 1;
		System.out.println(returns);
		return returns;
	}
}
