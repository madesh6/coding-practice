import java.util.Scanner;
// Print the number with smallest perfect cube from given elements. If not perfect cube exists, print '0';
class SmallestPerfectCube{
	static int findCubeRoot(int n){
		if(n==0 || n==1) return n;
		int cube = 2;
		while(cube*cube*cube <= n) cube++;
		cube--;
		if(cube*cube*cube ==  n) return cube;
		return -1;
	}
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int minCube = Integer.MAX_VALUE, d = 0, cube = 0;
		while(n-- > 0){
			d = sc.nextInt();
			cube = findCubeRoot(d);
			if(cube != -1 && cube < minCube) minCube = cube; 
		}
		if(minCube != Integer.MAX_VALUE) System.out.println(minCube*minCube*minCube);
		else System.out.println(0);
	}
}