package BOJ;

import java.util.Scanner;
import java.util.Stack;

public class Main10799 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		String input = scan.next();
		int cnt = 0;
		Stack<Integer> stack = new Stack<Integer>();

		int inputLen = input.length();
		for (int i = 0; i < inputLen; i++) {
			if (input.charAt(i) == '(') {
				stack.push(1);
			} else {
				if (input.charAt(i - 1) == '(') {
					stack.pop();
					cnt += stack.size();
				} else {
					stack.pop();
					cnt++;
				}
			}
		}
		System.out.println(cnt);
        scan.close();
	}
}

//// 백준 정답
// import java.util.*;

// public class Main {
//     public static void main(String args[]) {
//         Scanner sc = new Scanner(System.in);
//         String a = sc.nextLine().trim();
//         int n = a.length();
//         Stack<Integer> s = new Stack<Integer>();
//         int ans = 0;
//         for (int i=0; i<n; i++) {
//             char c = a.charAt(i);
//             if (c == '(') {
//                 s.push(i);
//             } else {
//                 if (s.peek()+1 == i) {
//                     s.pop();
//                     ans += s.size();
//                 } else {
//                     s.pop();
//                     ans += 1;
//                 }
//             }
//         }
//         System.out.println(ans);
//     }
// }