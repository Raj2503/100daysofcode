import java.util.*;
import java.lang.*;
import java.io.*;

class Codef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner scr = new Scanner(System.in);
        int t = scr.nextInt();
        while (t > 0) {
            t--;
            int n = scr.nextInt();
            int k = scr.nextInt();
            int arr[] = new int[n];
            int i = 0;
            int height = 0;
            int ans = -1;
            LinkedHashSet<Integer> set1 = new LinkedHashSet<Integer>();

            for (i = 0; i < n; i++)
                arr[i] = scr.nextInt();

            Arrays.sort(arr);
            set1.add(arr[n - 1]);
            height = arr[n - 1];
            for (i = n - 2; i >= 0; i--) {
                height = height + arr[i];

                LinkedHashSet<Integer> set2 = new LinkedHashSet<Integer>();
                Iterator i1 = set1.iterator();

                while (i1.hasNext()) {
                    int temp = (int) (i1.next());
                    set2.add(temp);
                    set2.add(arr[i]);
                    set2.add(temp + arr[i]);
                    if (((arr[i]) >= k) && ((height - arr[i]) >= k)) {
                        ans = n - i;
                        break;
                    }

                    if (((temp + arr[i]) >= k) && ((height - temp - arr[i]) >= k)) {
                        ans = n - i;
                        break;
                    }

                }
                if (ans != -1)
                    break;
                else
                    set1 = set2;
            }
            System.out.println(ans);
        }
        scr.close();
    }
}