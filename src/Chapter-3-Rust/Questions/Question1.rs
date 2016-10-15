//Write a program that accepts a date from the user in the form
//dd/mm/yyyy and then display it in the form yyyymmdd

#[macro_use] extern crate text_io;
use std::process::Command;
use std::io::{self, Write};

fn main()
{
	let (year, month, day) : (i32, i32, i32); 
	print!("Enter a date (dd/mm/yyyy): ");
	//stdout is frequently line-buffered (yeah i know what that means)
	//by default so it may be (aka, it will be) necessary to use io:stdout().flush()
	//to ensure the output is emitted immediately.
	io::stdout().flush().unwrap(); //unwrap reminds me of xmas
	scan!("{}/{}/{}", day, month, year);
	
	//print output to screen
	print!("{}{}{}\n", year, month, day);
	io::stdout().flush().unwrap();
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
} 
