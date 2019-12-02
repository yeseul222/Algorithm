package BOJ;

import java.util.Scanner;
import java.util.Stack;

public class Main9012 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		scan.nextLine();
		
		Stack<Integer> stack = new Stack<Integer>();
		
		while (n-- > 0) {
			String ps = scan.nextLine();
			String[] str = ps.split("");
			int psLen = ps.length();
			for (int i = 0; i < psLen; i++) {
				if (str[i].equals("(")) {
					stack.push(1);
				} else {
					if (stack.empty()) {
						stack.push(0);
						break;
					} else
						stack.pop();
				}
			}

			if(stack.empty())
				System.out.println("YES");
			else
				System.out.println("NO");
			
			while (!stack.empty()) {
				stack.pop();
			}
		}
		scan.close();
	}
}

//// 백준 정답
// import java.util.*;
// import java.math.*;

// public class Main {
//     public static String isValid(String s) {
//         s = s.trim();
//         int n = s.length();
//         int cnt = 0;
//         for (int i=0; i<n; i++) {
//             if (s.charAt(i) == '(') {
//                 cnt += 1;
//             } else {
//                 cnt -= 1;
//             }
//             if (cnt < 0) {
//                 return "NO";
//             }
//         }
//         if (cnt == 0) {
//             return "YES";
//         } else {
//             return "NO";
//         }
//     }
//     public static void main(String args[]) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         sc.nextLine();
//         while (n-- > 0) {
//             System.out.println(isValid(sc.nextLine()));
//         }
//     }
// }
