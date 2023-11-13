/*
    ************** Author **************
    Nmae    : Ahmed Badawi Hosny Mahmoud
    Section : 1
    ID      : 2200091
    ************************************
*/

/**
 * ************************************
 * Complete this class (person) to do the following:
 *
 * 1- Implement getter and setter for the age attribute 2- Age should be within
 * the range of 20 to 40 inclusive Done
 *
 * 3- Implement a private method to check name as follows: Name should not be
 * empty. Name should include only English characters. Length of Name should not
 * exceed 20 characters.
 *
 * Can we implement one method to get person data Can we implement one method to
 * set person data
 *
 * 4- Add phone number and email to the Person class 5- Add birth date that
 * contains Day, Month, and Year
 *
 * 6- Validate phone number ( should be 11 digits starting with 010, 012, or
 * 015)
 *
 * 7- Validate email (should be in the pattern username@subdomain.domain)
 *
 * 8- Implement birth date as a class (Do not use Java Date class)
 *
 * 9- Implement the required methods to set and get day, month, and year 10-
 * Implement the required methods to validate day, month and year
 */

package person.task;

import java.util.Scanner;

public class Main {
      static Scanner input = new Scanner(System.in);
      static Person p1 = new Person();
      static String name, phone_number, email, year, id, salary;
      static int Age, day, month;
    public static void main(String Task[]) {
        int cohice;
        
        do {
            System.out.println("Please Enter The Number That what you want");
            System.out.println("1- Professor");
            System.out.println("2- Teaching Assistant");
            System.out.println("3- Employee");
            System.out.println("4- Student");
            System.out.println("5- Exit");
            cohice = input.nextInt();
            
            switch (cohice) {
                case 1:
                    Professor();
                    break;
                case 2:
                    teaching_Assistant();
                    break;
                case 3:
                    employee();
                    break;
                case 4:
                    student();
                    break;
                case 5:
                    break;
                default:
                    System.out.println("Wrong! Enter A Valid number");
                    
                    break;
            }

        } while (cohice != 5);
        
    }
    
    // Insert Data Function
    public static void insert_data(){
        do {
            System.out.println("Please Enter Your Name : ");
            name = input.nextLine();
            p1.set_name(name);

            if (!p1.check_name()) {
                printLine();
                System.out.println("Invalid Name! Please enter valid Name");
                printLine();
            }
        } while (!p1.check_name());
        
        do {            
            System.out.println("Please Enter Your ID : ");
            id = input.next();
            p1.set_id(id);
            
            if (!p1.check_id()){
                printLine();
                System.out.println("Invalid ID! Please enter valid ID");
                printLine();
            }
        } while (!p1.check_id());
        
        do {
            System.out.println("Please Enter Your Age : ");
            Age = input.nextInt();
            p1.set_age(Age);

            if (!p1.check_age()) {
                printLine();
                System.out.println("Invalid Age! Please enter an age that between 20 to 40");
                printLine();
            }
        } while (!p1.check_age());

        do {
            System.out.println("Please Enter Your Phone Number : ");
            phone_number = input.next();
            p1.set_phoneNumber(phone_number);

            if (!p1.check_phoneNumber()) {
                printLine();
                System.out.println("Invalid Phone Number! The Phone Number Should Started with 010, 012, or 015");
                printLine();
            }
        } while (!p1.check_phoneNumber());

        do {
            System.out.println("Please Enter Your Email : ");
            email = input.next();
            p1.set_email(email);
            if (!p1.check_email()) {
                printLine();
                System.out.println("Invalid Email! The email should be in format (username@subdomain.domain)");
                printLine();
            }
        } while (!p1.check_email());

        
        do {            
        System.out.println("Please Enter Your Birth Date");
        System.out.println("Day   : ");
        day = input.nextInt();
        System.out.println("Month : ");
        month = input.nextInt();
        System.out.println("Year  : ");
        year = input.next();
        p1.set_birthDate(day, month, year);
        
        if (!p1.check_date()){
            System.out.println("Wrong! Please insert a valid Birth Date");
        }
        } while (!p1.check_date());        
    }
    
    // Insert Salary Function
    public static void insert_salary(){
        do {            
            System.out.println("Please Enter Your Salary");
            salary = input.next();
            p1.set_salary(salary);
            
            if (!p1.check_salary()){
                printLine();
                System.out.println("");
                printLine();
            }
        } while (!p1.check_salary());
    }
    
    // Show Data Function
    public static void show_data(){
        printLine();
        p1.get_name();
        p1.get_id();
        p1.get_age();
        p1.get_phoneNumber();
        p1.get_email();
        p1.get_birthDate();
        printLine();
    }
    // Show Salary Data
    public static void show_salary(){
        p1.get_salary();
    }

    // Professor Function 
    public static void Professor() {
        int profChoice;
        do {
        System.out.println("1- Insert New Professor");
        System.out.println("2- Show Data");
        System.out.println("3- Return to main page");
        profChoice = input.nextInt();
  
        switch (profChoice) {
            case 1:
                insert_data();
                insert_salary();
                break;
            case 2:
                show_data();
                show_salary();
                break;
            case 3:
                break;
            default:
              System.out.println("Wrong! Enter A Valid number");
              
              break;
        }
        
        } while (profChoice != 3);
    }
    
    // Teaching Assistant Function
    public static void teaching_Assistant () {
        int tecAss_choice;
        do {
        System.out.println("1- Insert New Teaching Assistant");
        System.out.println("2- Show Data");
        System.out.println("3- Return to main page");
        tecAss_choice = input.nextInt();
  
        switch (tecAss_choice) {
            case 1:
                insert_data();
                insert_salary();
                break;
            case 2:
                show_data();
                show_salary();
                break;
            case 3:
                break; 
            default:
              System.out.println("Wrong! Enter A Valid number");
              
              break;
        }
        
        } while (tecAss_choice != 3);    
    }
    
    // Employee Function
    public static void employee() {
        int emplochoice;
        do {
        System.out.println("1- Insert New Employee");
        System.out.println("2- Show Data");
        System.out.println("3- Return to main page");
        emplochoice = input.nextInt();
  
        switch (emplochoice) {
            case 1:
                insert_data();
                insert_salary();
                break;
            case 2:
                show_data();
                show_salary();
                break;
            case 3:
                break;
            default:
              System.out.println("Wrong! Enter A Valid number");
              
              break;
        }
        
        } while (emplochoice != 3); 
    }
        
    // Student Function
    public static void student() {
        int studchoice;
        do {
        System.out.println("1- Insert New Student");
        System.out.println("2- Show Data");
        System.out.println("3- Return to main page");
        studchoice = input.nextInt();
  
        switch (studchoice) {
            case 1:
                insert_data();
                break;
            case 2:
                show_data();
                break;
            case 3:
                break;               
            default:
              System.out.println("Wrong! Enter A Valid number");
              
              break;
        }
        
        } while (studchoice != 3); 
    }
    
    // Print Line Function
    public static void printLine() {
        System.out.println("----------------------------------------------");
    }
}
