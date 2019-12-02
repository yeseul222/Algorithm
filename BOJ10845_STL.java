package BOJ;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main10845_STL {
	public static void main(String[] args) {
		Queue<Integer> queue = new LinkedList<Integer>();

		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		scan.nextLine();

		while (n-- > 0) {
			String cmd;
			cmd = scan.next();

			switch (cmd) {
			case "push":
				queue.add(scan.nextInt());
				break;
			case "pop":
				if (!queue.isEmpty())
					System.out.println(queue.poll());
				else
					System.out.println(-1);
				break;
			case "size":
				System.out.println(queue.size());
				break;
			case "empty":
				if (queue.isEmpty())
					System.out.println(1);
				else
					System.out.println(0);
				break;
			case "front":
				if (!queue.isEmpty())
					System.out.println(queue.peek());
				else
					System.out.println(-1);
				break;
			case "back":
            //java Queue에는 구현되어 있지 않음
				break;
			}
		}
		scan.close();
	}
}
