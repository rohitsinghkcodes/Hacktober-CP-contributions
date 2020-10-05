/* 
 *  Ques Link: https://www.codechef.com/JULY20B/problems/ADAKING/
 * CodeChef Solution by @shivamjaiwal64
 *
 *
 */
 
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.BufferedReader;
//import java.util.Scanner;

class ADAKNG{
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		//Scanner sc = new Scanner(System.in);
		short t = Short.parseShort(br.readLine());
		StringBuffer sf = new StringBuffer();
		while(t-- != 0){
			int n = Integer.parseInt(br.readLine());
			char[][] out= new char[8][8];
			out[0][0] = 'O';
			n--;
			for (int ind=0;ind < 8;ind++ ) {
				for (int j=0; j<8 ;j++ ) {
					if(ind ==0 && j==0)
						continue;
					if(n>0){
						out[ind][j] ='.';
						n--;
					}else
						out[ind][j] = 'X';
				}
			}
			for (int ind=0;ind < 8;ind++ ) {
				for (int j=0; j<8 ;j++ ) {
					sf.append(out[ind][j]);
				}
				sf.append("\n");
			}
			sf.append("\n");
		}
		System.out.println(sf);
	}
}


