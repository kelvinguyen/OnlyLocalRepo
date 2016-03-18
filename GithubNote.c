// What is git?
--> version control system

--> Basix Git Commands
	- init : use to create a repository
	- status : current state of your local repository, none commit change
	- add : add file to the local repository
	- commit : how you commiting to your local repository
	- log : how you see change that have been committed
	- push : is the command to push your change that you have commit locally up to the 		 central repository
	- pull : pull change down from other repository
	- merge : merge change that come in from separate places , branches

--> Git command demo
	// clone a project from github to your local repository
	> git clone https://github.com/brendanPluralsight/cdm-demo.git

//Github
--> What is Github?
	- it's a server/hub for hosting Git-based project
--> Setup Github
	- GoTo: https://github.com
	- download set-it-up for window version for local Github IDE
	- create account on github website
		--> create a repository
			- give name to your repository
			- add gitignore specify to what programing language
			- add license

--> account and organization
	- account : individual user
	- organization : a group of account
	--> convert your account to organization or create organization in account setting

// git command and config
	--> mkdir GitFoler // create a folder
	--> git --version // check the version
	--> git init // create a local repository
      // system level
	--> git config --system // stored in c:\Program Files(x86)\Git\etc\gitconfig
      // user level
  --> git config --global // stored in c:\Users\Kelvin Nguyen\.gitconfig
      // repository configuration
  --> git config // stored in .git/config in each repo
      // check your configuration
  --> cat ~/.gitconfig ///list all the configuration that you have
      //
  --> git config user.name "kelvin nguyen" //set up name for your repo
  --> git config user.email "kelvinguyen@hotmail.com" // set up email for your repo
      //
  --> git config --global core.editor notepad2 // set up editor for user level
  --> git config --global help.autocorrect 1 // set autocorrect for your user at 1 second
  --> git config --global color.ui auto // set multi color to auto
  --> git config --global core.autocrlf true|false|input // set carraige return line feed
  
  
      
	