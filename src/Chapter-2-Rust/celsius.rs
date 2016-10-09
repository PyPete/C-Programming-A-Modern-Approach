use std::process::Command;
use std::io;
use std::str::FromStr;

//Global constants are declared outside all other
//scopes
const FREEZING_PT: f32 = 32.0;
const SCALE_FACTOR: f32 = 5.0/9.0;

fn main()
{
	let mut fahrenheit_str = String::new();
	
	println!("Enter Fahrenheit temperature: ");
	//Rust warns you if you dont put ok. I guess I dont
	//really need to for now
	io::stdin().read_line(&mut fahrenheit_str).ok();
	let fahrenheit = f32::from_str(fahrenheit_str.trim()).unwrap();
	let celsius:f32 = (fahrenheit - FREEZING_PT) *  SCALE_FACTOR;
	
	//print answer to screen
	println!("Celsius equivalent: {}", celsius);
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
