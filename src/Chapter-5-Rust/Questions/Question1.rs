//Write a program that calculates how many digits a number contains:
//Enter a number: 374
//The number 374 has 3 digits
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let num : i32;
	print!("Enter a number: ");
	io::stdout().flush().unwrap();
	scan!("{}", num);
	if num < 10
	{
		print!("The number {} has 1 digit\n", num);
	}
	else if num > 9 && num < 100
	{
		print!("The number {} has 2 digits\n", num);
	}
	else
	{
		print!("The number {} has 3 digits\n", num);
	}
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
