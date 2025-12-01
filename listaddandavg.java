import java.util.*;
public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    List<Integer> numbers = new ArrayList<>();
    System.out.println("Enter integers (type 'done' to finish):");
    
    while(scanner.hasNext()) {
        int num = scanner.nextInt();
        numbers.add(num);   
}
    scanner.close();
    
    int sum = 0;
    for(int number : numbers) {
        sum += number;
    }
    
    double average = (double) sum / numbers.size();
    
    System.out.println("Sum: " + sum);
    System.out.println("Average: " + average);
}