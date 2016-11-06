//Write a program that prompts the user to enter a number n, then prints all
//even squares between 1 and n. For example, if there user enters 100, the
//program should print the following:
//4
//16
//36
//64
//100
#[macro_use] extern crate text_io;
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};
fn main()
{
	let n:i32;
	print!("Please enter a number: ");
	io::stdout().flush().unwrap();
	scan!("{}", n);
	for i in 1..n
	{
		if (i*i)%2 != 0
		{
			continue;
		}
		if (i*i) > n
		{
			break;
		}
		println!("{}", i*i);
	}
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
