//Rewrite the program in Exercise 2 so that it prints the reversal of a three-digit
//number without using arithmetic to split the number into digits.
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (first, second, third) : (i32, i32, i32);
	print!("Enter a three-digit number: ");
	io::stdout().flush().unwrap();
	scan!("{} {} {}", first, second, third); //have to separate digits by a whitespace
	print!("The reversal is: {}{}{}\n", third, second, first);
	io::stdout().flush().unwrap();
	
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
