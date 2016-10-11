//Write a program that asks the user to enter a value for x and
//then displays the value of the following polynomial:
//3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

use std::process::Command;
use std::io;
use std::str::FromStr;

fn main()
{
	let mut x_str = String::new();
	println!("Please enter a value of x: ");
	io::stdin().read_line(&mut x_str).ok();
	let x = i32::from_str(x_str.trim()).unwrap();
	println!("Answer: {}", (3*(x*x*x*x))+(2*(x*x*x*x))-(5*(x*x*x))-(x*x)+(7*x)-6);
	//pause console
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
