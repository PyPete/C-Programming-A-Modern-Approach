//Write a program that asks the user to enter a dollars-and-cents
//amount, then displays the amount with 5% tax added:
//Enter an amount: 100.00
//With tax added: $105.00
use std::process::Command;
use std::io;
use std::str::FromStr;

fn main()
{
	let mut amount_str = String::new();
	println!("Enter an amount: ");
	io::stdin().read_line(&mut amount_str).ok();
	let amount = f32::from_str(amount_str.trim()).unwrap();
	println!("With tax added: ${}", amount*1.050);	
	//pause console
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
