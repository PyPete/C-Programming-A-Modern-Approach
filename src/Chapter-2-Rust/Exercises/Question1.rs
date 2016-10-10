use std::process::Command; //for pausing


fn main()
{
	println!("       *");
	println!("      *");
	println!("     *");
	println!("*   *");
	println!(" * *");
	println!("  *");
		
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
