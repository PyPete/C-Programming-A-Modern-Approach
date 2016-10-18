//Write a program that reads an integer entered by the user and displays it in octal (base 8):
//Enter a number between 0 and 32767: 1953
//In octal, your number is: 03641

//Compute a Universal Product Code check digit
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let num : i32;
	print!("Enter a number between 0 and 32767: ");
	io::stdout().flush().unwrap();
	scan!("{}", num);
	print!("In octal, your number is: {}{}{}{}{}\n", (((((num/8)/8)/8)/8)%8),((((num/8)/8)/8)%8),
                                        (((num/8)/8)%8),((num/8)%8) ,(num%8));
	
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
