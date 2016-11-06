//The value of the mathematical constant e can be expressed as an infinite series:
//e = 1 + 1/1! + 1/2! + 1/3! +..
//Write a program that approximates e by computing the value of
//1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
//where n is an integer entered by the user
#[macro_use] extern crate text_io;
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut e : f32 = 0.00;
	let (mut fact, smallie) : (f32, f32);
	let mut i:i32 = 1;
	print!("Please enter a small floating point number: ");
	io::stdout().flush().unwrap();
	scan!("{}", smallie);
	fact = 1.00;
	while 1.00/fact > smallie
	{
		fact = 1.00;
		for j in 1..i
		{
			fact *= j as f32;
		}
		e = e + (1.00/fact);
		i +=  1;
	}
	print!("Value of e is {}\n", e);
	
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
