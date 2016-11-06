//Write a program that prints a one-month calendar. The user specifies the number
//of days in the month and the day of the week on which the month begins
#[macro_use] extern crate text_io;
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (days, mut start) : (i32, i32);
	print!("Enter a number of days in month: ");
	io::stdout().flush().unwrap();
	scan!("{}", days);
	print!("Enter a starting day of the week (1=Sun, 7=Sat): ");
	io::stdout().flush().unwrap();
	scan!("\n{}", start);
	for _ in 0..start
	{
		print!("   ");
		io::stdout().flush().unwrap();
	}
	for i in 1..days
	{
		print!("{:4}", i);
		io::stdout().flush().unwrap();
		if start%7 == 0
		{
			print!("\n");
			io::stdout().flush().unwrap();
		}
		start += 1;
	}
	println!("");
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
