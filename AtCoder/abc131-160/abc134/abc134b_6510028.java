/*
	submission #6510028 - User: herp_sy
	https://atcoder.jp/contests/abc134/submissions/6510028
*/

import java.util.*;
import java.io.*;
import static java.lang.System.*;

public class Main{
	public static void main(String[] args){
		int n,d;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		d = sc.nextInt();

		out.println((n + d * 2) / (d * 2 + 1));
	}
}
