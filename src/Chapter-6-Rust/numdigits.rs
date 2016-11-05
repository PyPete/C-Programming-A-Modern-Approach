//Calculates the number of digits in an integer
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut digits : i32 = 0;
	let mut n : i32;
	
	print!("Enter a nonnegative integer: ");
	io::stdout().flush().unwrap();
	scan!("{}", n);
	while n>0
	{
		n/= 10;
		digits +=1;		
	}
	print!("The number has {} digit(s).\n", digits);
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
