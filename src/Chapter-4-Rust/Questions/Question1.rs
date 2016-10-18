//Write a program that asks the user to enter a two-digit number, then prints
//the number with its digits reverse. A session with the program should have
//the following appearance:
//Enter a two-digit number: 28
//The reversal is: 82;

//Compute a Universal Product Code check digit
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let num : i32;
	print!("Enter a two-digit number: ");
	io::stdout().flush().unwrap();
	
	scan!("{}", num);
	print!("The reversal is: {}{}\n", num%10, num/10);	
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
