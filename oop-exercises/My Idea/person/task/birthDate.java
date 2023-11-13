package person.task;

/*
 * Implement birth date as a class (Do not use Java Date class)
 * Add birth date that contains Day, Month, and Year
 * Implement the required methods to set and get day, month, and year
 * Implement the required methods to validate day, month and year
 */
class birthDate {

    protected int day, month;
    protected String year;

    protected void set_birthdate(int day, int month, String year) {
        this.day = day;
        // 1  2  3  4  5  6  7  8  9  10  11  12
        // 31 28 31 30 31 30 31 31 30 31  30  31
        this.month = month;
        this.year = year;
    }

    protected boolean check_birthdate() {
        if ((month >= 1 && month <= 12) && year.length() == 4) {
            if (((day > 0) && (day <= 28 || day <= 29)) && (month == 2)) {
                return true;

            } else if ((day > 0 && day <= 30) && (month == 4 || month == 6 || month == 9 || month == 11)) {
                return true;

            } else if ((day > 0 && day <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
                return true;
            }
        }

        return false;
    }

    protected void get_birthdate() {
        System.out.println("The Birth Date Is : " + this.day + "/" + this.month + "/" + this.year);
    }
}