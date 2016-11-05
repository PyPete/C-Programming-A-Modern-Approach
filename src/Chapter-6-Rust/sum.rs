//Sums a series of numbers
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut n : i32;
	let mut sum : i32 = 0;
	
	print!("This program sums a series of integers.\n");
	print!("Enter integers (0 to terminate): ");
	io::stdout().flush().unwrap();
	scan!("{}", n);
	while n != 0
	{
		sum += n;
		scan!("\n{}", n);
	}
	print!("The sum is: {}\n", sum);
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
