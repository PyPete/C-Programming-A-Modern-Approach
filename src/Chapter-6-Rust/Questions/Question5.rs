//Write a program that asks the user to enter a two-digit number, then prints
//the number with its digits reverse. A session with the program should have
//the following appearance:
//Enter a two-digit number: 28
//The reversal is: 82;
#[macro_use] extern crate text_io;
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut num:i32;
	print!("Enter a number: ");
	io::stdout().flush().unwrap();
	scan!("{}", num);
	print!("The reversal is: ");
	io::stdout().flush().unwrap();
	loop
	{
		//print remainder
		print!("{}", num%10);
		io::stdout().flush().unwrap();
		//Reduce by 10
		num /= 10;
		if num == 0
		{
			break;
		}
	}
	println!("");
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
