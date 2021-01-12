/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechf {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here

        Scanner scr = new Scanner(System.in);
        int t = scr.nextInt();
        while (t > 0) {
            t--;
            int n = scr.nextInt();
            PriorityQueue<Integer>[] r = new PriorityQueue[n];
            PriorityQueue<Integer>[] l = new PriorityQueue[n];

            HashMap<Integer, Integer> map = new HashMap<>();
            HashSet<Integer> set = new HashSet<>();
            long collision = 0;
            int i = 0, temp, j = 0;

            for (i = 0; i < n; i++) {
                r[i] = new PriorityQueue<>();
                l[i] = new PriorityQueue<>();

                int m = scr.nextInt();

                for (j = 0; j < m; j++) {
                    temp = scr.nextInt();
                    if (temp > 0)
                        r[i].add(temp);
                    else
                        l[i].add(temp * (-1));

                    if (map.containsKey(Math.abs(temp)))
                        map.put(Math.abs(temp), map.get(Math.abs(temp)) + 1);
                    else
                        map.put(Math.abs(temp), 1);
                }
            }
            map.forEach((k, v) -> {
                if (v >= 2)
                    set.add(k);
            });

            collision += set.size();
            for (i = 0; i < n; i++) {
                while ((!l[i].isEmpty() && !r[i].isEmpty())) {

                    if (l[i].peek() > r[i].peek()) {
                        temp = r[i].poll();
                        if (set.contains(temp))
                            collision += r[i].size();
                        else
                            collision += l[i].size();

                    } else if (l[i].peek() == r[i].peek()) {
                        r[i].poll();
                        l[i].poll();
                        collision += l[i].size() + r[i].size();
                    } else {
                        temp = l[i].poll();
                        if (set.contains(temp))
                            collision += l[i].size();
                        else
                            collision += r[i].size();
                    }
                }
                while (!r[i].isEmpty()) {
                    temp = r[i].poll();
                    if (set.contains(temp))
                        collision += r[i].size();
                }
                while (!l[i].isEmpty()) {
                    temp = l[i].poll();
                    if (set.contains(temp))
                        collision += l[i].size();
                }
            }
            System.out.println(collision);
        }
        scr.close();
    }
}