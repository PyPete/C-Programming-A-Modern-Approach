//Write a program that calculates the remaining balance on a loan
//after the first, second, and third monthly payments
use std::process::Command;
use std::io;
use std::str::FromStr;

fn main()
{
	println!("Enter amount of loan: ");
	let mut amount_str = String::new();
	io::stdin().read_line(&mut amount_str).ok();
	let amount = f32::from_str(amount_str.trim()).unwrap();
	
	println!("Enter interest rate: ");
	let mut interest_str = String::new();
	io::stdin().read_line(&mut interest_str).ok();
	let mut interest = f32::from_str(interest_str.trim()).unwrap();
	
	println!("Enter monthly payment: ");
	let mut payment_str = String::new();
	io::stdin().read_line(&mut payment_str).ok();
	let payment = f32::from_str(payment_str.trim()).unwrap();
	
	//Convert interest rate to monthly interest rate
	interest = 1.0+((interest / 100.0) / 12.0);
	
	//Calculate each payment
	let first = (amount*interest)-payment;
	let second = (first*interest)-payment;
	let third = (second*interest)-payment;
	
	//User feedback
	println!("Balance remaining after first payment: ${}", first);
	println!("Balance remaining after second payment: ${}", second);
	println!("Balance remaining after third payment: ${}", third);
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
