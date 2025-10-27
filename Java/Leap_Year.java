public class LeapYearChecker {

    public static boolean isLeapYear(int year) {
        // A year is a leap year if it is divisible by 4
        // AND (it is NOT divisible by 100 OR it IS divisible by 400)
        return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
    }

    public static void main(String[] args) {
        int year1 = 2024; // A leap year
        int year2 = 1900; // Not a leap year (divisible by 100 but not by 400)
        int year3 = 2000; // A leap year (divisible by 400)
        int year4 = 2023; // Not a leap year

        if (isLeapYear(year1)) {
            System.out.println(year1 + " is a leap year.");
        } else {
            System.out.println(year1 + " is not a leap year.");
        }

        if (isLeapYear(year2)) {
            System.out.println(year2 + " is a leap year.");
        } else {
            System.out.println(year2 + " is not a leap year.");
        }

        if (isLeapYear(year3)) {
            System.out.println(year3 + " is a leap year.");
        } else {
            System.out.println(year3 + " is not a leap year.");
        }

        if (isLeapYear(year4)) {
            System.out.println(year4 + " is a leap year.");
        } else {
            System.out.println(year4 + " is not a leap year.");
        }
    }
}
