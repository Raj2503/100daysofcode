/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {

    public static void main(String[] args) throws java.lang.Exception {
        Scanner scr = new Scanner(System.in);
        int t = scr.nextInt();
        while (t-- != 0) {
            int n = scr.nextInt();
            int m = scr.nextInt();
            TreeSet<Integer> tree = new TreeSet<Integer>();
            Stack<Integer> stack = new Stack<Integer>();
            tree.add(0);
            stack.push(0);
            int a[] = new int[n];
            int b[] = new int[m];
            for (int i = 0; i < n; i++) {
                a[i] = scr.nextInt();
            }
            for (int i = 0; i < m; i++) {
                b[i] = scr.nextInt();
            }
            while (!stack.isEmpty()) {
                int temp1 = (int) (stack.pop());
                for (int i = 0; i < n; i++) {
                    int temp2 = a[i];
                    if (!tree.contains(temp1 | temp2)) {
                        tree.add(temp1 | temp2);
                        stack.push(temp1 | temp2);
                    }
                }
                for (int i = 0; i < m; i++) {
                    int temp2 = b[i];
                    if (!tree.contains(temp1 & temp2)) {
                        tree.add(temp1 & temp2);
                        stack.push(temp1 & temp2);
                    }
                }
            }

            System.out.println(tree.size());
        }

        scr.close();
    }
}