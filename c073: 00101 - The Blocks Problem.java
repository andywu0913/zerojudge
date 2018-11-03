import java.util.Scanner;
import java.util.Stack;

class Main {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int num;

		while (scanner.hasNextInt()) {
			num = scanner.nextInt();
			scanner.nextLine();

			Stack<Integer>[] stack = new Stack[num];

			for (int i = 0; i < stack.length; i++) {
				stack[i] = new Stack<Integer>();
				stack[i].push(i);
			}

			String cmd;
			while (scanner.hasNext()) {

				cmd = scanner.nextLine();

				if (cmd.contains("quit"))
					break;

				Scanner parse = new Scanner(cmd);
				String verb = parse.next();
				int a = parse.nextInt();
				String prop = parse.next();
				int b = parse.nextInt();

				int locationA = findNumInWhichPile(stack, a);
				int locationB = findNumInWhichPile(stack, b);

				if (locationA == locationB)
					continue;

				if (verb.contains("move") && prop.contains("onto")) {
					putBack(stack, locationA, a);
					putBack(stack, locationB, b);
					stack[locationB].push(stack[locationA].pop());
					continue;
				}
				if (verb.contains("move") && prop.contains("over")) {
					putBack(stack, locationA, a);
					stack[locationB].push(stack[locationA].pop());
					continue;
				}
				if (verb.contains("pile") && prop.contains("onto")) {
					putBack(stack, locationB, b);

					Stack<Integer> temp = new Stack<Integer>();
					do {
						temp.push(stack[locationA].pop());
					} while (temp.peek() != a);

					while (!temp.isEmpty())
						stack[locationB].push(temp.pop());
					continue;
				}
				if (verb.contains("pile") && prop.contains("over")) {

					Stack<Integer> temp = new Stack<Integer>();
					do {
						temp.push(stack[locationA].pop());
					} while (temp.peek() != a);

					while (!temp.isEmpty())
						stack[locationB].push(temp.pop());
					continue;
				}
			}

			Stack<Integer> temp = new Stack<Integer>();

			for (int i = 0; i < stack.length; i++) {
				System.out.print(i + ":");
				while (!stack[i].isEmpty())
					temp.push(stack[i].pop());
				while (!temp.isEmpty())
					System.out.print(" " + temp.pop());
				System.out.println();
			}
		}
	}

	public static int findNumInWhichPile(Stack<Integer>[] stack, int num) {

		for (int i = 0; i < stack.length; i++) {

			if (stack[i].contains(num))
				return i;
		}
		return -1;
	}

	public static void putBack(Stack<Integer>[] stack, int pile, int num) {

		int temp;

		while ((temp = stack[pile].pop()) != num)
			stack[temp].push(temp);

		stack[pile].push(temp);
	}
}
