//prints int and float in various formats - i hope
use std::process::Command;
use std::fmt;


fn main()
{
	let i: i32 = 40;
	let x : f32 = 839.21;
	println!("{0:}|{1:>5}|{2:<5}", i, i, i);
	println!("{0:10.3}|{1:10.3e}|{2:-10}", x, x, x);
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
