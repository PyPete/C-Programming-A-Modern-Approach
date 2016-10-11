//Modify the program of Programming Project 5 so that the polynomial
//is evaluated using the following formula:
//((((3x+2)x-5)x-1)x+7)x-6
//Note that the modified program performs fewer multiplications. This
//technique for evaluating polynomials is known as Horner's Rule.

use std::process::Command;
use std::io;
use std::str::FromStr;

fn main()
{
	let mut x_str = String::new();
	println!("Please enter a value of x: ");
	io::stdin().read_line(&mut x_str).ok();
	let x = i32::from_str(x_str.trim()).unwrap();
	println!("Answer: {}", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
	//pause console
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
