//Extend Exercise 1 to include a three digit number
//Compute a Universal Product Code check digit
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let num : i32;
	print!("Enter a three-digit number: ");
	io::stdout().flush().unwrap();
	
	scan!("{}", num);
	print!("The reversal is: {}{}{}\n", num%10, (num/10)%10, num/100);	
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
