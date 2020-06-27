import java.util.Scanner;
import java.util.LinkedList;
import java.util.Stack;
import java.util.Queue;
import java.util.List;
// Check if given queue can be sorted into other queue using one stack.
class CheckQueueSort{
	static Boolean checkSorted(int n, Queue<Integer> q){
		Stack<Integer> s = new Stack<Integer>();
		int fnt, expected = 1;
		while(q.size() != 0){
			fnt = q.peek();
			q.poll();
			if(fnt == expected) expected++;
			else{
				if(s.size() == 0){
					s.push(fnt);
				}
				else if(s.size() != 0 && s.peek() < fnt)
									 return false;
					 else
					 			s.push(fnt);
			}
		}
		while(s.size() != 0 && s.peek() == expected){s.pop(); expected++;}
		if(expected -1 == n && s.size() == 0) return true;
		return false;
	} 
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Queue<Integer> q = new LinkedList<Integer>();
		//Stack<Integer> s = new Stack<Integer>();
		int element, t = n;
		while(t-- > 0){
			element = sc.nextInt();
			q.add(element);
		}
		System.out.println(checkSorted(n, q));
	}
}