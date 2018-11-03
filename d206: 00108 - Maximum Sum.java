import java.util.Scanner;

class Main {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		while (scanner.hasNext()) {

			int size = scanner.nextInt();
			int[][] matrix = new int[size][size];
			int[][] sumTable = new int[size][size];

			// Read data in array
			for (int i = 0; i < size; i++)
				for (int j = 0; j < size; j++)
					matrix[i][j] = scanner.nextInt();

			// Calculate sum array
			for (int i = 0; i < size; i++)
				for (int j = 0; j < size; j++) {
					if (j > 0)
						sumTable[i][j] = sumTable[i][j - 1];
					if (i > 0) {
						sumTable[i][j] += sumTable[i - 1][j];
						if (j > 0)
							sumTable[i][j] -= sumTable[i - 1][j - 1];
					}
					sumTable[i][j] += matrix[i][j];
				}

			// Check
//			for (int i = 0; i < size; i++, System.out.println())
//				for (int j = 0; j < size; j++)
//					System.out.printf("%+2d ", matrix[i][j]);
//
//			System.out.println();
//
//			for (int i = 0; i < size; i++, System.out.println())
//				for (int j = 0; j < size; j++)
//					System.out.printf("%+2d ", sumTable[i][j]);
			// Check

			int maxSum = matrix[0][0];

			for (int uBound = 0; uBound < size; uBound++)
				for (int lBound = 0; lBound < size; lBound++)
					for (int dBound = uBound; dBound < size; dBound++)
						for (int rBound = lBound; rBound < size; rBound++) {
							int sum = sumTable[dBound][rBound];
							if (uBound > 0)
								sum -= sumTable[uBound - 1][rBound];
							if (lBound > 0)
								sum -= sumTable[dBound][lBound - 1];
							if (uBound > 0 && lBound > 0)
								sum += sumTable[uBound - 1][lBound - 1];
							if (sum > maxSum)
								maxSum = sum;
						}

			System.out.println(maxSum);
		}
	}
}
