//Write a program that finds the largest and smallest of four integers entered by the user
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut first : i32;
	let mut second : i32;
	let mut third : i32;
	let mut fourth : i32;
	print!("Enter four integers: ");
	io::stdout().flush().unwrap();
	scan!("{} {} {} {}", first, second, third, fourth);
	if first > second
	{
		let temp_var = first;
		first = second;
		second = temp_var;
	}
	if third > fourth
	{
		let temp_var = third;
		third = fourth;
		fourth = temp_var;
	}
	print!("Largest: {}\n", if second > fourth {second} else {fourth});
	print!("Smallest: {}\n", if first < third {first} else {third});
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
