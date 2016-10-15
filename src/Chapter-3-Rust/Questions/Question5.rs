//Write program that asks the user to enter to the numbers from 1 to 16
//(in any order) and then displays the numbers in a 4 by 4 arrangement,
//followed by the sums of rows, columns, and diagonals:
//Enter the numbers from 1 to 16 in any order:
//16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//16  3  2 13
// 5 10 11  8
// 9  6  7 12
// 4 15 14  1
//
//Row sums: 34 34 34 34
//Column sums: 34 34 34 34
//Diagonal sums: 34 34
#[macro_use] extern crate text_io;
//to pause console
use std::process::Command;
//to use print!
use std::io::{self, Write};

fn main()
{
	let (one, two, three, four, five, six, seven, eight) : (i32, i32, i32, i32, i32, i32, i32, i32);
	let (nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen) : (i32, i32, i32, i32, i32, i32, i32, i32);
	print!("Enter the numbers from 1 to 16 in any order: ");
	io::stdout().flush().unwrap();
	
	scan!("{} {} {} {} {} {} {} {} {} {} {} {} {} {} {} {}", one, two, three, four, five, six, 
												seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);
	print!("{0:4}{1:4}{2:4}{3:4}\n", one, two, three, four);
	print!("{0:4}{1:4}{2:4}{3:4}\n", five, six, seven, eight);
	print!("{0:4}{1:4}{2:4}{3:4}\n", nine, ten, eleven, twelve);
	print!("{0:4}{1:4}{2:4}{3:4}\n", thirteen, fourteen, fifteen, sixteen);
	print!("\n");
	print!("Row sums: {0:4}{1:4}{2:4}{3:4}\n", (one+two+three+four), (five+six+seven+eight),
											(nine+ten+eleven+twelve), (thirteen+fourteen+fifteen+sixteen));
	print!("Column sums: {0:4}{1:4}{2:4}{3:4}\n", (one+five+nine+thirteen), (two+six+ten+fourteen), (three+seven+eleven+fifteen),
												(four+eight+twelve+sixteen));
	print!("Diagonal sums: {0:4}{1:4}\n", (one+six+eleven+sixteen), (four+seven+ten+thirteen));

	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
