//Write a program that asks the user to enter a US.dollar amount
//and then shows how to pay that amount using the smallest number
//of $20, $10, and $1 bills:
use std::process::Command;
use std::io;
use std::str::FromStr;

fn main()
{
	let mut amount_str = String::new();
	println!("Enter a dollar amount: ");
	io::stdin().read_line(&mut amount_str).ok();
	let mut amount = i32::from_str(amount_str.trim()).unwrap();
	let twenties = amount / 20;
	println!("$20 bills: {}", twenties);
	amount = amount - (twenties * 20);
	let tens = amount / 10;
	println!("$10 bills: {}", tens);
	amount = amount - (tens * 10);
	let fives = amount / 5;
	println!("$5 bills: {}", fives);
	amount = amount - (fives * 5);
	println!("$1 bills: {}", amount);	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
