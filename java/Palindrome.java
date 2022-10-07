import java.io.*;

public class Palindrome
{
	public static int check(String s)
	{
		int l = s.length();
		for(int i=0;i<l/2;i++)
		{
			if(s.charAt(i)!=s.charAt(l-i-1))
				return 0;
		}
		return 1;
	}

	public static void main(String[] args)throws IOException
	{
		String s;
		int res;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Enter the string");
		s = br.readLine();
		
		res = check(s);
		if(res==1)
			System.out.println(s+" is palindrome");
		else
			System.out.println(s+" is not a palindrome");
	}
	
}
