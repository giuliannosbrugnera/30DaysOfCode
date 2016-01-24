import java.util.LinkedList;
import java.util.Scanner;

class Node {

	Node left, right;
	int data;

	Node( int data ) {
		this.data = data;
		left = right = null;
	}

}

public class Solution {

	public static LinkedList<Node> queue = new LinkedList<>();

	public static void main( String args[] ) {

		Scanner sc = new Scanner( System.in );
		int T = sc.nextInt();
		Node root = null;
		while ( T-- > 0 ) {
			int data = sc.nextInt();
			root = insert( root, data );
		}
		levelOrder( root );

		sc.close();

	}

	public static Node insert( Node root, int data ) {

		if ( root == null ) {
			return new Node( data );
		}
		else {
			Node cur;
			if ( data <= root.data ) {
				cur = insert( root.left, data );
				root.left = cur;
			}
			else {
				cur = insert( root.right, data );
				root.right = cur;
			}
			return root;
		}

	}

	public static void levelOrder( Node root ) {

		if ( root == null ) {
			return;
		}

		queue.add( root );

		while ( !queue.isEmpty() ) {
			Node tmp = queue.removeFirst();
			System.out.print( tmp.data + " " );

			if ( tmp.left != null ) {
				queue.add( tmp.left );
			}

			if ( tmp.right != null ) {
				queue.add( tmp.right );
			}

		}

	}
}
