//Write a program that prompts the user to enter two dates and then indicates
//which date comes earlier on the calendar
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};
fn main()
{
	let (first_m, first_d, first_y, second_m, second_d, second_y) :
		(i32, i32, i32, i32, i32, i32);
	print!("Enter first date (dd/mm/yy)");
	io::stdout().flush().unwrap();
	scan!("{} / {} / {}", first_d, first_m, first_y)	;
	
	print!("Enter second date (dd/mm/yy)");
	io::stdout().flush().unwrap();
	scan!("\n{} / {} / {}", second_d, second_m, second_y);
	
	if first_y < second_y
	{
		//Firs year comes before second
		print!("{}/{}/{} is earlier than {}/{}/{}\n", first_d, first_m, first_y,
														second_d, second_m, second_y);
	}
	else if second_y < first_y
	{
		//Second year comes before first
		print!("{}/{}/{} is earlier than {}/{}/{}\n", second_d, second_m, second_y,
														first_d, first_m, first_y);
	}
	else
	{
		//Same year - look at month
		if first_m < second_m
		{
			print!("{}/{}/{} is earlier than {}/{}/{}\n", first_d, first_m, first_y,
															second_d, second_m, second_y);
		}
		else if second_m < first_m
		{
			//Second month comes before first
			print!("{}/{}/{} is earlier than {}/{}/{}\n", second_d, second_m, second_y,
															first_d, first_m, first_y);
		}
		else
		{
			//same month - check date
			if first_d < second_d
			{
				print!("{}/{}/{} is earlier than {}/{}/{}\n", first_d, first_m, first_y,
																second_d, second_m, second_y);
			}
			else if second_d < first_d
			{
				print!("{}/{}/{} is earlier than {}/{}/{}\n", second_d, second_m, second_y,
																first_d, first_m, first_y);
			}
			else
			{
				print!("Both dates are the same!\n");
			}
		}
	}
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
