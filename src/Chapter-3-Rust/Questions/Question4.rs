//Write a program that prompts the user to enter a telephone number in
//the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx:
//Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
//You entered 404.817.6900
#[macro_use] extern crate text_io;
//to pause console
use std::process::Command;
//to use print!
use std::io::{self, Write};
fn main()
{
	let (first, second, third) : (i32, i32, i32);
	print!("Enter phone number [(xxx) xxx-xxxx]: ");
	io::stdout().flush().unwrap();
	scan!("({}) {}-{}", first, second, third);
	print!("You entered {}.{}.{}\n", first, second, third);
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
