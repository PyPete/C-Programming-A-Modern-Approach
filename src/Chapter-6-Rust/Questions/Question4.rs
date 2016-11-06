
//Add a loop to the broker.rs program so that the user can enter more than one trade and the program will
//calculate the commission on each. The programme should terminate when the user enters 0 as the trade value
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut commission : f32;
	
	loop
	{
		let mut value = String::new();
		print!("Enter value of trade: ");
		io::stdout().flush().unwrap();
		//read in num as text first
		io::stdin().read_line(&mut value)
			.ok()
			.expect("Failed to read");
		let value : f32 = value.trim()
			.parse()
			.ok()
			.expect("Failed to parse value into a float");
		if value == 0.0
		{
			break;
		}
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
			commission = 255.00 + 0.0011 * value;
		}
		else
		{
			commission = 255.00 + 0.0009 * value;
		}
		
		if commission < 39.00
		{
			commission = 39.00;
		}
		print!("Commission: ${:2}\n", commission);
		io::stdout().flush().unwrap();
	}
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
