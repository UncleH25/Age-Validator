# Age Validator

A C++ program that reads a user's name and age from an input file (`input.txt`), determines their access level based on age, and writes the result to an output file (`access.txt`).

## 📄 Description

This program demonstrates how to:

* Read input from a file
* Validate file input using assertions
* Use conditional logic to determine access levels:
  * Limited Access for users aged 18 to 24
  * Full Access for users aged 25 and above
  * Access Denied for anyone below 18
* Write the access decision to an output file

It also provides basic input validation and notifies the user once the file is saved.

## 📂 Required Input File

You must create a file called input.txt in the same folder as your program.

The file must contain the user’s name and age, separated by a space. For example:
```
John 22
```

## 🧾 Example Output (`access.txt`)
```
Limited Access granted
```
```
Full Access granted
```
```
Access denied
```

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Age-Validator.git
cd age-validator
```

3. From a terminal (in the extracted folder), run:
```
g++ -o validator main.cpp
./age-validator
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

## 📌 License
This project is open source and free to use under the **MIT License**.
