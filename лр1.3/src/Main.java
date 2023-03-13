//Пользователь вводит с клавиатуры целые числа x и n (-15 < n < 15).
// С помощью циклов for и while посчитать xn и вывести на экран.
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Введите x: ");
        int x = in.nextInt();
        System.out.println("Введите n: ");
        int n = in.nextInt();
        while ((n>=15) | (n<=-15)) {
            System.out.println("Недопустимое значение,введите число n(-15<n<15): ");
            n = in.nextInt();
        }
        double result = x;
        if ( n >= 0) {
            for (int i = 2; i<= n; i++) {
                result = result * x ;
            }
        }else {
            for (int k = -2; k>= n; k--) {
                result = (result * x);
            } result = 1/ result;
        }
        System.out.println(result);
    }
}

