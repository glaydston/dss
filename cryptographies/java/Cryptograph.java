import java.security.*;
import java.math.*;
/*
	This class cryptography to MD5, SHA-1 and SHA-256
	In the param args[] set the value of cryptography name that you want 
	to cryptograph 
*/
public class Cryptograph{
	public static void main(String args[]){
		String text =  "Example Text";
		try{
			MessageDigest message = MessageDigest.getInstance(args[0]);
			message.update(text.getBytes(), 0, text.length());
			System.out.println(args[0]+ ": "+ new BigInteger(1, message.digest()).toString(16));
		} catch(Exception e){
			System.out.println("Augh! I've been a problem: " + e.getMessage());
		}
	}
}
