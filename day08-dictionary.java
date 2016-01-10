import java.util.HashMap;
import java.util.Scanner;

public class Main {

	public static void main( String[] args ) {
		Scanner sc = new Scanner( System.in );
		HashMap<String, String> hashMap = new HashMap<>();

		int n = Integer.parseInt( sc.nextLine() );

		for ( int i = 0; i < n; i++ ) {
			String name = sc.nextLine();
			String phone = sc.nextLine();
			hashMap.put( name, phone );
		}

		while ( sc.hasNext() ) {
			String key = sc.nextLine();
			String value;
			if ( (value = hashMap.get( key )) != null ) {
				System.out.println( key + "=" + value );
			}
			else {
				System.out.println( "Not found" );
			}
		}

		sc.close();
	}

}
