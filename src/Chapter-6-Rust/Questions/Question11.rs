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
	let n:i32;
	let mut e : f32 = 1.0;
	let mut fact : f32;
	print!("Please enter a value of n: ");
	io::stdout().flush().unwrap();
	scan!("{}", n);
	for i in 2..n
	{
		fact = 1.00;
		for j in 1..i
		{
			fact *= j as f32;
		}
		e = e + (1.0/fact);
	}
	print!("Value of e is {:.5}\n", e);
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
