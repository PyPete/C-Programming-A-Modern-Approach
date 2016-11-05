//Prints a table of squares using a while statement
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut i : i32 = 1;
	let n : i32;
	
	print!("This program prints a table of squares.\n");
	print!("Enter number of entries in table: ");
	io::stdout().flush().unwrap();
	scan!("{}", n);
	while i<=n
	{
		print!("{:10}{:10}\n", i, i*i);
		i+=1;
	}
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
