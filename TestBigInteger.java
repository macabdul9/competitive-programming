/**
 * @author      : macab (macab@debian)
 * @file        : BigInteger
 * @created     : Tuesday Mar 19, 2019 22:18:14 IST
 */
import java.math.BigInteger;
import java.util.Scanner;

class TestBigInteger{


    public static void main(String[] args){

        BigInteger bi = BigInteger.valueOf(12);

        System.out.println(bi.nextProbablePrime());
    }
}
