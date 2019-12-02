package BOJ;

import java.util.Scanner;
import java.util.Stack;

public class Main1406 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		Stack<Character> s1 = new Stack<Character>();
		Stack<Character> s2 = new Stack<Character>();

		String str = scan.next();
		int strLen = str.length();
		for (int i = 0; i < strLen; i++) {
			s1.push(str.charAt(i));
		}

		int n = scan.nextInt();
		scan.nextLine();

		while (n-- > 0) {
			String cmd = scan.next();

			switch (cmd) {
			case "P":
				char input = scan.next().charAt(0);
				s1.push(input);
				break;
			case "L":
				if (!s1.empty())
					s2.push(s1.pop());
				break;
			case "D":
				if (!s2.empty())
					s1.push(s2.pop());
				break;
			case "B":
				if (!s1.empty())
					s1.pop();
				break;
			}
		}
		while (!s1.empty()) {
			s2.push(s1.pop());
		}
		while (!s2.empty()) {
			System.out.print(s2.pop());
		}
		System.out.println();
		scan.close();
	}
}

//// 백준 정답
// import java.util.*;
// import java.io.*;
// public class Main {
//     public static void main(String args[]) throws IOException {
//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//         String s = br.readLine();
//         Stack<Character> left = new Stack<Character>();
//         Stack<Character> right = new Stack<Character>();
//         for (int i=0; i<s.length(); i++) {
//             left.push(s.charAt(i));
//         }
//         int m = Integer.parseInt(br.readLine());
//         while (m-- > 0) {
//             String[] line = br.readLine().split(" ");
//             char what = line[0].charAt(0);
//             if (what == 'L') {
//                 if (!left.empty()) {
//                     right.push(left.pop());
//                 }
//             } else if (what == 'D') {
//                 if (!right.empty()) {
//                     left.push(right.pop());
//                 }
//             } else if (what == 'P') {
//                 char c = line[1].charAt(0);
//                 left.push(c);
//             } else if (what == 'B') {
//                 if (!left.empty()) {
//                     left.pop();
//                 }
//             }
//         }
//         while (!left.empty()) {
//             right.push(left.pop());
//         }
//         StringBuilder sb = new StringBuilder();
//         while (!right.empty()) {
//             sb.append(right.pop());
//         }
//         System.out.println(sb);
//     }
// }