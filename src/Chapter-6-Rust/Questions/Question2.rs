//Write a program that asks the user to enter two integers, then calculates
//and displays their greateset common divisor (GCD):
//Enter two integers: 12 28
//Greatest common divisor: 4
//Hint: Look at Euclids algorithm
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};
fn main()
{
	let mut a:i32; let mut b:i32; let mut temp:i32;
	let mut quotient:i32; let mut remainder:i32; 

	print!("Enter two integers: ");
	io::stdout().flush().unwrap();
	scan!("{} {}", a, b);
	//Find largest
	if a<b
	{
		//want a to be the largest one
		//swap them
		temp = a;
		a = b;
		b = temp;
	}
	//algorithm
	loop
	{
		//calculate the remainder and quotient
		remainder = a%b;
		quotient = a/b;
		//if quotient is 0, then found the answer and break
		if remainder == 0
		{
			break;
		}
		//Otherwise continue
		a = b;
		b = remainder;
	}
	//print result to user
	print!("Greatest common divisor: {}\n", b);
	
	
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
