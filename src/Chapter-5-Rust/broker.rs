//Calculates a broker's commision
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut commission : f32;
	let value : f32;
	print!("Enter value of trade: ");
	io::stdout().flush().unwrap();
	scan!("{}", value);
	if value < 2500.00
	{
		commission = 30.00 + 0.017 * value;
	}
	else if value < 6250.00
	{
		commission = 56.00 + 0.0066 * value;
	}
	else if value < 20000.00
	{
		commission = 76.00 + 0.0034 * value;
	}
	else if value < 50000.00
	{
		commission = 100.00 + 0.0022 * value;
	}
	else if value < 500000.00
	{
		commission = 155.00 + 0.0011 * value;
	}
	else
	{
		commission = 255.00 + 0.0009 * value;
	}
	
	if commission < 39.00
	{
		commission = 39.00;
	}
	print!("Commission: ${}\n", commission);
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
