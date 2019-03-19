/**
 * @author      : macab (macab@debian)
 * @file        : BigInteger
 * @created     : Tuesday Mar 19, 2019 22:18:14 IST
 */
import java.math.BigInteger;
import java.util.Scanner;

class TestBigInteger{


    public static void main(String[] args){

        BigInteger b1 = BigInteger.valueOf(12);
        BigInteger b2 = new BigInteger("123456676543213456786543212345678754321234567865432345678765432");
        System.out.println(b1.nextProbablePrime() + " " + b2);
    }
}
