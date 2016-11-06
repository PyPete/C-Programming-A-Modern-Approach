//Write a program that calculates the remaining balance on a loan
//after the first, second, and third monthly payments
#[macro_use] extern crate text_io;
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (mut amount, mut interest, payment, num):(f32, f32, f32, i32);
	print!("Enter amount of loan: ");
	io::stdout().flush().unwrap();
	scan!("{}", amount);
	print!("Enter interest rate: ");
	io::stdout().flush().unwrap();
	scan!("\n{}", interest);
	print!("Enter monthly payment: ");
	io::stdout().flush().unwrap();
	scan!("\n{}", payment);
	//Convert interest rate to monthly interest rate
	interest = 1.0+((interest/100.00)/12.00);
	//ask user for the number of payments
	print!("Enter the number of payments: ");
	io::stdout().flush().unwrap();
	scan!("\n{}", num);
	for _ in 0..num
	{
		amount = (amount*interest)-payment;
	}
	print!("Balance remaining: ${}\n", amount);	
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
