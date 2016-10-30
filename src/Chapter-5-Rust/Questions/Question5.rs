//Write a program that asks the user to enter the amount of taxable income,
//then displays the tax due
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let income : f32;
	print!("Please enter the amount of taxable income: ");
	io::stdout().flush().unwrap();
	scan!("{}", income);
	if income <= 750.00
	{
		print!("Tax due: ${}\n", income*0.01);
	}
	else if income > 750.00 && income <= 2250.00
	{
		print!("Tax due: ${}\n", 7.50+((income-750.00)*0.02));
	}
	else if income > 2250.00 && income <= 3750.00
	{
		print!("Tax due: ${}\n", 37.5+((income-2250.00)*0.03));
	}
	else if income > 3750.00 && income <= 5250.00
	{
		print!("Tax due: ${}\n", 142.50+((income-5250.00)*0.05));
	}
	else if income > 5250.00 && income <= 7000.00
	{
		print!("Tax due: ${}\n", 142.50+((income-5250.00)*0.05));
	}
	else
	{
		print!("Tax due: ${}\n", 230.00+((income-7000.00)*0.06));
	}
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
