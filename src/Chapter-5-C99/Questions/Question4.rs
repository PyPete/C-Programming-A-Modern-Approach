//Modify the broker.rs program by making both of the following changes:
//(a) Ask the user to enter the number of shares and price per share, instead of the
//value of the trade
//(b)Add statements that compute the commission charged by a rival broker ($33 plus 3c per
//share for fewer than 2000 shares; $33 plus 2c per share for 2000 shares or more). Display
//the rivals commission as well as the commissions charge by the origianl broker
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let num_shares : i32;
	let (price_per_share, value, rival_commission) : 
	(f32, f32, f32);
	let mut commission : f32;
	print!("Enter the number of shares: ");
	io::stdout().flush().unwrap();
	scan!("{}", num_shares);
	
	print!("Please enter the price per share: ");
	io::stdout().flush().unwrap();
	scan!("\n{}", price_per_share);
	//can cast between int and float using "as"
	//probably easier to just make it a f32
	//but where is the fun in that
	value = num_shares as f32 * price_per_share;
	
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
	
	//Now calculate rivals commission
	if num_shares < 2000
	{
		rival_commission = 39.00 + (0.03 * num_shares as f32);
	}
	else
	{
		rival_commission = 33.00 + (0.02 * num_shares as f32);
	}
	print!("And the rivals Commision is: ${}\n", rival_commission);
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
