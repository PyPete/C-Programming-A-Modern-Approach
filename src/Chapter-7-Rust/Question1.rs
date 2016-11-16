//Sum a series of numbers 
//process:: command used to pause
use std::process::Command;
//Need this to use print
use std::io::{self,Write};

fn main()
{
	let mut sum:i32 = 0;
	print!("This program sums a series of integers.\n");
	print!("Enter integers (0 to terminate): ");
	io::stdout().flush().unwrap();
	loop
	{
		let mut n = String::new();
		io::stdin().read_line(&mut n)
				.ok()
				.expect("Failed to read");
		let value:i32 = n.trim()
		        .parse()
		        .ok()
		        .expect("Failed to parse value into a integer");

		if value == 0
		{
			break;
		}
		else
		{
			sum = sum + value;
		}        		
	}
	print!("The sum is: {}\n", sum);
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
