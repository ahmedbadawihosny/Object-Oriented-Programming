package person.task;

import static person.task.Main.printLine;
import java.util.Scanner;

public class Person extends birthDate {

    private static String name;
    private static String id;
    private static int age;
    private static String phone_number;
    private static String email;
    private static String salary;
    
    public Person() {
        this.name = "";
        this.id = "";
        this.age = 0;
        this.phone_number = "";
        this.email = "";
        this.salary = "";
        printLine();
        System.out.println("welcome to our Program");
        printLine();
    }

    /*
 * Implement a private method to check name as follows:
 *   Name should not be empty
 *   Name should include only English characters
 *   Length of Name should not exceed 20 characters.    
     */
    public void set_name(String name) {
        this.name = name;
    }

    public boolean check_name() {
        if (name != null && name.length() >= 20) {
            for (char ch : name.toCharArray()) {
                if ((ch < 'A' || (ch > 'Z' && ch < 'a') || ch > 'z')) {
                    return true;
                }
            }
        }
        return false;
    }

    public String get_name() {
        //System.out.println("Name Is : " + this.name);
        return this.name;
    }

    public void set_id(String id){
       this.id = id;  
    }
    
    public boolean check_id(){
        if (id.length() <= 8){
            return true;
        }   
        return false;
    }
    
    public String get_id(){
        //System.out.println("ID Is : " + this.id);
        return this.id;
    }
    // Implement getter and setter for the age attribute
    // Age should be within the range of 20 to 40 inclusive
    public void set_age(int age) {
        this.age = age;
    }

    public boolean check_age() {
        if (age >= 20 && age <= 40) {
            return true;
        }
        return false;
        
        // return (age >= 20 && age <= 40);
    }

    public int get_age() {
        //System.out.println("Age Is : " + this.age);
        return this.age;
    }

    // Validate phone number ( should be 11 digits starting with 010, 012, or 015)
    public void set_phoneNumber(String phone_number) {
        this.phone_number = phone_number;
    }

    public boolean check_phoneNumber() {
        if (phone_number.length() == 11
                && phone_number.charAt(0) == '0'
                && phone_number.charAt(1) == '1'
                && ( phone_number.charAt(2) == '0'
                || phone_number.charAt(2) == '2'
                || phone_number.charAt(2) == '5')) {
            
            return true;
        }
        return false;
    }

    public String get_phoneNumber() {
        //System.out.println("Phone Number Is : " + this.phone_number);
        return this.phone_number;
    }

    // Validate email (should be in the pattern username@subdomain.domain)
    public void set_email(String email) {   
        this.email = email;
    }
    
    public boolean check_email(){
        if (email.matches("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$")) {
            return true;
        }
        return false;
    }

    public String get_email() {
        //System.out.println("Email Is : " + this.email);
        return this.email;
    }

    
    public void set_birthDate(int day, int month, String year) {
        set_birthdate(day, month, year);
    }

    public boolean check_date(){
        if (check_birthdate() == true){
            return true;
        }
        return false;
    }
    
    public void get_birthDate() {
        get_birthdate();
    }
    
    public void set_salary(String salary){
       this.salary = salary;  
    }
    
    public boolean check_salary(){
        if (salary.length() <= 5){
            return true;
        }   
        return false;
    }
    
    public String get_salary(){
        //System.out.println("The Salary Is : " + this.salary);
        return this.salary;
    }
    
// ============== we can do the last lines of code in 47 line only ==============    
    
    // Can we implement one method to set person data
    public void set_data(String name, int age, String phone_number, String email) {
    this.name = name;
    this.age = age;
    this.phone_number = phone_number;
    this.email = email;
    }
    
    public boolean check_data(){
        if (name != null && name.length() >= 20) {
            for (char ch : name.toCharArray()) {
                if ((ch < 'A' || (ch > 'Z' && ch < 'a') || ch > 'z')) {
                    return true;
                }
            }
        }
        
        if (age >= 20 && age <= 40) {
            return true;
        }        

        if (phone_number.length() == 11
                && phone_number.charAt(0) == '0'
                && phone_number.charAt(1) == '1'
                && ( phone_number.charAt(2) == '0'
                || phone_number.charAt(2) == '2'
                || phone_number.charAt(2) == '5')) {
            
            return true;
        }

        if (email.matches("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$")) {
            return true;
        }

        if (check_birthdate() == true){
            return true;
        }
        
        return false;
    }
    
    // Can we implement one method to get person data
    public static void get_data() {
        System.out.println("Name Is : " + name);
        System.out.println("ID Is : " + id);
        System.out.println("Age Is : " + age);
        System.out.println("Phone Number Is : " + phone_number);
        System.out.println("Email Is : " + email);
        System.out.println("Salary Is : " + salary);
    }
    

}